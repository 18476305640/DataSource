# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/zhuangjie/software/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/zhuangjie/software/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/D05A5E865A5E68EC/code/C/DataSource

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DataSource.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DataSource.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataSource.dir/flags.make

CMakeFiles/DataSource.dir/main.c.o: CMakeFiles/DataSource.dir/flags.make
CMakeFiles/DataSource.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DataSource.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataSource.dir/main.c.o   -c /mnt/D05A5E865A5E68EC/code/C/DataSource/main.c

CMakeFiles/DataSource.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataSource.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/D05A5E865A5E68EC/code/C/DataSource/main.c > CMakeFiles/DataSource.dir/main.c.i

CMakeFiles/DataSource.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataSource.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/D05A5E865A5E68EC/code/C/DataSource/main.c -o CMakeFiles/DataSource.dir/main.c.s

CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o: CMakeFiles/DataSource.dir/flags.make
CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o: ../_1_LineList/LineList_impl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o   -c /mnt/D05A5E865A5E68EC/code/C/DataSource/_1_LineList/LineList_impl.c

CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/D05A5E865A5E68EC/code/C/DataSource/_1_LineList/LineList_impl.c > CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.i

CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/D05A5E865A5E68EC/code/C/DataSource/_1_LineList/LineList_impl.c -o CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.s

CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o: CMakeFiles/DataSource.dir/flags.make
CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o: ../_2_LinkList/LinkList_impl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o   -c /mnt/D05A5E865A5E68EC/code/C/DataSource/_2_LinkList/LinkList_impl.c

CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/D05A5E865A5E68EC/code/C/DataSource/_2_LinkList/LinkList_impl.c > CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.i

CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/D05A5E865A5E68EC/code/C/DataSource/_2_LinkList/LinkList_impl.c -o CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.s

CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o: CMakeFiles/DataSource.dir/flags.make
CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o: ../_3_Queue/queue_impl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o   -c /mnt/D05A5E865A5E68EC/code/C/DataSource/_3_Queue/queue_impl.c

CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/D05A5E865A5E68EC/code/C/DataSource/_3_Queue/queue_impl.c > CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.i

CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/D05A5E865A5E68EC/code/C/DataSource/_3_Queue/queue_impl.c -o CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.s

CMakeFiles/DataSource.dir/_4_Tree/tree.c.o: CMakeFiles/DataSource.dir/flags.make
CMakeFiles/DataSource.dir/_4_Tree/tree.c.o: ../_4_Tree/tree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/DataSource.dir/_4_Tree/tree.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/DataSource.dir/_4_Tree/tree.c.o   -c /mnt/D05A5E865A5E68EC/code/C/DataSource/_4_Tree/tree.c

CMakeFiles/DataSource.dir/_4_Tree/tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DataSource.dir/_4_Tree/tree.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/D05A5E865A5E68EC/code/C/DataSource/_4_Tree/tree.c > CMakeFiles/DataSource.dir/_4_Tree/tree.c.i

CMakeFiles/DataSource.dir/_4_Tree/tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DataSource.dir/_4_Tree/tree.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/D05A5E865A5E68EC/code/C/DataSource/_4_Tree/tree.c -o CMakeFiles/DataSource.dir/_4_Tree/tree.c.s

# Object files for target DataSource
DataSource_OBJECTS = \
"CMakeFiles/DataSource.dir/main.c.o" \
"CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o" \
"CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o" \
"CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o" \
"CMakeFiles/DataSource.dir/_4_Tree/tree.c.o"

# External object files for target DataSource
DataSource_EXTERNAL_OBJECTS =

DataSource: CMakeFiles/DataSource.dir/main.c.o
DataSource: CMakeFiles/DataSource.dir/_1_LineList/LineList_impl.c.o
DataSource: CMakeFiles/DataSource.dir/_2_LinkList/LinkList_impl.c.o
DataSource: CMakeFiles/DataSource.dir/_3_Queue/queue_impl.c.o
DataSource: CMakeFiles/DataSource.dir/_4_Tree/tree.c.o
DataSource: CMakeFiles/DataSource.dir/build.make
DataSource: CMakeFiles/DataSource.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable DataSource"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataSource.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataSource.dir/build: DataSource

.PHONY : CMakeFiles/DataSource.dir/build

CMakeFiles/DataSource.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataSource.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataSource.dir/clean

CMakeFiles/DataSource.dir/depend:
	cd /mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/D05A5E865A5E68EC/code/C/DataSource /mnt/D05A5E865A5E68EC/code/C/DataSource /mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug /mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug /mnt/D05A5E865A5E68EC/code/C/DataSource/cmake-build-debug/CMakeFiles/DataSource.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataSource.dir/depend

