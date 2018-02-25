#pragma once

#include "lua.hpp"

class lua_wrapper {
public:
	static void init();
	static void exit();

	//Ö´ÐÐlua ÎÄ¼þ
	static bool exe_lua_file(const char* lua_file);
	static lua_State* lua_state();

public:
	static int execute_script_handler(int nHandler, int numArgs);
	static void remove_script_handler(int nHandler);
};