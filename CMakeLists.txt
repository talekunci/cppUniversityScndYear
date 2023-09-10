cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP main.cpp
        firstTask/main.cpp
        firstTask/main.h
        firstTask/example/firstTaskExample.cpp
        firstTask/example/firstTaskExample.h
        firstTask/solution/firstTaskSolution.cpp
        firstTask/solution/firstTaskSolution.h)
