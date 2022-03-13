cmake_minimum_required(VERSION 3.14)

set(this unit-test)
project(${this} C CXX)

aux_source_directory(. SRC_DIR)
add_executable(${this} ${SRC_DIR})

target_link_libraries(${this} PUBLIC
    gtest
    gtest_main
    gmock
    blue-src
)

add_test(
    NAME ${this}
    COMMAND ${this}
)