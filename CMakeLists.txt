cmake_minimum_required(VERSION 3.24)
project(Busca_Linear C)

set(CMAKE_C_STANDARD 11)

add_executable(Busca_Linear main.c numOps.c numOps.h printArray.c printArray.h createArray.c createArray.h)
