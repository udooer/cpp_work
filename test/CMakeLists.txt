cmake_minimum_required(VERSION 3.10)
project(test)
add_executable(float_problem src/float_problem.cpp)

add_executable(ceil_test src/ceil_test.cpp)

add_executable(setprecision src/setprecision.cpp)

install(TARGETS float_problem ceil_test
RUNTIME DESTINATION /home/yong/cpp_work/test/src)

