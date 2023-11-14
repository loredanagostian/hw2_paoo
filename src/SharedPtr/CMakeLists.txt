cmake_minimum_required(VERSION 3.10)

add_library(manager_lib STATIC ManagerPerson.cpp)

target_include_directories(manager_lin PUBLIC "${CMAKE_SOURCE_DIR}/ManagerPerson")