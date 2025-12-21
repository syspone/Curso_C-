cmake_minimum_required(VERSION 3.15)
project(Curso)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES
        #Fundamentos/anatomy.cpp
        Fundamentos/SegundaEstruct.cpp
        Fundamentos/SegundaEstruct.h
        #main.cpp
)

add_executable(Curso ${SOURCES})

