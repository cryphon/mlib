cmake_minimum_required(VERSION 3.30)
project(mathslib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)



include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(mlib STATIC
    src/arithmetic.cpp
    src/algebra.cpp
)

add_library(testing STATIC
    src/test_util.cpp
)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} mlib testing)


# Custom target to build and run
add_custom_target(run
    COMMAND ${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    COMMENT "Building and running test_mlib"
)
