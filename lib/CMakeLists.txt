add_library(arithmetic SHARED arithmetic.cpp)

target_include_directories(arithmetic INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
