cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(test)
add_executable(float_problem src/float_problem.cpp)
install(TARGETS float_problem
RUNTIME DESTINATION G:/cpp_work/test/src)

