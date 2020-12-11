cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(shift_test)
add_executable(shift src/shift.cpp)
add_executable(endian_test src/endian_test.cpp)
add_executable(test_machine src/test_machine.cpp)
install(TARGETS shift endian_test
RUNTIME DESTINATION G:/cpp_work/shift_test/src)