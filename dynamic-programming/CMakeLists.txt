cmake_minimum_required(VERSION 3.4)

project(dynamic-programming CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(.)
include_directories(..)
add_executable(lc3.exe LongestSubstringWithoutRepeatingCharacters-3.cpp LongestSubstringWithoutRepeatingCharacters-3.h)
add_executable(lc11.exe ContainerWithMostWater-11.cpp ContainerWithMostWater-11.h)

