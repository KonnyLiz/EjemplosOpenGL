# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/konny/Documents/ogl/Cubo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/konny/Documents/ogl/Cubo/build

# Include any dependencies generated for this target.
include CMakeFiles/Actividad1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Actividad1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Actividad1.dir/flags.make

CMakeFiles/Actividad1.dir/main.cpp.o: CMakeFiles/Actividad1.dir/flags.make
CMakeFiles/Actividad1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konny/Documents/ogl/Cubo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Actividad1.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Actividad1.dir/main.cpp.o -c /home/konny/Documents/ogl/Cubo/main.cpp

CMakeFiles/Actividad1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Actividad1.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konny/Documents/ogl/Cubo/main.cpp > CMakeFiles/Actividad1.dir/main.cpp.i

CMakeFiles/Actividad1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Actividad1.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konny/Documents/ogl/Cubo/main.cpp -o CMakeFiles/Actividad1.dir/main.cpp.s

CMakeFiles/Actividad1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Actividad1.dir/main.cpp.o.requires

CMakeFiles/Actividad1.dir/main.cpp.o.provides: CMakeFiles/Actividad1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Actividad1.dir/build.make CMakeFiles/Actividad1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Actividad1.dir/main.cpp.o.provides

CMakeFiles/Actividad1.dir/main.cpp.o.provides.build: CMakeFiles/Actividad1.dir/main.cpp.o


# Object files for target Actividad1
Actividad1_OBJECTS = \
"CMakeFiles/Actividad1.dir/main.cpp.o"

# External object files for target Actividad1
Actividad1_EXTERNAL_OBJECTS =

Actividad1: CMakeFiles/Actividad1.dir/main.cpp.o
Actividad1: CMakeFiles/Actividad1.dir/build.make
Actividad1: /usr/lib/x86_64-linux-gnu/libGLU.so
Actividad1: /usr/lib/x86_64-linux-gnu/libGL.so
Actividad1: /usr/lib/x86_64-linux-gnu/libglut.so
Actividad1: /usr/lib/x86_64-linux-gnu/libXmu.so
Actividad1: /usr/lib/x86_64-linux-gnu/libXi.so
Actividad1: CMakeFiles/Actividad1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/konny/Documents/ogl/Cubo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Actividad1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Actividad1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Actividad1.dir/build: Actividad1

.PHONY : CMakeFiles/Actividad1.dir/build

CMakeFiles/Actividad1.dir/requires: CMakeFiles/Actividad1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Actividad1.dir/requires

CMakeFiles/Actividad1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Actividad1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Actividad1.dir/clean

CMakeFiles/Actividad1.dir/depend:
	cd /home/konny/Documents/ogl/Cubo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/konny/Documents/ogl/Cubo /home/konny/Documents/ogl/Cubo /home/konny/Documents/ogl/Cubo/build /home/konny/Documents/ogl/Cubo/build /home/konny/Documents/ogl/Cubo/build/CMakeFiles/Actividad1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Actividad1.dir/depend

