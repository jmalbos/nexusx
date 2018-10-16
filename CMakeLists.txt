## -----------------------------------------------------------------------------
## File   : CMakeLists.txt
## Author : Justo Martin-Albo
## Date   : 9 Oct 2018
## -----------------------------------------------------------------------------

## Setup the project
project("nexus")
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Find Geant4 package, activating all available UI and Vis drivers by default
## You can set WITH_GEANT4_UIVIS to OFF via the command line or ccmake/cmake-gui
## to build a batch mode only executable
#option(WITH_GEANT4 "Build project with Geant4 library." ON)
#if(WITH_GEANT4)
find_package(Geant4 REQUIRED)
#endif()

## Find ROOT headers and libraries
#find_package(ROOT)

## Setup Geant4 include directories and compile definitions
## Setup include directory for this project
#if(WITH_GEANT4)
include(${Geant4_USE_FILE})
#endif()
#include(${ROOT_USE_FILE})
#include_directories(${PROJECT_SOURCE_DIR}/src)

## Define variable for the project's libraries
#set(NEXUS_LIBRARIES)

## Recurse through sub-directories
add_subdirectory(src)
