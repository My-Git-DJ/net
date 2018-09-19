local Stype = require("Stype")
local remote_servers = {}

--注册我们的服务所部署的ip和端口
remote_servers[Stype.Auth] = {
	stype = Stype.Auth,
	ip = "127.0.0.1",
	port = 8000,
	desic = "Auth server",
}

-- remote_servers[Stype.System] = {
-- 	stype = Stype.System,
-- 	ip = "127.0.0.1",
-- 	port = 8001
-- }



local game_config = {
	gateway_tcp_ip = "127.0.0.1",
	gateway_tcp_port = 6080,

	gateway_ws_ip = "127.0.0.1",
	gateway_ws_port = 6081,

	servers = remote_servers,

	auth_center = {
		host = "192.168.99.100",         --db host
		port = 3306,              -- db port
		db_name = "auth_center",  --db name
		uname = "root",           --db account
		upwd = "123456",          --db pwd
	},
	center_redis = {
		host = "127.0.0.1",			--redis所在的host
		port = 6379,				-- redis 端口
		db_index = 1,				--数据1
	},
}


return game_config