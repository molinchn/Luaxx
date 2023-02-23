# 设置最低版本号
cmake_minimum_required(VERSION 3.5)

# 设置项目名称和版本号
project(mylib VERSION 1.0.0)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置库生成位置
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# 包含头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lua/src)

# 添加源文件
add_library(mylib SHARED mylib.cc)

# 链接库
target_link_libraries(mylib ${CMAKE_CURRENT_SOURCE_DIR}/lua/src/liblua.a)
