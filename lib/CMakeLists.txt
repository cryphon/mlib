add_library(arithmetic SHARED arithmetic.cpp)
add_library(algebra SHARED algebra.cpp)

target_include_directories(arithmetic INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(algebra INTERFACE ${CMAKE_CURRENT_DIRECTORIES})
