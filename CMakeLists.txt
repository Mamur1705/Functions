cmake_minimum_required(VERSION 3.29)
project(Functions)

set(CMAKE_CXX_STANDARD 14)

add_executable(Functions
    main.cpp
        p2.cpp
        p5.cpp
        p6.cpp
        p7.cpp)
add_executable(p2 p2.cpp)
add_executable(p4 p5.cpp)
add_executable(p6 p6.cpp)
add_executable(p7 p7.cpp)
