cmake_minimum_required(VERSION 3.20)

project(proto_hw1-3 VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -pedantic -O0)

#files to execute
add_executable(pointer_swap pointer_swap.c)
