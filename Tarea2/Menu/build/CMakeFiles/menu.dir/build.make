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
CMAKE_SOURCE_DIR = /home/konny/ogl/Tarea2/Menu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/konny/ogl/Tarea2/Menu/build

# Include any dependencies generated for this target.
include CMakeFiles/menu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/menu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/menu.dir/flags.make

CMakeFiles/menu.dir/main.cpp.o: CMakeFiles/menu.dir/flags.make
CMakeFiles/menu.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/konny/ogl/Tarea2/Menu/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/menu.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/menu.dir/main.cpp.o -c /home/konny/ogl/Tarea2/Menu/main.cpp

CMakeFiles/menu.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menu.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/konny/ogl/Tarea2/Menu/main.cpp > CMakeFiles/menu.dir/main.cpp.i

CMakeFiles/menu.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menu.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/konny/ogl/Tarea2/Menu/main.cpp -o CMakeFiles/menu.dir/main.cpp.s

CMakeFiles/menu.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/menu.dir/main.cpp.o.requires

CMakeFiles/menu.dir/main.cpp.o.provides: CMakeFiles/menu.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/menu.dir/build.make CMakeFiles/menu.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/menu.dir/main.cpp.o.provides

CMakeFiles/menu.dir/main.cpp.o.provides.build: CMakeFiles/menu.dir/main.cpp.o

# Object files for target menu
menu_OBJECTS = \
"CMakeFiles/menu.dir/main.cpp.o"

# External object files for target menu
menu_EXTERNAL_OBJECTS =

menu: CMakeFiles/menu.dir/main.cpp.o
menu: CMakeFiles/menu.dir/build.make
menu: /usr/lib/x86_64-linux-gnu/libGLU.so
menu: /usr/lib/x86_64-linux-gnu/libGL.so
menu: /usr/lib/x86_64-linux-gnu/libSM.so
menu: /usr/lib/x86_64-linux-gnu/libICE.so
menu: /usr/lib/x86_64-linux-gnu/libX11.so
menu: /usr/lib/x86_64-linux-gnu/libXext.so
menu: /usr/lib/x86_64-linux-gnu/libglut.so
menu: /usr/lib/x86_64-linux-gnu/libXmu.so
menu: /usr/lib/x86_64-linux-gnu/libXi.so
menu: CMakeFiles/menu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable menu"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/menu.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/menu.dir/build: menu
.PHONY : CMakeFiles/menu.dir/build

CMakeFiles/menu.dir/requires: CMakeFiles/menu.dir/main.cpp.o.requires
.PHONY : CMakeFiles/menu.dir/requires

CMakeFiles/menu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/menu.dir/cmake_clean.cmake
.PHONY : CMakeFiles/menu.dir/clean

CMakeFiles/menu.dir/depend:
	cd /home/konny/ogl/Tarea2/Menu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/konny/ogl/Tarea2/Menu /home/konny/ogl/Tarea2/Menu /home/konny/ogl/Tarea2/Menu/build /home/konny/ogl/Tarea2/Menu/build /home/konny/ogl/Tarea2/Menu/build/CMakeFiles/menu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/menu.dir/depend

