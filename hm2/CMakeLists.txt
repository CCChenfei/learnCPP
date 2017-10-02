cmake_minimum_required(VERSION 3.6)
project(hm2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES  LibArray.cpp CLibArray.cpp CLibArray.h)
add_executable(hm2 ${SOURCE_FILES})