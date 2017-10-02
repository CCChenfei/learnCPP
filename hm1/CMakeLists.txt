cmake_minimum_required(VERSION 3.6)
project(hm1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CLibArray.h CLibArray.cpp)
add_executable(hm1 ${SOURCE_FILES})