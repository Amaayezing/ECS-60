# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/maaye/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/maaye/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/luggage_handling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/luggage_handling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/luggage_handling.dir/flags.make

CMakeFiles/luggage_handling.dir/main.cpp.o: CMakeFiles/luggage_handling.dir/flags.make
CMakeFiles/luggage_handling.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/luggage_handling.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/luggage_handling.dir/main.cpp.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/main.cpp"

CMakeFiles/luggage_handling.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/luggage_handling.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/main.cpp" > CMakeFiles/luggage_handling.dir/main.cpp.i

CMakeFiles/luggage_handling.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/luggage_handling.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/main.cpp" -o CMakeFiles/luggage_handling.dir/main.cpp.s

CMakeFiles/luggage_handling.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/luggage_handling.dir/main.cpp.o.requires

CMakeFiles/luggage_handling.dir/main.cpp.o.provides: CMakeFiles/luggage_handling.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/luggage_handling.dir/build.make CMakeFiles/luggage_handling.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/luggage_handling.dir/main.cpp.o.provides

CMakeFiles/luggage_handling.dir/main.cpp.o.provides.build: CMakeFiles/luggage_handling.dir/main.cpp.o


CMakeFiles/luggage_handling.dir/luggage_handling.cc.o: CMakeFiles/luggage_handling.dir/flags.make
CMakeFiles/luggage_handling.dir/luggage_handling.cc.o: ../luggage_handling.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/luggage_handling.dir/luggage_handling.cc.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/luggage_handling.dir/luggage_handling.cc.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/luggage_handling.cc"

CMakeFiles/luggage_handling.dir/luggage_handling.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/luggage_handling.dir/luggage_handling.cc.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/luggage_handling.cc" > CMakeFiles/luggage_handling.dir/luggage_handling.cc.i

CMakeFiles/luggage_handling.dir/luggage_handling.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/luggage_handling.dir/luggage_handling.cc.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/luggage_handling.cc" -o CMakeFiles/luggage_handling.dir/luggage_handling.cc.s

CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.requires:

.PHONY : CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.requires

CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.provides: CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.requires
	$(MAKE) -f CMakeFiles/luggage_handling.dir/build.make CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.provides.build
.PHONY : CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.provides

CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.provides.build: CMakeFiles/luggage_handling.dir/luggage_handling.cc.o


# Object files for target luggage_handling
luggage_handling_OBJECTS = \
"CMakeFiles/luggage_handling.dir/main.cpp.o" \
"CMakeFiles/luggage_handling.dir/luggage_handling.cc.o"

# External object files for target luggage_handling
luggage_handling_EXTERNAL_OBJECTS =

luggage_handling.exe: CMakeFiles/luggage_handling.dir/main.cpp.o
luggage_handling.exe: CMakeFiles/luggage_handling.dir/luggage_handling.cc.o
luggage_handling.exe: CMakeFiles/luggage_handling.dir/build.make
luggage_handling.exe: CMakeFiles/luggage_handling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable luggage_handling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/luggage_handling.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/luggage_handling.dir/build: luggage_handling.exe

.PHONY : CMakeFiles/luggage_handling.dir/build

CMakeFiles/luggage_handling.dir/requires: CMakeFiles/luggage_handling.dir/main.cpp.o.requires
CMakeFiles/luggage_handling.dir/requires: CMakeFiles/luggage_handling.dir/luggage_handling.cc.o.requires

.PHONY : CMakeFiles/luggage_handling.dir/requires

CMakeFiles/luggage_handling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/luggage_handling.dir/cmake_clean.cmake
.PHONY : CMakeFiles/luggage_handling.dir/clean

CMakeFiles/luggage_handling.dir/depend:
	cd "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/luggage_handling/cmake-build-debug/CMakeFiles/luggage_handling.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/luggage_handling.dir/depend

