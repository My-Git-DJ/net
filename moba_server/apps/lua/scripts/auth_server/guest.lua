local mysql_center = require("database/mysql_auth_center")
local Respones = require("Respones")

function login(s,msg)
	local g_key = msg[4].guest_key
	print(msg[1],msg[2],msg[3],msg[4])
	mysql_center.get_guest_uinfo(g_key, function(err, uinfo)
		if err then  --告诉客户端错误信息
			return
		end
		if uinfo == nil then --没有查到对应的 g_key 信息
			mysql_center.insert_guest_user(g_key,function(err ,ret)
				if err then  --告诉客户端错误信息
					return
				end

				login(s,msg)
			end)
			return
		end
		--找到了我们gkey对应的游客数据
		if uinfo.status ~= 0 then  --账号被查封
			return 
		end
		if uinfo.is_guest ~= 1 then --账号已经不是游客账号
			return 
		end
		--end

		print(uinfo.uid,uinfo.unick)  --登陆成功
	end)
end

local guest = {
	login = login
}

return guest