# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\brian\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.5107.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\brian\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.5107.21\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Drive\_Betriebssysteme\Programs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Drive\_Betriebssysteme\Programs\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Programs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Programs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Programs.dir/flags.make

CMakeFiles/Programs.dir/hello.c.obj: CMakeFiles/Programs.dir/flags.make
CMakeFiles/Programs.dir/hello.c.obj: ../hello.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Drive\_Betriebssysteme\Programs\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Programs.dir/hello.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Programs.dir\hello.c.obj   -c C:\Drive\_Betriebssysteme\Programs\hello.c

CMakeFiles/Programs.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Programs.dir/hello.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Drive\_Betriebssysteme\Programs\hello.c > CMakeFiles\Programs.dir\hello.c.i

CMakeFiles/Programs.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Programs.dir/hello.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Drive\_Betriebssysteme\Programs\hello.c -o CMakeFiles\Programs.dir\hello.c.s

# Object files for target Programs
Programs_OBJECTS = \
"CMakeFiles/Programs.dir/hello.c.obj"

# External object files for target Programs
Programs_EXTERNAL_OBJECTS =

Programs.exe: CMakeFiles/Programs.dir/hello.c.obj
Programs.exe: CMakeFiles/Programs.dir/build.make
Programs.exe: CMakeFiles/Programs.dir/linklibs.rsp
Programs.exe: CMakeFiles/Programs.dir/objects1.rsp
Programs.exe: CMakeFiles/Programs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Drive\_Betriebssysteme\Programs\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Programs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Programs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Programs.dir/build: Programs.exe

.PHONY : CMakeFiles/Programs.dir/build

CMakeFiles/Programs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Programs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Programs.dir/clean

CMakeFiles/Programs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Drive\_Betriebssysteme\Programs C:\Drive\_Betriebssysteme\Programs C:\Drive\_Betriebssysteme\Programs\cmake-build-debug C:\Drive\_Betriebssysteme\Programs\cmake-build-debug C:\Drive\_Betriebssysteme\Programs\cmake-build-debug\CMakeFiles\Programs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Programs.dir/depend

