cmake_minimum_required(VERSION 2.8.0)

project(simple_string)

include_directories(${PROJECT_SOURCE_DIR})

add_library(simple_string SHARED src/string.cpp)

add_executable(simple_string_test src/string_test.cpp)

target_link_libraries(simple_string_test simple_string)