set(SRC_DIRS "apps" "geometries" "utils")

#foreach(DIR ${SRC_DIRS})
#  include_directories(${DIR})
#endforeach()

#foreach(DIR ${SRC_DIRS})
#  add_subdirectory(${DIR})
#endforeach()

#include_directories("geometries")
include_directories(utils)
include_directories(base)
include_directories(geometries)
include_directories(generators)
#link_directories("utils")

add_subdirectory(materials)
add_subdirectory(base)
add_subdirectory(utils)
add_subdirectory(apps)
add_subdirectory(geometries)
add_subdirectory(generators)
