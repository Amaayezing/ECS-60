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
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/postfix_eval.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/postfix_eval.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/postfix_eval.dir/flags.make

CMakeFiles/postfix_eval.dir/main.cpp.o: CMakeFiles/postfix_eval.dir/flags.make
CMakeFiles/postfix_eval.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/postfix_eval.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/postfix_eval.dir/main.cpp.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/main.cpp"

CMakeFiles/postfix_eval.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/postfix_eval.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/main.cpp" > CMakeFiles/postfix_eval.dir/main.cpp.i

CMakeFiles/postfix_eval.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/postfix_eval.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/main.cpp" -o CMakeFiles/postfix_eval.dir/main.cpp.s

CMakeFiles/postfix_eval.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/postfix_eval.dir/main.cpp.o.requires

CMakeFiles/postfix_eval.dir/main.cpp.o.provides: CMakeFiles/postfix_eval.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/postfix_eval.dir/build.make CMakeFiles/postfix_eval.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/postfix_eval.dir/main.cpp.o.provides

CMakeFiles/postfix_eval.dir/main.cpp.o.provides.build: CMakeFiles/postfix_eval.dir/main.cpp.o


CMakeFiles/postfix_eval.dir/postfix.cc.o: CMakeFiles/postfix_eval.dir/flags.make
CMakeFiles/postfix_eval.dir/postfix.cc.o: ../postfix.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/postfix_eval.dir/postfix.cc.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/postfix_eval.dir/postfix.cc.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix.cc"

CMakeFiles/postfix_eval.dir/postfix.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/postfix_eval.dir/postfix.cc.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix.cc" > CMakeFiles/postfix_eval.dir/postfix.cc.i

CMakeFiles/postfix_eval.dir/postfix.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/postfix_eval.dir/postfix.cc.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix.cc" -o CMakeFiles/postfix_eval.dir/postfix.cc.s

CMakeFiles/postfix_eval.dir/postfix.cc.o.requires:

.PHONY : CMakeFiles/postfix_eval.dir/postfix.cc.o.requires

CMakeFiles/postfix_eval.dir/postfix.cc.o.provides: CMakeFiles/postfix_eval.dir/postfix.cc.o.requires
	$(MAKE) -f CMakeFiles/postfix_eval.dir/build.make CMakeFiles/postfix_eval.dir/postfix.cc.o.provides.build
.PHONY : CMakeFiles/postfix_eval.dir/postfix.cc.o.provides

CMakeFiles/postfix_eval.dir/postfix.cc.o.provides.build: CMakeFiles/postfix_eval.dir/postfix.cc.o


CMakeFiles/postfix_eval.dir/postfix_eval.cc.o: CMakeFiles/postfix_eval.dir/flags.make
CMakeFiles/postfix_eval.dir/postfix_eval.cc.o: ../postfix_eval.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/postfix_eval.dir/postfix_eval.cc.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/postfix_eval.dir/postfix_eval.cc.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix_eval.cc"

CMakeFiles/postfix_eval.dir/postfix_eval.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/postfix_eval.dir/postfix_eval.cc.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix_eval.cc" > CMakeFiles/postfix_eval.dir/postfix_eval.cc.i

CMakeFiles/postfix_eval.dir/postfix_eval.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/postfix_eval.dir/postfix_eval.cc.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/postfix_eval.cc" -o CMakeFiles/postfix_eval.dir/postfix_eval.cc.s

CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.requires:

.PHONY : CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.requires

CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.provides: CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.requires
	$(MAKE) -f CMakeFiles/postfix_eval.dir/build.make CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.provides.build
.PHONY : CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.provides

CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.provides.build: CMakeFiles/postfix_eval.dir/postfix_eval.cc.o


# Object files for target postfix_eval
postfix_eval_OBJECTS = \
"CMakeFiles/postfix_eval.dir/main.cpp.o" \
"CMakeFiles/postfix_eval.dir/postfix.cc.o" \
"CMakeFiles/postfix_eval.dir/postfix_eval.cc.o"

# External object files for target postfix_eval
postfix_eval_EXTERNAL_OBJECTS =

postfix_eval.exe: CMakeFiles/postfix_eval.dir/main.cpp.o
postfix_eval.exe: CMakeFiles/postfix_eval.dir/postfix.cc.o
postfix_eval.exe: CMakeFiles/postfix_eval.dir/postfix_eval.cc.o
postfix_eval.exe: CMakeFiles/postfix_eval.dir/build.make
postfix_eval.exe: CMakeFiles/postfix_eval.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable postfix_eval.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/postfix_eval.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/postfix_eval.dir/build: postfix_eval.exe

.PHONY : CMakeFiles/postfix_eval.dir/build

CMakeFiles/postfix_eval.dir/requires: CMakeFiles/postfix_eval.dir/main.cpp.o.requires
CMakeFiles/postfix_eval.dir/requires: CMakeFiles/postfix_eval.dir/postfix.cc.o.requires
CMakeFiles/postfix_eval.dir/requires: CMakeFiles/postfix_eval.dir/postfix_eval.cc.o.requires

.PHONY : CMakeFiles/postfix_eval.dir/requires

CMakeFiles/postfix_eval.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/postfix_eval.dir/cmake_clean.cmake
.PHONY : CMakeFiles/postfix_eval.dir/clean

CMakeFiles/postfix_eval.dir/depend:
	cd "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 60 Porquet/hw2/postfix_eval/cmake-build-debug/CMakeFiles/postfix_eval.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/postfix_eval.dir/depend
