#ifndef __LE_EVENTS_H__
#define __LE_EVENTS_H__

#include <lua.h>

lua_State *L;

int luaEventKeypress(int c);

int extSetStatusMessage(lua_State *L);

int luaInit();

int luaExecuteScript(const char *filename);

#endif
