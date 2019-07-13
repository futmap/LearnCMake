cmake_minimum_required(VERSION 3.0.0)
project("Lib_MathFunctions")

include_directories("${PROJECT_SOURCE_DIR}")
#include_directories("${PROJECT_SOURCE_DIR}/have_me")

add_library("lib_mathfunctions" mul.cxx sqrt.cxx)

