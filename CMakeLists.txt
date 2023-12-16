cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP main.cpp
        thirdTask/solution/Competition.h
        thirdTask/solution/Competition.cpp
        thirdTask/solution/Show.h
        thirdTask/solution/Show.cpp
        thirdTask/solution/Date.h
        thirdTask/solution/Date.cpp
        thirdTask/solution/ParticipantCompetition.h
        thirdTask/solution/ParticipantCompetition.cpp
)
