cmake_minimum_required(VERSION 3.24)
project(findmax)

set(CMAKE_CXX_STANDARD 17)

add_executable(findmax main.cpp FindMax.h)
add_subdirectory(tests)