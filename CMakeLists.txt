cmake_minimum_required(VERSION 3.4)

project(leetcode CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(.)
add_executable(leetcode2.exe leetcode2.cpp leetcode2.h)
add_executable(leetcode3.exe leetcode3.cpp leetcode3.h)
