cmake_minimum_required(VERSION 3.6)
project(Charles_Dodge_Project_1_C_343)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp file_utils.h file_utils.c reverse.c)
add_executable(Charles_Dodge_Project_1_C_343 ${SOURCE_FILES})