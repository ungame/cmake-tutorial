cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(HelloWorld_VERSION_MAJOR 0)
set(HelloWorld_VERSION_MINOR 0)
set(HelloWorld_VERSION_PATCH 1)

configure_file(
    "${PROJECT_SOURCE_DIR}/include/HelloWorldConfig.h.in"
    "${PROJECT_BINARY_DIR}/include/HelloWorldConfig.h"
)


include_directories("${PROJECT_BINARY_DIR}")

add_library(say-hello
    "include/hello.hpp"
    hello.cpp
)

add_executable(hello main.cpp)

target_link_libraries(hello PRIVATE say-hello)