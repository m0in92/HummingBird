cmake_minimum_required(VERSION 3.23)
project(HummingBirdProject)

set(CMAKE_CXX_STANDARD 14)

set(HUMMINGBIRD_EXAMPLE_SOURCES example.cpp)

add_subdirectory(src)
add_subdirectory(test)

add_executable(example ${HUMMINGBIRD_EXAMPLE_SOURCES})

target_link_libraries(example hummingbird)
