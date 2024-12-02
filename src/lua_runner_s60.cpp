#include <lua.hpp>

#ifdef __GCCE__
#include <staticlibinit_gcce.h>
#endif

int main(void) {
	// Lua code as string, the long string allows changing string in EXE for code modifications
    char * code = "print('Hello, World') -- CODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE"
    		"CODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODECODE";

    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    // Here we load the string and use lua_pcall for run the code
    if (luaL_loadstring(L, code) == LUA_OK) {
        if (lua_pcall(L, 0, 0, 0) == LUA_OK) {
            // If it was executed successfuly we 
            // remove the code from the stack
            lua_pop(L, lua_gettop(L));
        }
    }
    
    lua_close(L);
    
    // Uncomment next 2 lines for pausing console window if you have STDIOSERVER installed in the device
    //printf("Press a character to exit!");
    //int c = getchar();
    
    return 0;
}

