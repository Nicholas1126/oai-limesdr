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
CMAKE_SOURCE_DIR = /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/test_secu_knas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_secu_knas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_secu_knas.dir/flags.make

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o: CMakeFiles/test_secu_knas.dir/flags.make
CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o: /mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o   -c /mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c > CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.i

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c -o CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.s

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.requires:

.PHONY : CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.requires

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.provides: CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.requires
	$(MAKE) -f CMakeFiles/test_secu_knas.dir/build.make CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.provides.build
.PHONY : CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.provides

CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.provides.build: CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o


# Object files for target test_secu_knas
test_secu_knas_OBJECTS = \
"CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o"

# External object files for target test_secu_knas
test_secu_knas_EXTERNAL_OBJECTS =

test_secu_knas: CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o
test_secu_knas: CMakeFiles/test_secu_knas.dir/build.make
test_secu_knas: libSECU_CN.a
test_secu_knas: libUTIL.a
test_secu_knas: libLFDS.a
test_secu_knas: CMakeFiles/test_secu_knas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_secu_knas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_secu_knas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_secu_knas.dir/build: test_secu_knas

.PHONY : CMakeFiles/test_secu_knas.dir/build

CMakeFiles/test_secu_knas.dir/requires: CMakeFiles/test_secu_knas.dir/mnt/sda/sources/openairinterface5g/openair3/TEST/test_secu_knas.c.o.requires

.PHONY : CMakeFiles/test_secu_knas.dir/requires

CMakeFiles/test_secu_knas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_secu_knas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_secu_knas.dir/clean

CMakeFiles/test_secu_knas.dir/depend:
	cd /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build /mnt/sda/sources/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/test_secu_knas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_secu_knas.dir/depend

