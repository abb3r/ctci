cmake_minimum_required(VERSION 3.13)
project(ctciTests)

include(FetchContent)
FetchContent_Declare(
    googletest 
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(SRC testRunner.cpp)

add_executable(runTests ${SRC})

target_include_directories(runTests PRIVATE ../)
target_link_libraries(runTests PRIVATE gtest_main)
target_link_libraries(runTests PRIVATE chapter1)

include(GoogleTest)
gtest_discover_tests(runTests)