cmake_minimum_required(VERSION 3.0.0)

if (NOT CMAKE_BUILD_TYPE) 
    set(CMAKE_BUILD_TYPE, DEBUG)
endif()

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

# set(CMAKE_C_COMPILE "/usr/bin/clang")
# set(CMAKE_CXX_COMPILE "/usr/bin/clang++")
set(CMAKE_C_COMPILE "/usr/bin/gcc")
set(CMAKE_CXX_COMPILE "/usr/bin/c++")
set(CMAKE_CXX_FLAGS "-fmodules-ts")

project(cpps VERSION 1.0)

file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp)
add_executable(cpps ${srcs} )

set_property(TARGET cpps  PROPERTY CXX_STANDARD 20)
target_include_directories(cpps  PUBLIC
                           "include"
                           )