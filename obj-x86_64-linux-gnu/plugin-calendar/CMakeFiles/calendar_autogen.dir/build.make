# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/kylin/work/panel/ukui-panel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu

# Utility rule file for calendar_autogen.

# Include the progress variables for this target.
include plugin-calendar/CMakeFiles/calendar_autogen.dir/progress.make

plugin-calendar/CMakeFiles/calendar_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target calendar"
	cd /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/plugin-calendar && /usr/bin/cmake -E cmake_autogen /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/plugin-calendar/CMakeFiles/calendar_autogen.dir/AutogenInfo.cmake RelWithDebInfo

calendar_autogen: plugin-calendar/CMakeFiles/calendar_autogen
calendar_autogen: plugin-calendar/CMakeFiles/calendar_autogen.dir/build.make

.PHONY : calendar_autogen

# Rule to build all files generated by this target.
plugin-calendar/CMakeFiles/calendar_autogen.dir/build: calendar_autogen

.PHONY : plugin-calendar/CMakeFiles/calendar_autogen.dir/build

plugin-calendar/CMakeFiles/calendar_autogen.dir/clean:
	cd /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/plugin-calendar && $(CMAKE_COMMAND) -P CMakeFiles/calendar_autogen.dir/cmake_clean.cmake
.PHONY : plugin-calendar/CMakeFiles/calendar_autogen.dir/clean

plugin-calendar/CMakeFiles/calendar_autogen.dir/depend:
	cd /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kylin/work/panel/ukui-panel /home/kylin/work/panel/ukui-panel/plugin-calendar /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/plugin-calendar /home/kylin/work/panel/ukui-panel/obj-x86_64-linux-gnu/plugin-calendar/CMakeFiles/calendar_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugin-calendar/CMakeFiles/calendar_autogen.dir/depend

