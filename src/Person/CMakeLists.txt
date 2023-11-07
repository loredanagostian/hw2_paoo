cmake_minimum_required(VERSION 3.10)

add_library(person_lib STATIC Person.cpp)

target_link_libraries(person_lib student_lib)

target_include_directories(person_lib PUBLIC "${CMAKE_SOURCE_DIR}/Student")