cmake_minimum_required(VERSION 3.0.0)
project("Tutorial")

set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

configure_file(
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
	)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")

add_subdirectory("MathFunctions")


add_executable("Tutorial-App" tutorial.cxx)
target_link_libraries("Tutorial-App" lib_mathfunctions)

