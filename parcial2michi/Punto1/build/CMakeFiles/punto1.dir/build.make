# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/konny/ogl/parcial2michi/Punto1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/konny/ogl/parcial2michi/Punto1/build

# Include any dependencies generated for this target.
include CMakeFiles/punto1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/punto1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/punto1.dir/flags.make

CMakeFiles/punto1.dir/main.cpp.o: CMakeFiles/punto1.dir/flags.make
CMakeFiles/punto1.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/konny/ogl/parcial2michi/Punto1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/punto1.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/punto1.dir/main.cpp.o -c /home/konny/ogl/parcial2michi/Punto1/main.cpp

CMakeFiles/punto1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/punto1.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/konny/ogl/parcial2michi/Punto1/main.cpp > CMakeFiles/punto1.dir/main.cpp.i

CMakeFiles/punto1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/punto1.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/konny/ogl/parcial2michi/Punto1/main.cpp -o CMakeFiles/punto1.dir/main.cpp.s

CMakeFiles/punto1.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/punto1.dir/main.cpp.o.requires

CMakeFiles/punto1.dir/main.cpp.o.provides: CMakeFiles/punto1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/punto1.dir/build.make CMakeFiles/punto1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/punto1.dir/main.cpp.o.provides

CMakeFiles/punto1.dir/main.cpp.o.provides.build: CMakeFiles/punto1.dir/main.cpp.o

# Object files for target punto1
punto1_OBJECTS = \
"CMakeFiles/punto1.dir/main.cpp.o"

# External object files for target punto1
punto1_EXTERNAL_OBJECTS =

punto1: CMakeFiles/punto1.dir/main.cpp.o
punto1: CMakeFiles/punto1.dir/build.make
punto1: /usr/lib/x86_64-linux-gnu/libGLU.so
punto1: /usr/lib/x86_64-linux-gnu/libGL.so
punto1: /usr/lib/x86_64-linux-gnu/libSM.so
punto1: /usr/lib/x86_64-linux-gnu/libICE.so
punto1: /usr/lib/x86_64-linux-gnu/libX11.so
punto1: /usr/lib/x86_64-linux-gnu/libXext.so
punto1: /usr/lib/x86_64-linux-gnu/libglut.so
punto1: /usr/lib/x86_64-linux-gnu/libXmu.so
punto1: /usr/lib/x86_64-linux-gnu/libXi.so
punto1: CMakeFiles/punto1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable punto1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/punto1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/punto1.dir/build: punto1
.PHONY : CMakeFiles/punto1.dir/build

CMakeFiles/punto1.dir/requires: CMakeFiles/punto1.dir/main.cpp.o.requires
.PHONY : CMakeFiles/punto1.dir/requires

CMakeFiles/punto1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/punto1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/punto1.dir/clean

CMakeFiles/punto1.dir/depend:
	cd /home/konny/ogl/parcial2michi/Punto1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/konny/ogl/parcial2michi/Punto1 /home/konny/ogl/parcial2michi/Punto1 /home/konny/ogl/parcial2michi/Punto1/build /home/konny/ogl/parcial2michi/Punto1/build /home/konny/ogl/parcial2michi/Punto1/build/CMakeFiles/punto1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/punto1.dir/depend
