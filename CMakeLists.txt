cmake_minimum_required(VERSION 3.30)
project(mathslib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)




include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(mlib STATIC
    src/arithmetic.cpp
    src/algebra.cpp
)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} mlib)

