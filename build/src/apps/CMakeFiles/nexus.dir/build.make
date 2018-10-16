# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jmalbos/Development/next/nexusx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jmalbos/Development/next/nexusx/build

# Include any dependencies generated for this target.
include src/apps/CMakeFiles/nexus.dir/depend.make

# Include the progress variables for this target.
include src/apps/CMakeFiles/nexus.dir/progress.make

# Include the compile flags for this target's objects.
include src/apps/CMakeFiles/nexus.dir/flags.make

src/apps/CMakeFiles/nexus.dir/nexus.cpp.o: src/apps/CMakeFiles/nexus.dir/flags.make
src/apps/CMakeFiles/nexus.dir/nexus.cpp.o: ../src/apps/nexus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jmalbos/Development/next/nexusx/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/apps/CMakeFiles/nexus.dir/nexus.cpp.o"
	cd /Users/jmalbos/Development/next/nexusx/build/src/apps && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nexus.dir/nexus.cpp.o -c /Users/jmalbos/Development/next/nexusx/src/apps/nexus.cpp

src/apps/CMakeFiles/nexus.dir/nexus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nexus.dir/nexus.cpp.i"
	cd /Users/jmalbos/Development/next/nexusx/build/src/apps && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jmalbos/Development/next/nexusx/src/apps/nexus.cpp > CMakeFiles/nexus.dir/nexus.cpp.i

src/apps/CMakeFiles/nexus.dir/nexus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nexus.dir/nexus.cpp.s"
	cd /Users/jmalbos/Development/next/nexusx/build/src/apps && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jmalbos/Development/next/nexusx/src/apps/nexus.cpp -o CMakeFiles/nexus.dir/nexus.cpp.s

src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.requires:

.PHONY : src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.requires

src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.provides: src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.requires
	$(MAKE) -f src/apps/CMakeFiles/nexus.dir/build.make src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.provides.build
.PHONY : src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.provides

src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.provides.build: src/apps/CMakeFiles/nexus.dir/nexus.cpp.o


# Object files for target nexus
nexus_OBJECTS = \
"CMakeFiles/nexus.dir/nexus.cpp.o"

# External object files for target nexus
nexus_EXTERNAL_OBJECTS =

src/apps/nexus: src/apps/CMakeFiles/nexus.dir/nexus.cpp.o
src/apps/nexus: src/apps/CMakeFiles/nexus.dir/build.make
src/apps/nexus: src/utils/libnexus_utils.a
src/apps/nexus: src/geometries/libnexus_geometries.a
src/apps/nexus: src/base/libnexus_base.a
src/apps/nexus: src/generators/libnexus_generators.a
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4Tree.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4GMocren.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4visHepRep.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4RayTracer.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4VRML.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4interfaces.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4persistency.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4analysis.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4error_propagation.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4readout.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4physicslists.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4parmodels.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4FR.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4vis_management.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4modeling.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4run.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4event.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4tracking.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4processes.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4zlib.dylib
src/apps/nexus: /usr/lib/libexpat.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4digits_hits.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4track.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4particles.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4geometry.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4materials.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4graphics_reps.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4intercoms.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4global.dylib
src/apps/nexus: /Users/jmalbos/Development/ext/geant4/lib/libG4clhep.dylib
src/apps/nexus: src/apps/CMakeFiles/nexus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jmalbos/Development/next/nexusx/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nexus"
	cd /Users/jmalbos/Development/next/nexusx/build/src/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nexus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/apps/CMakeFiles/nexus.dir/build: src/apps/nexus

.PHONY : src/apps/CMakeFiles/nexus.dir/build

src/apps/CMakeFiles/nexus.dir/requires: src/apps/CMakeFiles/nexus.dir/nexus.cpp.o.requires

.PHONY : src/apps/CMakeFiles/nexus.dir/requires

src/apps/CMakeFiles/nexus.dir/clean:
	cd /Users/jmalbos/Development/next/nexusx/build/src/apps && $(CMAKE_COMMAND) -P CMakeFiles/nexus.dir/cmake_clean.cmake
.PHONY : src/apps/CMakeFiles/nexus.dir/clean

src/apps/CMakeFiles/nexus.dir/depend:
	cd /Users/jmalbos/Development/next/nexusx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jmalbos/Development/next/nexusx /Users/jmalbos/Development/next/nexusx/src/apps /Users/jmalbos/Development/next/nexusx/build /Users/jmalbos/Development/next/nexusx/build/src/apps /Users/jmalbos/Development/next/nexusx/build/src/apps/CMakeFiles/nexus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/apps/CMakeFiles/nexus.dir/depend
