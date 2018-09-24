-- 账号升级脚本

function do_upgrade(s, req)
	local uid = req[3]
	local account_upgrade_req = req[4]

	local uname = account_upgrade_req.uname
	local upwd_md5 = account_upgrade_req.upwd_md5
	if(string.len(uname) <= 0 or string.len(upwd_md5) ~= 32 ) then
		local msg = {Stype.Auth, Cmd.eAccountUpgradeRes, uid, {
			status = Respones.InvalidParams,
		}}
		Session.send_msg(s, msg)
	end

	--检查uid 是否为游客
	print(uname, upwd_md5, uid)
	--end

	

end

local account_upgrade = {
	do_upgrade = do_upgrade,
}
return account_upgrade