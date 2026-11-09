cmake_minimum_required(VERSION 3.13...3.24)

# Project description.
project(openscale
VERSION 1.0.0
LANGUAGES C CXX
)

include(cmake/dependencies.cmake)

include(CTest)
add_subdirectory(test)