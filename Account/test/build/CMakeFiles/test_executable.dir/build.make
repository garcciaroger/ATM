# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rogergarcia/ATM/Account/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rogergarcia/ATM/Account/test/build

# Include any dependencies generated for this target.
include CMakeFiles/test_executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_executable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_executable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_executable.dir/flags.make

CMakeFiles/test_executable.dir/test.cpp.o: CMakeFiles/test_executable.dir/flags.make
CMakeFiles/test_executable.dir/test.cpp.o: /Users/rogergarcia/ATM/Account/test/test.cpp
CMakeFiles/test_executable.dir/test.cpp.o: CMakeFiles/test_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/rogergarcia/ATM/Account/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_executable.dir/test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_executable.dir/test.cpp.o -MF CMakeFiles/test_executable.dir/test.cpp.o.d -o CMakeFiles/test_executable.dir/test.cpp.o -c /Users/rogergarcia/ATM/Account/test/test.cpp

CMakeFiles/test_executable.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_executable.dir/test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rogergarcia/ATM/Account/test/test.cpp > CMakeFiles/test_executable.dir/test.cpp.i

CMakeFiles/test_executable.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_executable.dir/test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rogergarcia/ATM/Account/test/test.cpp -o CMakeFiles/test_executable.dir/test.cpp.s

# Object files for target test_executable
test_executable_OBJECTS = \
"CMakeFiles/test_executable.dir/test.cpp.o"

# External object files for target test_executable
test_executable_EXTERNAL_OBJECTS =

test_executable: CMakeFiles/test_executable.dir/test.cpp.o
test_executable: CMakeFiles/test_executable.dir/build.make
test_executable: lib/libgtest.a
test_executable: lib/libgtest_main.a
test_executable: lib/libgtest.a
test_executable: CMakeFiles/test_executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/rogergarcia/ATM/Account/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_executable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_executable.dir/link.txt --verbose=$(VERBOSE)
	/Applications/CMake.app/Contents/bin/cmake -D TEST_TARGET=test_executable -D TEST_EXECUTABLE=/Users/rogergarcia/ATM/Account/test/build/test_executable -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/rogergarcia/ATM/Account/test/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_executable_TESTS -D CTEST_FILE=/Users/rogergarcia/ATM/Account/test/build/test_executable[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /Applications/CMake.app/Contents/share/cmake-3.27/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/test_executable.dir/build: test_executable
.PHONY : CMakeFiles/test_executable.dir/build

CMakeFiles/test_executable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_executable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_executable.dir/clean

CMakeFiles/test_executable.dir/depend:
	cd /Users/rogergarcia/ATM/Account/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rogergarcia/ATM/Account/test /Users/rogergarcia/ATM/Account/test /Users/rogergarcia/ATM/Account/test/build /Users/rogergarcia/ATM/Account/test/build /Users/rogergarcia/ATM/Account/test/build/CMakeFiles/test_executable.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_executable.dir/depend

