## -----------------------------------------------------------------------------
## File   : CMakeLists.txt
## Author : Justo Martin-Albo
## Date   : 10 Oct 2018
## -----------------------------------------------------------------------------

message("${Geant4_LIBRARIES}")

add_executable(nexus nexus.cpp)
target_link_libraries(nexus nexus_utils
                            nexus_geometries
                            nexus_base
                            nexus_generators 
                            ${Geant4_LIBRARIES})
