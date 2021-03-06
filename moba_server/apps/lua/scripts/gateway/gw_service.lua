local game_config = require("game_config")

-- stype -->session的一个映射
local server_session_man = {}
--当前正在连接的服务器
local do_connection = {}

--临时的ukey来找client session
local g_ukey = 1
local client_session_ukey = {}
-- uid 来找cleint session
local client_session_uid = {}
local Stype = require("Stype")
local Cmd = require("Cmd")
local Respones = require("Respones")

function connect_to_server(stype,ip,port)
	Netbus.tcp_connect(ip,port,function(err,session)
		do_connection[stype] = false
		if err ~= 0 then
			Logger.error("connec error to server [" .. game_config.servers[stype].desic.."]" .. ip..":" .. port)
			return 
		end
		server_session_man[stype] = session
		print("connec success to server [" .. game_config.servers[stype].desic.."]" .. ip..":" .. port)
		end)
end

function check_server_connect()
	for k,v in pairs(game_config.servers) do
		if server_session_man[v.stype] == nil and
			do_connection[v.stype] == false then
			do_connection[v.stype] = true
			print("connecting to server [" .. v.desic .."]" .. v.ip..":" .. v.port)
			connect_to_server(v.stype,v.ip,v.port)
		end
	end
end

function gw_service_init()
	for k,v in pairs(game_config.servers) do
		server_session_man[v.stype] = nil
		do_connection[v.stype] = false
	end

	--启动一个定时器
	Scheduler.scheduler(check_server_connect,1000,-1,5000)
	--end
end

function is_login_return_cmd(ctype)
	if ctype == Cmd.eGuestLoginRes then
		return true
	end
	return false
end

function send_to_client(server_session,raw_cmd)
	local stype,ctype,utag = RawCmd.read_head(raw_cmd)
	local client_session = nil

	if is_login_return_cmd(ctype) then
		client_session = client_session_ukey[utag]
		client_session_ukey[utag] = nil 
		if client_session == nil then
			return 
		end

		local body = RawCmd.read_body(raw_cmd)

		if body.status ~= Respones.OK then	
			RawCmd.set_utag(raw_cmd, 0)
			Session.send_raw_cmd(client_session, raw_cmd)
			return
		end 

		local uid = body.uinfo.uid
		-- 判断是否有已经登陆的session
		if client_session_uid[uid] ~= nil and client_session_uid[uid] ~= client_session then
			local relogin_cmd = {Stype.Auth, Cmd.eRelogin,0,nil}
			Session.send_msg(client_session_uid[uid], relogin_cmd)
			Session.close(client_session_uid[uid])
			-- client_session_uid[uid] = nil
		end

		client_session_uid[uid] = client_session
		Session.set_uid(client_session, uid)

		body.uinfo.uid = 0
		local login_res = {stype, ctype,0,body}
		Session.send_msg(client_session_uid[uid], login_res)
		return
	end

	client_session = client_session_uid[utag]
	RawCmd.set_utag(raw_cmd, 0)
	if client_session then
		Session.send_raw_cmd(client_session, raw_cmd)
	end
end

function is_login_request_cmd(ctype)
	if ctype == Cmd.eGuestLoginReq then
		return true
	end
	return false
end

--s来自于客户端
function send_to_server(client_session,raw_cmd)
	local stype,ctype,utag = RawCmd.read_head(raw_cmd)
	print(stype,ctype,utag)
	local server_session = server_session_man[stype]
	if server_session == nil then --可以回一个命令给客户端,系统错误
		return 
	end

	if is_login_request_cmd(ctype) then
		utag = Session.get_utag(client_session)
		if utag == 0 then
			utag = g_ukey
			g_ukey = g_ukey + 1
			Session.set_utag(client_session, utag)
		end
		client_session_ukey[utag] = client_session
	else
		local uid = Session.get_uid(client_session)
		utag = uid
		if utag == 0 then -- 该操作要先登陆
			return 
		end
		-- client_session_uid[uid] = client_session
	end
	-- 打上utag 然后转发给我们的服务器
	RawCmd.set_utag(raw_cmd, utag)
	Session.send_raw_cmd(server_session, raw_cmd)
end

--{stype,ctype,utag,body}
function on_gw_recv_raw_cmd(s,raw_cmd)
	if Session.asclient(s) == 0 then --发送给服务器
		send_to_server(s,raw_cmd)
	else
		send_to_client(s,raw_cmd)
	end
end

function on_gw_session_disconnect(s, stype)
	-- 连接到服务器的session断线了
	if Session.asclient(s) == 1 then
		for k,v in pairs(server_session_man) do
			if v == s then
				print("gateway disconnect [ " ..game_config.servers[k].desic .. "]")
				server_session_man[k] = nil 
				return 
			end
		end
		return
	end

	-- 连接到网关的客户端断线了
	-- 吧客户端从临时映射表里面删除
	local utag = Session.get_utag(s)
	if client_session_ukey[utag] ~= nil and client_session_ukey[utag] == s then
		client_session_ukey[utag] = nil -- 保证utag --> value 删除
		Session.set_utag(s,0)
	end
	-- end

	-- 吧客户端从uid 映射表里移除
	local uid = Session.get_uid(s)
	if client_session_uid[uid] ~= nil and client_session_uid[uid] == s then
		client_session_uid[uid] = nil
	end
	--end

	local server_session = server_session_man[stype]
	if server_session == nil then
		return 
	end

	-- 客户端uid 用户掉线了，我要吧这个事件告诉和网关连接的stype服务器
	if uid ~= 0 then
		local user_loset = {stype, Cmd.eUserLostConn,uid,nil}
		Session.send_msg(server_session,user_loset)
	end
end

gw_service_init()

local gw_service = {
	on_session_recv_raw_cmd = on_gw_recv_raw_cmd,
	on_session_disconnect = on_gw_session_disconnect,
}

return gw_service