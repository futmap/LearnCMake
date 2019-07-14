cmake_minimum_required(VERSION 3.0.0)
project("Tutorial")

set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

configure_file(
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
	)

include_directories("${PROJECT_BINARY_DIR}")

# if want to turn option ON in command-line, use -D<XXX ON>, attention there is no space in -D and <XXX ON>.
option(USE_MYMATH "Use my math" OFF)

if(USE_MYMATH)
	include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
	add_subdirectory("MathFunctions")
endif(USE_MYMATH)


add_executable("Tutorial-App" tutorial.cxx)

if(USE_MYMATH)
	target_link_libraries("Tutorial-App" lib_mathfunctions)
endif(USE_MYMATH)

