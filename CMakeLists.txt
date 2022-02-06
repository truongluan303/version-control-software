cmake_minimum_required(VERSION 3.21)
project(version_control_software)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(version_control_software
        blob.h
        commands.cpp
        commands.h
        commit.cpp
        commit.h
        encrypt.cpp
        encrypt.h
        main.cpp
        tree.h)
