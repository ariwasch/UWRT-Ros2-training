# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ari/ros-tut

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ari/ros-tut/build/ros_tut

# Include any dependencies generated for this target.
include CMakeFiles/reset.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reset.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reset.dir/flags.make

CMakeFiles/reset.dir/src/reset.cpp.o: CMakeFiles/reset.dir/flags.make
CMakeFiles/reset.dir/src/reset.cpp.o: ../../src/reset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ari/ros-tut/build/ros_tut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reset.dir/src/reset.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reset.dir/src/reset.cpp.o -c /home/ari/ros-tut/src/reset.cpp

CMakeFiles/reset.dir/src/reset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reset.dir/src/reset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ari/ros-tut/src/reset.cpp > CMakeFiles/reset.dir/src/reset.cpp.i

CMakeFiles/reset.dir/src/reset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reset.dir/src/reset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ari/ros-tut/src/reset.cpp -o CMakeFiles/reset.dir/src/reset.cpp.s

# Object files for target reset
reset_OBJECTS = \
"CMakeFiles/reset.dir/src/reset.cpp.o"

# External object files for target reset
reset_EXTERNAL_OBJECTS =

libreset.so: CMakeFiles/reset.dir/src/reset.cpp.o
libreset.so: CMakeFiles/reset.dir/build.make
libreset.so: /opt/ros/foxy/lib/libcomponent_manager.so
libreset.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_cpp.so
libreset.so: libros_tut__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/librclcpp.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/librcl.so
libreset.so: /opt/ros/foxy/lib/librmw_implementation.so
libreset.so: /opt/ros/foxy/lib/librmw.so
libreset.so: /opt/ros/foxy/lib/librcl_logging_spdlog.so
libreset.so: /usr/lib/aarch64-linux-gnu/libspdlog.so.1.5.0
libreset.so: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
libreset.so: /opt/ros/foxy/lib/libyaml.so
libreset.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libtracetools.so
libreset.so: /opt/ros/foxy/lib/libament_index_cpp.so
libreset.so: /opt/ros/foxy/lib/libclass_loader.so
libreset.so: /opt/ros/foxy/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
libreset.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libturtlesim__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
libreset.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
libreset.so: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
libreset.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
libreset.so: /opt/ros/foxy/lib/librosidl_typesupport_c.so
libreset.so: /opt/ros/foxy/lib/librcpputils.so
libreset.so: /opt/ros/foxy/lib/librosidl_runtime_c.so
libreset.so: /opt/ros/foxy/lib/librcutils.so
libreset.so: CMakeFiles/reset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ari/ros-tut/build/ros_tut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libreset.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reset.dir/build: libreset.so

.PHONY : CMakeFiles/reset.dir/build

CMakeFiles/reset.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reset.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reset.dir/clean

CMakeFiles/reset.dir/depend:
	cd /home/ari/ros-tut/build/ros_tut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ari/ros-tut /home/ari/ros-tut /home/ari/ros-tut/build/ros_tut /home/ari/ros-tut/build/ros_tut /home/ari/ros-tut/build/ros_tut/CMakeFiles/reset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reset.dir/depend

