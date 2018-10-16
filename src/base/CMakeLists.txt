## -----------------------------------------------------------------------------
## File   : CMakeLists.txt
## Author : Justo Martin-Albo
## Date   : 10 Oct 2018
## -----------------------------------------------------------------------------

get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
set(TARGET_NAME "${PROJECT_NAME}_${TARGET_NAME}")

add_library(${TARGET_NAME}  DetectorConstruction.cpp
                            PrimaryGeneration.cpp)
