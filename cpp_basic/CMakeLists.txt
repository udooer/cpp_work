cmake_minimum_required(VERSION 3.10)
project(cxx_basic)
add_executable(data_type src/data_type.cpp)
add_executable(bitwise src/bitwise.cpp)
add_executable(array src/array.cpp)
install(TARGETS data_type bitwise array
RUNTIME DESTINATION /home/yong/cpp_work/cpp_basic/src)
