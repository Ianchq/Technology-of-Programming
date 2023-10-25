cmake_minimum_required(VERSION 3.27.7)

project(lab1)

set(SOURCES
        main.cpp
        General.cpp
        Aircraft.cpp
        Train.cpp
        Car.cpp
        Keeper.cpp
        Menu.cpp
)       

set(Headers  
        General.h
        Aircraft.h
        Train.h
        Car.h
        Keeper.h
        Menu.h
        Struct.h
        MyException.h
)

add_executable(lab1 ${SOURCES})

target_sources(lab1 PRIVATE ${Headers})