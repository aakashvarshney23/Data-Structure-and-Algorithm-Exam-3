
project(Lab_Tests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTests
        exam02_tests.cpp
        )

add_subdirectory(lib/gtest-1.7.0)


target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests exam02_lib)
