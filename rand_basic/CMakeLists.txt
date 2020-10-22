cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(rand_basic)
add_executable(generate_number src/generate_number.cpp)
add_executable(random_lib src/random_lib.cpp)

add_executable(test_rand_vector src/test_rand_vector)
add_library(rand_vector STATIC src/rand_vector.cpp)
target_link_libraries(test_rand_vector rand_vector)

install(TARGETS generate_number random_lib test_rand_vector 
RUNTIME DESTINATION G:/cpp_work/rand_basic/src)
