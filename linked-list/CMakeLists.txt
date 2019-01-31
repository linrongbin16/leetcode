cmake_minimum_required(VERSION 3.4)

project(linked-list CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(.)
include_directories(..)
add_executable(lc141.exe LinkedListCycle-141.h LinkedListCycle-141.cpp)
add_executable(lc142.exe LinkedListCycleII-142.h LinkedListCycleII-142.cpp)
add_executable(lc143.exe RecorderList-143.h RecorderList-143.cpp)
add_executable(lc148.exe SortList-148.h SortList-148.cpp)
