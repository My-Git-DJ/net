#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <iostream>
#include <string>
using namespace std;

#include "../../netbus/proto_man.h"
#include "../../netbus/netbus.h"
#include "proto/pf_cmd_map.h"

#include "../../utils/logger.h"
#include "../../utils/time_list.h"

#include "../../database/mysql_wrapper.h"
#include "../../database/redis_wrapper.h"

#include "../../lua_wrapper/lua_wrapper.h"

static void on_logger_timer(void* update) {
	log_debug("on_logger_timer");
}

static void 
on_query_cb(const char* err, std::vector<std::vector<std::string>> *result) {
	if (err != NULL) {
		printf("%s\n", err);
		return;
	}

	printf("success!!!\n");
}

static void
on_open_cb(const char* err, void* context) {
	if (err != NULL) {
		printf("%s\n", err);
		return;
	}

	printf("connect success\n");

	//mysql_wrapper::query(context, "update user set user_name = \"blake\" where user_id = 10", on_query_cb);
	mysql_wrapper::query(context, "select * from user", on_query_cb);

	//mysql_wrapper::close(context);
}

static void 
test_db() {
	mysql_wrapper::connect("127.0.0.1", 3306, "new_test", "root", "king199241", on_open_cb);
}

static void
on_redis_query_cb(const char* err,redisReply* result) {
	if (err) {
		printf("%s\n", err);
		return;
	}
	printf("success\n");
}

static void
on_redis_open_cb(const char* err, void* context) {
	if (err != NULL) {
		printf("%s\n", err);
		return;
	}

	printf("connect success\n");

	//mysql_wrapper::query(context, "update user set user_name = \"blake\" where user_id = 10", on_query_cb);
	redis_wrapper::query(context, "select 1", on_redis_query_cb);

	//redis_wrapper::close_redis(context);
}

static void 
test_redis() {
	redis_wrapper::connect("127.0.0.1", 6379, on_redis_open_cb);
}

int main(int argc, char** argv) {
	proto_man::init(PROTO_BUF);
	init_pf_cmd_map();

	//logger::init("logger/gateway/", "gateawy", true);
	//schedule(on_logger_timer, NULL, 3000, -1);

	//test_db();
	//test_redis();


	netbus::instance()->init();
	netbus::instance()->start_tcp_server(6080);
	netbus::instance()->start_ws_server(8001);
	netbus::instance()->start_udp_server(8002);
	
	lua_wrapper::init();
	lua_wrapper::exe_lua_file("./main.lua");

	netbus::instance()->run();
	lua_wrapper::exit();
	return 0;
}