# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/hadoop/Cproj/sourcecode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hadoop/Cproj/sourcecode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/apue_3e.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/apue_3e.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/apue_3e.dir/flags.make

CMakeFiles/apue_3e.dir/main.cpp.o: CMakeFiles/apue_3e.dir/flags.make
CMakeFiles/apue_3e.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadoop/Cproj/sourcecode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/apue_3e.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/apue_3e.dir/main.cpp.o -c /home/hadoop/Cproj/sourcecode/main.cpp

CMakeFiles/apue_3e.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/apue_3e.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadoop/Cproj/sourcecode/main.cpp > CMakeFiles/apue_3e.dir/main.cpp.i

CMakeFiles/apue_3e.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/apue_3e.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadoop/Cproj/sourcecode/main.cpp -o CMakeFiles/apue_3e.dir/main.cpp.s

CMakeFiles/apue_3e.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/apue_3e.dir/main.cpp.o.requires

CMakeFiles/apue_3e.dir/main.cpp.o.provides: CMakeFiles/apue_3e.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/apue_3e.dir/build.make CMakeFiles/apue_3e.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/apue_3e.dir/main.cpp.o.provides

CMakeFiles/apue_3e.dir/main.cpp.o.provides.build: CMakeFiles/apue_3e.dir/main.cpp.o


# Object files for target apue_3e
apue_3e_OBJECTS = \
"CMakeFiles/apue_3e.dir/main.cpp.o"

# External object files for target apue_3e
apue_3e_EXTERNAL_OBJECTS =

apue_3e: CMakeFiles/apue_3e.dir/main.cpp.o
apue_3e: CMakeFiles/apue_3e.dir/build.make
apue_3e: CMakeFiles/apue_3e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hadoop/Cproj/sourcecode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable apue_3e"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/apue_3e.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/apue_3e.dir/build: apue_3e

.PHONY : CMakeFiles/apue_3e.dir/build

CMakeFiles/apue_3e.dir/requires: CMakeFiles/apue_3e.dir/main.cpp.o.requires

.PHONY : CMakeFiles/apue_3e.dir/requires

CMakeFiles/apue_3e.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/apue_3e.dir/cmake_clean.cmake
.PHONY : CMakeFiles/apue_3e.dir/clean

CMakeFiles/apue_3e.dir/depend:
	cd /home/hadoop/Cproj/sourcecode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hadoop/Cproj/sourcecode /home/hadoop/Cproj/sourcecode /home/hadoop/Cproj/sourcecode/cmake-build-debug /home/hadoop/Cproj/sourcecode/cmake-build-debug /home/hadoop/Cproj/sourcecode/cmake-build-debug/CMakeFiles/apue_3e.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/apue_3e.dir/depend

