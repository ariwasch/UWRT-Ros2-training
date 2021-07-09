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
  "msg/Distance.msg"
  "action/Software.action"
  DEPENDENCIES std_msgs geometry_msgs builtin_interfaces
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

add_library(circle SHARED 
	src/circle.cpp)
target_compile_definitions(circle
	PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(circle
	"rclcpp"
	"rclcpp_components"
	"turtlesim"
  "geometry_msgs")
rclcpp_components_register_nodes(circle "composition::circle")
# this way we can execute the component with - ros2 component standalone software_training composition::turtle_service_request_node
set(node_plugins "${node_plugins}compositon::circle;$<TARGET_FILE:circle>\n")

add_library(spawn SHARED 
	src/spawn.cpp)
target_compile_definitions(spawn
	PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(spawn
	"rclcpp"
  "rclcpp_components"
	"turtlesim"
	"std_msgs")
rclcpp_components_register_nodes(spawn "composition::spawn")
# this way we can execute the component with - ros2 component standalone software_training composition::turtle_service_request_node
set(node_plugins "${node_plugins}compositon::spawn;$<TARGET_FILE:spawn>\n")

add_library(reset SHARED
	src/reset.cpp)
target_compile_definitions(reset
	PRIVATE "COMPOSITION_BUILDING_DLL"
	)
ament_target_dependencies(reset
	"rclcpp"
	"rclcpp_components"
	"turtlesim"
	"turtlesim"
	"std_msgs")
rosidl_target_interfaces(reset ${PROJECT_NAME} "rosidl_typesupport_cpp") # need for custom srv
rclcpp_components_register_nodes(reset "composition::reset")
set(node_plugins "${node_plugins}composition::reset;$<TARGET_FILE:reset\n">)

add_library(publisher SHARED
	src/publisher.cpp)
target_compile_definitions(publisher
	PRIVATE "COMPOSITION_BUILDING_DLL"
	)
ament_target_dependencies(publisher
	"rclcpp"
	"rclcpp_components"
	"turtlesim"
	"std_msgs")
rosidl_target_interfaces(publisher ${PROJECT_NAME} "rosidl_typesupport_cpp") # need this for custom messages - idk why tho
rclcpp_components_register_nodes(publisher "composition::publisher")
set(node_plugins "${node_plugins}composition::publisher;$<TARGET_FILE:turtle_pub\n>")

# add_library(action SHARED
# 	src/action.cpp)
# target_compile_definitions(action
# 	PRIVATE "COMPOSITION_BUILDING_DLL")
# ament_target_dependencies(action
#        "rclcpp"
#        "rclcpp_components" 
#        "turtlesim"
#        "rclcpp_action"
#        "std_msgs"
#        "geometry_msgs")
# rosidl_target_interfaces(action ${PROJECT_NAME} "rosidl_typesupport_cpp") # needed for custom action
# # with this we can exexute the component as a node - ros2 run software_training moving_action_server
# rclcpp_components_register_node(action PLUGIN "composition::action" EXECUTABLE action)
add_library(turtle_action_server SHARED
	src/action.cpp)
target_compile_definitions(turtle_action_server
	PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(turtle_action_server
       "rclcpp"
       "rclcpp_components" 
       "turtlesim"
       "rclcpp_action"
       "std_msgs"
       "geometry_msgs")
rosidl_target_interfaces(turtle_action_server ${PROJECT_NAME} "rosidl_typesupport_cpp") # needed for custom action
# with this we can exexute the component as a node - ros2 run software_training moving_action_server
# rclcpp_components_register_node(turtle_action_server PLUGIN "composition::action" EXECUTABLE action)
# rclcpp_components_register_nodes(turtle_action_server "composition::action")
rclcpp_components_register_nodes(turtle_action_server "composition::action")
# this way we can execute the component with - ros2 component standalone software_training composition::turtle_service_request_node
set(turtle_action_server "${node_plugins}compositon::action;$<TARGET_FILE:action>\n")



install(TARGETS 
  # my_node
  # talker
  # listener
  kill_turtles
  circle
  spawn
  reset
  turtle_action_server
  publisher
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
