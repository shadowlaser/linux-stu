# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build

# Include any dependencies generated for this target.
include CMakeFiles/libhello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libhello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libhello.dir/flags.make

CMakeFiles/libhello.dir/hello.o: CMakeFiles/libhello.dir/flags.make
CMakeFiles/libhello.dir/hello.o: ../hello.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/libhello.dir/hello.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/libhello.dir/hello.o   -c /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/hello.c

CMakeFiles/libhello.dir/hello.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libhello.dir/hello.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/hello.c > CMakeFiles/libhello.dir/hello.i

CMakeFiles/libhello.dir/hello.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libhello.dir/hello.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/hello.c -o CMakeFiles/libhello.dir/hello.s

CMakeFiles/libhello.dir/hello.o.requires:
.PHONY : CMakeFiles/libhello.dir/hello.o.requires

CMakeFiles/libhello.dir/hello.o.provides: CMakeFiles/libhello.dir/hello.o.requires
	$(MAKE) -f CMakeFiles/libhello.dir/build.make CMakeFiles/libhello.dir/hello.o.provides.build
.PHONY : CMakeFiles/libhello.dir/hello.o.provides

CMakeFiles/libhello.dir/hello.o.provides.build: CMakeFiles/libhello.dir/hello.o

# Object files for target libhello
libhello_OBJECTS = \
"CMakeFiles/libhello.dir/hello.o"

# External object files for target libhello
libhello_EXTERNAL_OBJECTS =

libhello.a: CMakeFiles/libhello.dir/hello.o
libhello.a: CMakeFiles/libhello.dir/build.make
libhello.a: CMakeFiles/libhello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libhello.a"
	$(CMAKE_COMMAND) -P CMakeFiles/libhello.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libhello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libhello.dir/build: libhello.a
.PHONY : CMakeFiles/libhello.dir/build

CMakeFiles/libhello.dir/requires: CMakeFiles/libhello.dir/hello.o.requires
.PHONY : CMakeFiles/libhello.dir/requires

CMakeFiles/libhello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libhello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libhello.dir/clean

CMakeFiles/libhello.dir/depend:
	cd /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build /home/rooted/Develop/github/linux-stu/cmake/2rd/3rd/build/CMakeFiles/libhello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libhello.dir/depend

