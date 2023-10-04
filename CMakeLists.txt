cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP main.cpp
        thirdTask/solution/Date.cpp
        thirdTask/solution/Date.h
        thirdTask/solution/ParticipantCompetition.cpp
        thirdTask/solution/ParticipantCompetition.h
        thirdTask/solution/Show.cpp
        thirdTask/solution/Show.h
        thirdTask/solution/Competition.cpp
        thirdTask/solution/Competition.h)
