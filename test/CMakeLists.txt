cmake_minimum_required(VERSION 3.23)

project('HummingBird_tests')

add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gest_SOURCE_DIR})

add_executable(Humming_Bird_test_run
        test_DataFrames.cpp test_DataFrames_overloadOperators.cpp test_DataFrames_search.cpp test_readCSV.cpp)

target_link_libraries(Humming_Bird_test_run gtest gtest_main)
target_link_libraries(Humming_Bird_test_run hummingbird)