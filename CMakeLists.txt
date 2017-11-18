cmake_minimum_required(VERSION 3.8)
project(HLib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vector/vector.h vector/vector_implementation.h vector/vector_constructor_by_copying.h vector/vector_insert.h vector/vector_disordered.h vector/vector_expand.h vector/vector_shrink.h vector/vector_find.h vector/vector_override_operator.h vector/vector_unsort.h vector/compare.h vector/vector_remove.h vector/vector_deduplicate.h vector/vector_traverse.h vector/vector_uniquify.h vector/vector_search.h)
add_executable(HLib ${SOURCE_FILES})