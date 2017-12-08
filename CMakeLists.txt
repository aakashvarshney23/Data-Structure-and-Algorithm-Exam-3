cmake_minimum_required(VERSION 3.8)
project(cmpe126f17_exam3A)

#set(CMAKE_CXX_STANDARD 11)
add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp lib/exam3/inc/node.h)
add_executable(exam3A_main ${SOURCE_FILES})

include_directories(lib/exam3/inc)
add_subdirectory(lib/exam3 exam3A_lib)

add_subdirectory(test)

target_link_libraries(exam3A_main exam3A_lib)

target_link_libraries(exam3A_main exam3A_lib)
