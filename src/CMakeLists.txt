set(HUMMINGBIRD_SOURCES HummingBird.h HummingBird.cpp)

add_library(hummingbird STATIC ${HUMMINGBIRD_SOURCES})

target_include_directories(hummingbird PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})