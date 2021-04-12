cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(time)

add_executable(time_test src/time_test.cpp)
install(TARGETS time_test
RUNTIME DESTINATION /home/yong/cpp_work/time/src)