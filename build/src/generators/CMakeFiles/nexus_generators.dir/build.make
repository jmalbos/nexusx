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
include src/generators/CMakeFiles/nexus_generators.dir/depend.make

# Include the progress variables for this target.
include src/generators/CMakeFiles/nexus_generators.dir/progress.make

# Include the compile flags for this target's objects.
include src/generators/CMakeFiles/nexus_generators.dir/flags.make

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o: src/generators/CMakeFiles/nexus_generators.dir/flags.make
src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o: ../src/generators/ParticleGun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jmalbos/Development/next/nexusx/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o"
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o -c /Users/jmalbos/Development/next/nexusx/src/generators/ParticleGun.cpp

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nexus_generators.dir/ParticleGun.cpp.i"
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jmalbos/Development/next/nexusx/src/generators/ParticleGun.cpp > CMakeFiles/nexus_generators.dir/ParticleGun.cpp.i

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nexus_generators.dir/ParticleGun.cpp.s"
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jmalbos/Development/next/nexusx/src/generators/ParticleGun.cpp -o CMakeFiles/nexus_generators.dir/ParticleGun.cpp.s

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.requires:

.PHONY : src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.requires

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.provides: src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.requires
	$(MAKE) -f src/generators/CMakeFiles/nexus_generators.dir/build.make src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.provides.build
.PHONY : src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.provides

src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.provides.build: src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o


# Object files for target nexus_generators
nexus_generators_OBJECTS = \
"CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o"

# External object files for target nexus_generators
nexus_generators_EXTERNAL_OBJECTS =

src/generators/libnexus_generators.a: src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o
src/generators/libnexus_generators.a: src/generators/CMakeFiles/nexus_generators.dir/build.make
src/generators/libnexus_generators.a: src/generators/CMakeFiles/nexus_generators.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jmalbos/Development/next/nexusx/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnexus_generators.a"
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && $(CMAKE_COMMAND) -P CMakeFiles/nexus_generators.dir/cmake_clean_target.cmake
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nexus_generators.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/generators/CMakeFiles/nexus_generators.dir/build: src/generators/libnexus_generators.a

.PHONY : src/generators/CMakeFiles/nexus_generators.dir/build

src/generators/CMakeFiles/nexus_generators.dir/requires: src/generators/CMakeFiles/nexus_generators.dir/ParticleGun.cpp.o.requires

.PHONY : src/generators/CMakeFiles/nexus_generators.dir/requires

src/generators/CMakeFiles/nexus_generators.dir/clean:
	cd /Users/jmalbos/Development/next/nexusx/build/src/generators && $(CMAKE_COMMAND) -P CMakeFiles/nexus_generators.dir/cmake_clean.cmake
.PHONY : src/generators/CMakeFiles/nexus_generators.dir/clean

src/generators/CMakeFiles/nexus_generators.dir/depend:
	cd /Users/jmalbos/Development/next/nexusx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jmalbos/Development/next/nexusx /Users/jmalbos/Development/next/nexusx/src/generators /Users/jmalbos/Development/next/nexusx/build /Users/jmalbos/Development/next/nexusx/build/src/generators /Users/jmalbos/Development/next/nexusx/build/src/generators/CMakeFiles/nexus_generators.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/generators/CMakeFiles/nexus_generators.dir/depend
