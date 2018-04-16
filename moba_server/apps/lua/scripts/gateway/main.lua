--初始化日志模块
Logger.init("logger/gateway/", "gateway", true)
--end

-- 初始化协议模块
local proto_type = {
    PROTO_JSON = 0,
    PROTO_BUF = 1,
}
ProtoMan.init(proto_type.PROTO_BUF)
-- 如果是protobuf协议，还要注册一下映射表
if ProtoMan.proto_type() == proto_type.PROTO_BUF then 
  local cmd_name_map = require("cmd_name_map")
  if cmd_name_map then 
    ProtoMan.register_protobuf_cmd_map(cmd_name_map)
  end
end
--end

local game_config = require("game_config")

-- 开启网关端口监听
Netbus.tcp_listen(game_config.gateway_tcp_port)
print("Tcp server listen At ".. game_config.gateway_tcp_port)
Netbus.ws_listen(game_config.gateway_ws_port)
print("Ws server listen At ".. game_config.gateway_ws_port)
-- Netbus.udp_listen(8002)
--end

local services = game_config.servers
local gw_service = require("gateway/gw_service")
for k,v in pairs(services) do
	local ret = Service.register_with_raw(v.stype,gw_service)
	if ret then
		print("register gw_service["..v.stype.. "] service success !!!")
	else
		print("register gw_service["..v.stype.. "] service failed !!!")
	end
end
