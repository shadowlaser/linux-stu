cmake_minimum_required (VERSION 2.6)
project (Tutorial)
#The version number
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)
#configure a headr file to pass some of the CMake settings to the source code
configure_file(
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
)
#add the binary tree to the search path for include files so that we will find Tutorial.h
include_directories("${PROJECT_BINARY_DIR}")
add_executable(Tutorial tutorial.cxx)

