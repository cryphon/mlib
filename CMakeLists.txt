cmake_minimum_required(VERSION 3.30)
project(mathslib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} arithmetic)

add_subdirectory(lib)

