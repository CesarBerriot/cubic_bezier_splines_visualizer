cmake_minimum_required(VERSION 3.30)
project(quadratic_bezier_splines_visualizer C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    SET(CBSV_COMPILE_OPTIONS -ansi -pedantic-errors -std=c11 -Wall -Wextra -Wno-incompatible-pointer-types -Wno-deprecated-declarations -Wno-switch)
    SET(CBSV_LINK_OPTIONS -static)
elseif(MSVC)
    SET(CBSV_LINK_OPTIONS /ENTRY:mainCRTStartup)
endif()

add_subdirectory(targets/library)
add_subdirectory(targets/demo)