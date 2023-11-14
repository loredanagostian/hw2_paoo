cmake_minimum_required(VERSION 3.10)

project(hw2_paoo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Person)
add_subdirectory(Student)

add_executable(hw2_paoo main.cpp)

target_link_libraries(hw2_paoo PUBLIC person_lib)

target_include_directories(hw2_paoo PUBLIC "${CMAKE_SOURCE_DIR}/Person" "${CMAKE_SOURCE_DIR}/Student")