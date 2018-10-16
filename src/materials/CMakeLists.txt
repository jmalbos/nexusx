## -----------------------------------------------------------------------------
## File   : materials/CMakeLists.txt
## Author : Justo Martin-Albo
## Date   : 15 Oct 2018
## -----------------------------------------------------------------------------

get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)
set(TARGET_NAME "${PROJECT_NAME}_${TARGET_NAME}")

add_library(${TARGET_NAME} MaterialDatabase.cpp)
target_link_libraries(${TARGET_NAME} ${GEANT4_LIBRARIES})

list(APPEND NEXUS_LIBRARIES ${TARGET_NAME})
