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
include CMakeFiles/spawn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spawn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spawn.dir/flags.make

CMakeFiles/spawn.dir/src/spawn.cpp.o: CMakeFiles/spawn.dir/flags.make
CMakeFiles/spawn.dir/src/spawn.cpp.o: ../../src/spawn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ari/ros-tut/build/ros_tut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spawn.dir/src/spawn.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spawn.dir/src/spawn.cpp.o -c /home/ari/ros-tut/src/spawn.cpp

CMakeFiles/spawn.dir/src/spawn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spawn.dir/src/spawn.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ari/ros-tut/src/spawn.cpp > CMakeFiles/spawn.dir/src/spawn.cpp.i

CMakeFiles/spawn.dir/src/spawn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spawn.dir/src/spawn.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ari/ros-tut/src/spawn.cpp -o CMakeFiles/spawn.dir/src/spawn.cpp.s

# Object files for target spawn
spawn_OBJECTS = \
"CMakeFiles/spawn.dir/src/spawn.cpp.o"

# External object files for target spawn
spawn_EXTERNAL_OBJECTS =

libspawn.so: CMakeFiles/spawn.dir/src/spawn.cpp.o
libspawn.so: CMakeFiles/spawn.dir/build.make
libspawn.so: /opt/ros/foxy/lib/libcomponent_manager.so
libspawn.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libturtlesim__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/librclcpp.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/librcl.so
libspawn.so: /opt/ros/foxy/lib/librmw_implementation.so
libspawn.so: /opt/ros/foxy/lib/librmw.so
libspawn.so: /opt/ros/foxy/lib/librcl_logging_spdlog.so
libspawn.so: /usr/lib/aarch64-linux-gnu/libspdlog.so.1.5.0
libspawn.so: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
libspawn.so: /opt/ros/foxy/lib/libyaml.so
libspawn.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libtracetools.so
libspawn.so: /opt/ros/foxy/lib/libament_index_cpp.so
libspawn.so: /opt/ros/foxy/lib/libclass_loader.so
libspawn.so: /opt/ros/foxy/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
libspawn.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libturtlesim__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
libspawn.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
libspawn.so: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
libspawn.so: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
libspawn.so: /opt/ros/foxy/lib/librosidl_typesupport_c.so
libspawn.so: /opt/ros/foxy/lib/librcpputils.so
libspawn.so: /opt/ros/foxy/lib/librosidl_runtime_c.so
libspawn.so: /opt/ros/foxy/lib/librcutils.so
libspawn.so: CMakeFiles/spawn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ari/ros-tut/build/ros_tut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libspawn.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spawn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spawn.dir/build: libspawn.so

.PHONY : CMakeFiles/spawn.dir/build

CMakeFiles/spawn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spawn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spawn.dir/clean

CMakeFiles/spawn.dir/depend:
	cd /home/ari/ros-tut/build/ros_tut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ari/ros-tut /home/ari/ros-tut /home/ari/ros-tut/build/ros_tut /home/ari/ros-tut/build/ros_tut /home/ari/ros-tut/build/ros_tut/CMakeFiles/spawn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spawn.dir/depend

