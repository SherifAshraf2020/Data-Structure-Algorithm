cmake_minimum_required(VERSION 3.20)
project(Data_Structure_Algorithm CXX)

set(CMAKE_CXX_STANDARD 17)

# 1) Target for the root main (if you still use it)
add_executable(Data_Structure_Algorithm
        main.cpp
)

# 2) Target to run the ArrayList project
add_executable(ArrayList_Run
        ArrayList/main.cpp
        ArrayList/arrayListType.h
)

# 3) Target to run the ClockType project (NEW 🚀)
add_executable(ClockType_Run
        ClockType/main.cpp
        ClockType/clockType.h
        ClockType/clockType.cpp
)


# 4) Target to run the personType project
add_executable(PersonType_Run
        PersonType/main.cpp
        PersonType/personType.h
        PersonType/personType.cpp
)