cmake_minimum_required(VERSION 3.14)

# 项目名
SET(this cpp-algorithm)
project(${this})

# cmake 基本配置
SET(CMAKE_CXX_STANDARD 17)
# SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)

# 外部第三方依赖库拉取
include(FetchContent)
FetchContent_Declare(GoogleTest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(GoogleTest)

# 开启 test
enable_testing()

# 文件头
set(Headers
    cpp-algorithm.h
)

# 源文件
set(Sources
    cpp-algorithm.cpp
)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/unit-test)

add_executable(${this} ${Sources} ${Headers})
target_link_libraries(${this} blue-src)
