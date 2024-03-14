cmake_minimum_required(VERSION 3.20)

# define the project name
project(P351103 VERSION 1.0 LANGUAGES C)

#c standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#c++ standard, can be removed?
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#compile options, enable warnings, 0 optimization
add_compile_options(-Wall -Wextra -pedantic)

#exe
add_executable(P351103 src/main.c)
#ad include directories
target_include_directories(P351103 PRIVATE include)