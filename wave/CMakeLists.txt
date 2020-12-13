cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
project(wave)
add_executable(wave_read src/wave_read.cpp)
add_executable(wave_write src/wave_write.cpp)
add_executable(write01 src/write01.cpp)
add_executable(wave_sin_do src/wave_sin_do.cpp)

install(TARGETS wave_read wave_write write01 wave_sin_do
RUNTIME DESTINATION G:/cpp_work/wave/src)
