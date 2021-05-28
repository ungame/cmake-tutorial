cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(HelloWorld_VERSION_MAJOR 0)
set(HelloWorld_VERSION_MINOR 0)
set(HelloWorld_VERSION_PATCH 1)

configure_file(
    "${PROJECT_SOURCE_DIR}/HelloWorldConfig.h.in"
    "${PROJECT_BINARY_DIR}/HelloWorldConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")

add_executable(hello main.cpp)