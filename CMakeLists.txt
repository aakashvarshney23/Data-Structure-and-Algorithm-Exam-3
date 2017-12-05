cmake_minimum_required(VERSION 3.7)
project(cmpe126f17_exam3A)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(exam3A_main ${SOURCE_FILES})

include_directories(lib/exam3/inc)
add_subdirectory(lib/exam3 exam3A_lib)

add_subdirectory(test)



target_link_libraries(exam3A_main exam3A_lib)


#set(SOURCE_FILES main.cpp lib/exam3/src/ordered_linkedlist.cpp lib/exam3/src/node.cpp)
add_executable(cmpe126f17_exam3A ${SOURCE_FILES} data_structure.cpp data_structure.h)