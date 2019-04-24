cmake_minimum_required(VERSION 3.10)
project(furgbol_io)

include_directories("include")

add_library(fgal_operations "src/operations/operations.cpp")

message("compiling furgbol_io library.")

add_executable(test_fgal "src/main.cpp" )
target_link_libraries(test_fgal fgal_operations)