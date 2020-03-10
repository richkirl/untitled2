cmake_minimum_required(VERSION 3.16)

project( untitled1 CXX )

set(CMAKE_CXX_STANDARD 20)

set (CMAKE_CXX_FLAGS "-fexceptions")
find_library(FILESYSTEM_LIBRARY filesystem)
add_executable(untitled1 main.cpp)

set( SOURCE_LIB main.cpp )

set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )

target_link_libraries(${PROJECT_NAME} stdc++fs)

include_directories(${CMAKE_SOURCE_DIR}/bin)

