cmake_minimum_required(VERSION 3.20)

# define project name
project(P351103 VERSION 1.0 LANGUAGES C)

#set c standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#add compile options, enable warnings, 0 optimization
add_compile_options(-Wall -Wextra -pedantic)

#add library for functions 
add_library(libfun STATIC src/developer.c 
                          src/developer_group.c)
#add include files to library
target_include_directories(libfun PUBLIC include) 

#executable & assigned files
add_executable(libexe src/main.c)

#add include directories
target_include_directories(libexe PUBLIC include)

#link libaries 
target_link_libraries(libexe PRIVATE libfun) 

