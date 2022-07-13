cmake_minimum_required(VERSION 3.20)
project(lua)

set(CMAKE_CXX_STANDARD 14)

include_directories(sourcePackage/json-c sourcePackage/json-c/mingw-build)
link_directories(sourcePackage/json-c/mingw-build)

add_executable(lua sourcePackage/json-c/tests/test_float.c)

target_link_libraries(lua lua54)