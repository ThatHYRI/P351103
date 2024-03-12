cmake_minimum_required(VERSION 3.20)

project(P351103 VERSION 1.0 LANGUAGES C)

#c standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#compile options, enable warnings, 0 optimization
add_compile_options(-Wall -Wextra -pedantic)

add_subdirectory(./code)

#pending to add exec
#add_executable(cmake_example_exec pointer_swap.c)
