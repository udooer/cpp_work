cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(sort)

add_library(rand_vector STATIC ../rand_basic/src/rand_vector.cpp)

add_executable(insertion_sort src/insertion_sort.cpp)
target_link_libraries(insertion_sort rand_vector)

add_executable(bubble_sort src/bubble_sort.cpp)
target_link_libraries(bubble_sort rand_vector)

add_executable(stooge_sort src/stooge_sort.cpp)
target_link_libraries(stooge_sort rand_vector)

add_executable(determined_quick_sort src/determined_quick_sort.cpp)
target_link_libraries(determined_quick_sort rand_vector)

add_executable(merge_sort src/merge_sort.cpp)
target_link_libraries(merge_sort rand_vector)

install(TARGETS insertion_sort bubble_sort stooge_sort determined_quick_sort merge_sort
RUNTIME DESTINATION G:/cpp_work/sort/src)

