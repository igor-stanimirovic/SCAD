cmake_minimum_required(VERSION 3.20)
project(SCAD VERSION 0.0.1 DESCRIPTION "Simple CAD software" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)