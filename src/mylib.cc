#include <iostream>
#include <lua.hpp>

static int l_test (lua_State *L) {
    std::cout << "hello" << std::endl;
    return 0;
}

static const struct luaL_Reg mylib [] = {
    {"test", l_test},
    {NULL, NULL}
};

extern "C" int luaopen_libmylib(lua_State *L) {
    // 新建一个库(table)，把函数加入这个库中，并返回
    luaL_newlib(L, mylib);
    return 1;
}
