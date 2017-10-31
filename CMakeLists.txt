cmake_minimum_required(VERSION 3.7)
project(cmpe126f17_exam2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(exam02_main ${SOURCE_FILES})

include_directories(lib/exam02/inc)
add_subdirectory(lib/exam02 exam02_lib)

add_subdirectory(test)



target_link_libraries(exam02_main exam02_lib)


#set(SOURCE_FILES main.cpp lib/exam02/src/ordered_linkedlist.cpp lib/exam02/src/node.cpp)
add_executable(cmpe126f17_exam2 ${SOURCE_FILES})