cmake_minimum_required(VERSION 3.5)
project(ros_tut)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rcutils REQUIRED)
find_package(rcl REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)
include_directories(include)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "srv/AddThreeInts.srv"
  "srv/Success.srv"
 )

# add_executable(talker src/my_publisher.cpp)
# ament_target_dependencies(talker rclcpp std_msgs)
# add_executable(my_node src/my_node.cpp)
# add_executable(listener src/my_subscriber.cpp)
# ament_target_dependencies(listener rclcpp std_msgs)


# add_executable(server src/add_two_ints_server.cpp)
# ament_target_dependencies(server
# rclcpp example_interfaces)
# add_executable(client src/add_two_ints_client.cpp)
# ament_target_dependencies(client
#   rclcpp example_interfaces)

# add_executable(clear src/clear_turtles.cpp)
# ament_target_dependencies(clear
#     rclcpp )
  
# target_include_directories(my_node PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)

#add kill_turtles as a plugin
add_library(kill_turtles SHARED 
	src/clear_turtles.cpp)
target_compile_definitions(kill_turtles
	PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(kill_turtles
	"rclcpp"
	"rclcpp_components"
	"turtlesim"
	"std_msgs")
rclcpp_components_register_nodes(kill_turtles "composition::kill_turtles")
# this way we can execute the component with - ros2 component standalone software_training composition::turtle_service_request_node
set(node_plugins "${node_plugins}compositon::kill_turtles;$<TARGET_FILE:kill_turtles>\n")

install(TARGETS 
  # my_node
  # talker
  # listener
  kill_turtles
  # server
  # client
  RUNTIME DESTINATION lib
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION bin)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
