cmake_minimum_required(VERSION 3.20)
project(lua)

set(CMAKE_CXX_STANDARD 14)

include_directories(lua-5.4.4/src)

link_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/lua-5.4.4/src
)

add_executable(lua
        cplus/main.cpp)

target_link_libraries(lua lua54)