local Stype = require("Stype")
local Cmd = require("Cmd")

--{stype,ctype,utag,body}
function on_auth_recv_cmd(s,msg)
	print(msg[1],msg[2],msg[3],msg[4].guest_key)

end

function on_auth_session_disconnect(s, stype)
end

local auth_service = {
	on_session_recv_cmd = on_auth_recv_cmd,
	on_session_disconnect = on_auth_session_disconnect,
}

return auth_service