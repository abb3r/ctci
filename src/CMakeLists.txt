cmake_minimum_required(VERSION 3.13)
project(ctci)

set(SRC
main.cpp
1_1.cpp
1_2.cpp)

add_executable(runCode ${SRC})
add_subdirectory(unittests)