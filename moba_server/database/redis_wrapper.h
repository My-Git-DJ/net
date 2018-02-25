#pragma once

#include <hiredis.h>

class redis_wrapper {
public:
	static void connect(char* ip, int port, void(*opne_cb)(const char* err, void* context));
	static void close_redis(void* context);
	static void query(void* context, char* cmd, void(*query_cb)(const char* err, redisReply* result));
};