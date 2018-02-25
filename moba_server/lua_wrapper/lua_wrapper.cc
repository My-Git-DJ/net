#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "tolua_fix.h"
#include "lua_wrapper.h"
#include "mysql_export_to_lua.h"


lua_State* g_lua_State = NULL;

lua_State* 
lua_wrapper::lua_state() {
	return g_lua_State;
}

void 
lua_wrapper::init() {
	g_lua_State = luaL_newstate();
	luaL_openlibs(g_lua_State);

	toluafix_open(g_lua_State);

	register_mysql_export(g_lua_State);
}

void 
lua_wrapper::exit() {
	if (g_lua_State != NULL) {
		lua_close(g_lua_State);
		g_lua_State = NULL;
	}
}

bool
lua_wrapper::exe_lua_file(const char* lua_file) {

	if (luaL_dofile(g_lua_State, lua_file)) {
		return false;
	}
	return true;
}

static bool
pushFunctionByHandler(int nHandler)
{
	toluafix_get_function_by_refid(g_lua_State, nHandler);                  /* L: ... func */
	if (!lua_isfunction(g_lua_State, -1))
	{
		//log_error("[LUA ERROR] function refid '%d' does not reference a Lua function", nHandler);
		lua_pop(g_lua_State, 1);
		return false;
	}
	return true;
}

static int
executeFunction(int numArgs)
{
	int functionIndex = -(numArgs + 1);
	if (!lua_isfunction(g_lua_State, functionIndex))
	{
		//log_error("value at stack [%d] is not function", functionIndex);
		lua_pop(g_lua_State, numArgs + 1); // remove function and arguments
		return 0;
	}

	int traceback = 0;
	lua_getglobal(g_lua_State, "__G__TRACKBACK__");                         /* L: ... func arg1 arg2 ... G */
	if (!lua_isfunction(g_lua_State, -1))
	{
		lua_pop(g_lua_State, 1);                                            /* L: ... func arg1 arg2 ... */
	}
	else
	{
		lua_insert(g_lua_State, functionIndex - 1);                         /* L: ... G func arg1 arg2 ... */
		traceback = functionIndex - 1;
	}

	int error = 0;
	error = lua_pcall(g_lua_State, numArgs, 1, traceback);                  /* L: ... [G] ret */
	if (error)
	{
		if (traceback == 0)
		{
			//log_error("[LUA ERROR] %s", lua_tostring(g_lua_State, -1));        /* L: ... error */
			lua_pop(g_lua_State, 1); // remove error message from stack
		}
		else                                                            /* L: ... G error */
		{
			lua_pop(g_lua_State, 2); // remove __G__TRACKBACK__ and error message from stack
		}
		return 0;
	}

	// get return value
	int ret = 0;
	if (lua_isnumber(g_lua_State, -1))
	{
		ret = (int)lua_tointeger(g_lua_State, -1);
	}
	else if (lua_isboolean(g_lua_State, -1))
	{
		ret = (int)lua_toboolean(g_lua_State, -1);
	}
	// remove return value from stack
	lua_pop(g_lua_State, 1);                                                /* L: ... [G] */

	if (traceback)
	{
		lua_pop(g_lua_State, 1); // remove __G__TRACKBACK__ from stack      /* L: ... */
	}

	return ret;
}

int 
lua_wrapper::execute_script_handler(int nHandler, int numArgs) {
	int ret = 0;
	if (pushFunctionByHandler(nHandler))                                /* L: ... arg1 arg2 ... func */
	{
		if (numArgs > 0)
		{
			lua_insert(g_lua_State, -(numArgs + 1));                        /* L: ... func arg1 arg2 ... */
		}
		ret = executeFunction(numArgs);
	}
	lua_settop(g_lua_State, 0);
	return ret;
}

void
lua_wrapper::remove_script_handler(int nHandler)
{
	toluafix_remove_function_by_refid(g_lua_State, nHandler);
}