cmake_minimum_required(VERSION 3.20)
project(Data_Structure_Algorithm CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(Data_Structure_Algorithm main.cpp ArrayList/arrayListType.h
        main.cpp
)

add_executable(ArrayList_Run ArrayList/main.cpp ArrayList/arrayListType.h)