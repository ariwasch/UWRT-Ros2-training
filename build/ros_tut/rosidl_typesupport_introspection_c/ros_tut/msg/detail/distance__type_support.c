// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_tut:msg/Distance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_tut/msg/detail/distance__rosidl_typesupport_introspection_c.h"
#include "ros_tut/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_tut/msg/detail/distance__functions.h"
#include "ros_tut/msg/detail/distance__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Distance__rosidl_typesupport_introspection_c__Distance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_tut__msg__Distance__init(message_memory);
}

void Distance__rosidl_typesupport_introspection_c__Distance_fini_function(void * message_memory)
{
  ros_tut__msg__Distance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distance__rosidl_typesupport_introspection_c__Distance_message_member_array[3] = {
  {
    "x_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tut__msg__Distance, x_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tut__msg__Distance, y_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tut__msg__Distance, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distance__rosidl_typesupport_introspection_c__Distance_message_members = {
  "ros_tut__msg",  // message namespace
  "Distance",  // message name
  3,  // number of fields
  sizeof(ros_tut__msg__Distance),
  Distance__rosidl_typesupport_introspection_c__Distance_message_member_array,  // message members
  Distance__rosidl_typesupport_introspection_c__Distance_init_function,  // function to initialize message memory (memory has to be allocated)
  Distance__rosidl_typesupport_introspection_c__Distance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distance__rosidl_typesupport_introspection_c__Distance_message_type_support_handle = {
  0,
  &Distance__rosidl_typesupport_introspection_c__Distance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_tut
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, msg, Distance)() {
  if (!Distance__rosidl_typesupport_introspection_c__Distance_message_type_support_handle.typesupport_identifier) {
    Distance__rosidl_typesupport_introspection_c__Distance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distance__rosidl_typesupport_introspection_c__Distance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
