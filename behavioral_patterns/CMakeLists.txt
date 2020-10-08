cmake_minimum_required(VERSION 2.8)

project(BehavarialPatterns)

set(CMAKE_CXX_STANDARD 11)

add_executable(Visitor Visitor/main.cpp)

add_executable(Commander Commander/main.cpp)