# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build

# Include any dependencies generated for this target.
include CMakeFiles/lab7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab7.dir/flags.make

CMakeFiles/lab7.dir/main.cpp.o: CMakeFiles/lab7.dir/flags.make
CMakeFiles/lab7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab7.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab7.dir/main.cpp.o -c /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/main.cpp

CMakeFiles/lab7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab7.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/main.cpp > CMakeFiles/lab7.dir/main.cpp.i

CMakeFiles/lab7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab7.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/main.cpp -o CMakeFiles/lab7.dir/main.cpp.s

CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o: CMakeFiles/lab7.dir/flags.make
CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o: /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o   -c /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c

CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c > CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.i

CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c -o CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.s

# Object files for target lab7
lab7_OBJECTS = \
"CMakeFiles/lab7.dir/main.cpp.o" \
"CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o"

# External object files for target lab7
lab7_EXTERNAL_OBJECTS =

lab7: CMakeFiles/lab7.dir/main.cpp.o
lab7: CMakeFiles/lab7.dir/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/deps/glad/src/glad.c.o
lab7: CMakeFiles/lab7.dir/build.make
lab7: glfw/src/libglfw3.a
lab7: /usr/lib64/librt.so
lab7: /usr/lib64/libm.so
lab7: /usr/lib64/libX11.so
lab7: CMakeFiles/lab7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab7.dir/build: lab7

.PHONY : CMakeFiles/lab7.dir/build

CMakeFiles/lab7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab7.dir/clean

CMakeFiles/lab7.dir/depend:
	cd /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7 /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7 /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build /home/yinyalan/Downloads/proj1ComputerGraphics/project1/labs/lab7/build/CMakeFiles/lab7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab7.dir/depend

