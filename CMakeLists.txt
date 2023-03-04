cmake_minimum_required(VERSION 3.2)
project(Blackjack)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${LIBRARY_OUTPUT_PATH})

add_subdirectory(googletest)

#executables

add_executable(cardTest){
    header/card.hpp
    src/card.cpp
    test/cardTest.cpp
}

add_executable(deckTest){
    header/deck.hpp
    header/card.hpp
    src/deck.cpp
    test/deckTest.cpp
}

#links

target_link_libraries(cardTest gmock gtest gtest_main)
target_link_libraries(deckTest gmock gtest gtest_main)