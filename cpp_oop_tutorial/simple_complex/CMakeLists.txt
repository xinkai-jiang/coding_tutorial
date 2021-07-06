cmake_minimum_required(VERSION 2.8.0)

project(simple_complex)

include_directories(${PROJECT_SOURCE_DIR})

add_library(simple_complex SHARED src/complex.cpp)

add_executable(simple_complex_test src/complex_test.cpp)

target_link_libraries(simple_complex_test simple_complex)