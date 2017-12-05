
project(ExamTests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTests
        exam3A_tests.cpp
        )

add_subdirectory(lib/gtest-1.7.0)


target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests exam3A_lib)
