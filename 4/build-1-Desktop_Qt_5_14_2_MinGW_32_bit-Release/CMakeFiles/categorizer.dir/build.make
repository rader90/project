# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\admin\Desktop\project\4\1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release

# Include any dependencies generated for this target.
include CMakeFiles/categorizer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/categorizer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/categorizer.dir/flags.make

CMakeFiles/categorizer.dir/src/categorizer.cpp.obj: CMakeFiles/categorizer.dir/flags.make
CMakeFiles/categorizer.dir/src/categorizer.cpp.obj: CMakeFiles/categorizer.dir/includes_CXX.rsp
CMakeFiles/categorizer.dir/src/categorizer.cpp.obj: C:/Users/admin/Desktop/project/4/1/src/categorizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/categorizer.dir/src/categorizer.cpp.obj"
	D:\Qt\Tools\mingw530_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\categorizer.dir\src\categorizer.cpp.obj -c C:\Users\admin\Desktop\project\4\1\src\categorizer.cpp

CMakeFiles/categorizer.dir/src/categorizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/categorizer.dir/src/categorizer.cpp.i"
	D:\Qt\Tools\mingw530_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\admin\Desktop\project\4\1\src\categorizer.cpp > CMakeFiles\categorizer.dir\src\categorizer.cpp.i

CMakeFiles/categorizer.dir/src/categorizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/categorizer.dir/src/categorizer.cpp.s"
	D:\Qt\Tools\mingw530_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\admin\Desktop\project\4\1\src\categorizer.cpp -o CMakeFiles\categorizer.dir\src\categorizer.cpp.s

# Object files for target categorizer
categorizer_OBJECTS = \
"CMakeFiles/categorizer.dir/src/categorizer.cpp.obj"

# External object files for target categorizer
categorizer_EXTERNAL_OBJECTS =

categorizer.exe: CMakeFiles/categorizer.dir/src/categorizer.cpp.obj
categorizer.exe: CMakeFiles/categorizer.dir/build.make
categorizer.exe: CMakeFiles/categorizer.dir/linklibs.rsp
categorizer.exe: CMakeFiles/categorizer.dir/objects1.rsp
categorizer.exe: CMakeFiles/categorizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable categorizer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\categorizer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/categorizer.dir/build: categorizer.exe

.PHONY : CMakeFiles/categorizer.dir/build

CMakeFiles/categorizer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\categorizer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/categorizer.dir/clean

CMakeFiles/categorizer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\admin\Desktop\project\4\1 C:\Users\admin\Desktop\project\4\1 C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release C:\Users\admin\Desktop\project\4\build-1-Desktop_Qt_5_14_2_MinGW_32_bit-Release\CMakeFiles\categorizer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/categorizer.dir/depend

