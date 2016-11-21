# cmake_minimum_required(VERSION <specify CMake version here>)
project(cmake1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(cmake1 ${SOURCE_FILES})