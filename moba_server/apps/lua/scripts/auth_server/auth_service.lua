local Stype = require("Stype")
local Cmd = require("Cmd")
local guest = require("auth_server/guest")
local edit_profile = require("auth_server/edit_profile")
local account_grade = require("auth_server/account_upgrade")

local auth_service_handlers = {}
auth_service_handlers[Cmd.eGuestLoginReq] = guest.login
auth_service_handlers[Cmd.eEditProfileReq] = edit_profile.do_edit_profile
auth_service_handlers[Cmd.eAccountUpgradeReq] = account_grade.do_upgrade

--{stype,ctype,utag,body}
function on_auth_recv_cmd(s,msg)
	print(msg[1],msg[2],msg[3],msg[4].guest_key)
	if auth_service_handlers[msg[2]] then
		auth_service_handlers[msg[2]](s, msg)
	end
end

function on_auth_session_disconnect(s, stype)
end

local auth_service = {
	on_session_recv_cmd = on_auth_recv_cmd,
	on_session_disconnect = on_auth_session_disconnect,
}

return auth_service