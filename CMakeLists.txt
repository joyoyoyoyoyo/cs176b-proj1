cmake_minimum_required(VERSION 3.5)
project(project1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Parser.c main.c client.c)
add_executable(project1 ${SOURCE_FILES})