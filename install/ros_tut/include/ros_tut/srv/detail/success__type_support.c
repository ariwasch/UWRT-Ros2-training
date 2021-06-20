// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_tut/srv/detail/success__rosidl_typesupport_introspection_c.h"
#include "ros_tut/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_tut/srv/detail/success__functions.h"
#include "ros_tut/srv/detail/success__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Success_Request__rosidl_typesupport_introspection_c__Success_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_tut__srv__Success_Request__init(message_memory);
}

void Success_Request__rosidl_typesupport_introspection_c__Success_Request_fini_function(void * message_memory)
{
  ros_tut__srv__Success_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tut__srv__Success_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_members = {
  "ros_tut__srv",  // message namespace
  "Success_Request",  // message name
  1,  // number of fields
  sizeof(ros_tut__srv__Success_Request),
  Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_member_array,  // message members
  Success_Request__rosidl_typesupport_introspection_c__Success_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Success_Request__rosidl_typesupport_introspection_c__Success_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_type_support_handle = {
  0,
  &Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_tut
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Request)() {
  if (!Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_type_support_handle.typesupport_identifier) {
    Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Success_Request__rosidl_typesupport_introspection_c__Success_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_tut/srv/detail/success__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_tut/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_tut/srv/detail/success__functions.h"
// already included above
// #include "ros_tut/srv/detail/success__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Success_Response__rosidl_typesupport_introspection_c__Success_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_tut__srv__Success_Response__init(message_memory);
}

void Success_Response__rosidl_typesupport_introspection_c__Success_Response_fini_function(void * message_memory)
{
  ros_tut__srv__Success_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tut__srv__Success_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_members = {
  "ros_tut__srv",  // message namespace
  "Success_Response",  // message name
  1,  // number of fields
  sizeof(ros_tut__srv__Success_Response),
  Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_member_array,  // message members
  Success_Response__rosidl_typesupport_introspection_c__Success_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Success_Response__rosidl_typesupport_introspection_c__Success_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_type_support_handle = {
  0,
  &Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_tut
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Response)() {
  if (!Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_type_support_handle.typesupport_identifier) {
    Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Success_Response__rosidl_typesupport_introspection_c__Success_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_tut/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_tut/srv/detail/success__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_members = {
  "ros_tut__srv",  // service namespace
  "Success",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_Request_message_type_support_handle,
  NULL  // response message
  // ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_type_support_handle = {
  0,
  &ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_tut
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success)() {
  if (!ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_type_support_handle.typesupport_identifier) {
    ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tut, srv, Success_Response)()->data;
  }

  return &ros_tut__srv__detail__success__rosidl_typesupport_introspection_c__Success_service_type_support_handle;
}
