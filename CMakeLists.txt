cmake_minimum_required( VERSION 2.6 )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project (main)
SET(CMAKE_EXE_LINKER_FLAGS "-pthread")
add_definitions(-Wl,--no-as-needed)
include_directories( include )
add_subdirectory (src build )

