# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bluebox/repos/ros2_roundtrip_ws/roundtrip_msg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg

# Utility rule file for roundtrip_msg__py.

# Include any custom commands dependencies for this target.
include roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/compiler_depend.make

# Include the progress variables for this target.
include roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/progress.make

roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_introspection_c.c
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_c.c
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/_roundtrip.py
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/__init__.py
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/_roundtrip_s.c

rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/lib/rosidl_generator_py/rosidl_generator_py
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_py/__init__.py
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_py/generate_py_impl.py
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_action_pkg_typesupport_entry_point.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_action.py.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl_support.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl.py.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg_pkg_typesupport_entry_point.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg_support.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg.py.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_srv_pkg_typesupport_entry_point.c.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_srv.py.em
rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/roundtrip_msg/msg/Roundtrip.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Python code for ROS interfaces"
	cd /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/roundtrip_msg__py && /usr/bin/python3 /opt/ros/humble/share/rosidl_generator_py/cmake/../../../lib/rosidl_generator_py/rosidl_generator_py --generator-arguments-file /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/rosidl_generator_py__arguments.json --typesupport-impls "rosidl_typesupport_fastrtps_c;rosidl_typesupport_introspection_c;rosidl_typesupport_c"

rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_introspection_c.c: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_introspection_c.c

rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_c.c: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_c.c

rosidl_generator_py/roundtrip_msg/msg/_roundtrip.py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/roundtrip_msg/msg/_roundtrip.py

rosidl_generator_py/roundtrip_msg/msg/__init__.py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/roundtrip_msg/msg/__init__.py

rosidl_generator_py/roundtrip_msg/msg/_roundtrip_s.c: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/roundtrip_msg/msg/_roundtrip_s.c

roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_c.c
roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_fastrtps_c.c
roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/_roundtrip_msg_s.ep.rosidl_typesupport_introspection_c.c
roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/__init__.py
roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/_roundtrip.py
roundtrip_msg__py: rosidl_generator_py/roundtrip_msg/msg/_roundtrip_s.c
roundtrip_msg__py: roundtrip_msg__py/CMakeFiles/roundtrip_msg__py
roundtrip_msg__py: roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/build.make
.PHONY : roundtrip_msg__py

# Rule to build all files generated by this target.
roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/build: roundtrip_msg__py
.PHONY : roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/build

roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/clean:
	cd /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/roundtrip_msg__py && $(CMAKE_COMMAND) -P CMakeFiles/roundtrip_msg__py.dir/cmake_clean.cmake
.PHONY : roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/clean

roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/depend:
	cd /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bluebox/repos/ros2_roundtrip_ws/roundtrip_msg /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/roundtrip_msg__py /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/roundtrip_msg__py /home/bluebox/repos/ros2_roundtrip_ws/build/roundtrip_msg/roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : roundtrip_msg__py/CMakeFiles/roundtrip_msg__py.dir/depend

