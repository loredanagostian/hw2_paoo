cmake_minimum_required(VERSION 3.10)

add_library(student_lib STATIC Student.cpp)

target_include_directories(student_lib PUBLIC "${CMAKE_SOURCE_DIR}/Person")