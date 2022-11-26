cmake_minimum_required(VERSION 3.0.0)
project(check-cpp-20 VERSION 1.0)

add_executable(check-cpp-20  src/main.cpp)

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)
set(CMAKE_C_COMPILE "/usr/bin/clang")
set(CMAKE_CXX_COMPILE "/usr/bin/clang++")

set_property(TARGET check-cpp-20  PROPERTY CXX_STANDARD 20)


target_include_directories(check-cpp-20  PUBLIC
                           "src/"
                           )
