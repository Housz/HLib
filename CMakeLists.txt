cmake_minimum_required(VERSION 3.8)
project(HLib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vector/vector.h vector/vector_implementation.h vector/vector_constructor_by_copying.h vector/vector_insert.h)
add_executable(HLib ${SOURCE_FILES})