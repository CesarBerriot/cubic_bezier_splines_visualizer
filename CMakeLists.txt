cmake_minimum_required(VERSION 3.30)
project(quadratic_bezier_splines_visualizer C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
SET(CBSV_COMPILE_OPTIONS -ansi -pedantic-errors -std=c11 -Wall -Wextra -Wno-incompatible-pointer-types -Wno-deprecated-declarations -Wno-switch)

add_subdirectory(targets/library)
add_subdirectory(targets/demo)