#pragma once

#include "lua.hpp"

class lua_wrapper {
public:
	static void init();
	static void exit();

	//ִ��lua �ļ�
	static bool exe_lua_file(const char* lua_file);
};