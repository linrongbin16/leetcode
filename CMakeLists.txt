cmake_minimum_required(VERSION 3.4)

project(leetcode CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(.)
add_executable(lc2.exe leetcode2.cpp)
add_executable(lc3.exe leetcode3.cpp)
