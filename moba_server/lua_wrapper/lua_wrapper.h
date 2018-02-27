#pragma once

#include "lua.hpp"
#include <string>

class lua_wrapper {
public:
	static void init();
	static void exit();

	//Ö´ÐÐlua ÎÄ¼þ
	static bool do_file(std::string& lua_file);
	static lua_State* lua_state();

public:
	static int execute_script_handler(int nHandler, int numArgs);
	static void remove_script_handler(int nHandler);
public:
	static void reg_func2lua(const char* name, int(*c_func)(lua_State* L));
	static void add_seatch_path(std::string& path);

};