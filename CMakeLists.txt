cmake_minimum_required(VERSION 3.20)

project(TRACKBALL CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG> )
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG> )

include_directories(trackball)
 
add_subdirectory(trackball)
add_subdirectory(demo)
