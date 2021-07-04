// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice
#include "ros_tut/srv/detail/success__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_tut/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_tut/srv/detail/success__struct.h"
#include "ros_tut/srv/detail/success__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Success_Request__ros_msg_type = ros_tut__srv__Success_Request;

static bool _Success_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Success_Request__ros_msg_type * ros_message = static_cast<const _Success_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Success_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Success_Request__ros_msg_type * ros_message = static_cast<_Success_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tut
size_t get_serialized_size_ros_tut__srv__Success_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Success_Request__ros_msg_type * ros_message = static_cast<const _Success_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Success_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_tut__srv__Success_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tut
size_t max_serialized_size_ros_tut__srv__Success_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Success_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_tut__srv__Success_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Success_Request = {
  "ros_tut::srv",
  "Success_Request",
  _Success_Request__cdr_serialize,
  _Success_Request__cdr_deserialize,
  _Success_Request__get_serialized_size,
  _Success_Request__max_serialized_size
};

static rosidl_message_type_support_t _Success_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Success_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tut, srv, Success_Request)() {
  return &_Success_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ros_tut/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ros_tut/srv/detail/success__struct.h"
// already included above
// #include "ros_tut/srv/detail/success__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Success_Response__ros_msg_type = ros_tut__srv__Success_Response;

static bool _Success_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Success_Response__ros_msg_type * ros_message = static_cast<const _Success_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _Success_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Success_Response__ros_msg_type * ros_message = static_cast<_Success_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tut
size_t get_serialized_size_ros_tut__srv__Success_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Success_Response__ros_msg_type * ros_message = static_cast<const _Success_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Success_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_tut__srv__Success_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tut
size_t max_serialized_size_ros_tut__srv__Success_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Success_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_tut__srv__Success_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Success_Response = {
  "ros_tut::srv",
  "Success_Response",
  _Success_Response__cdr_serialize,
  _Success_Response__cdr_deserialize,
  _Success_Response__get_serialized_size,
  _Success_Response__max_serialized_size
};

static rosidl_message_type_support_t _Success_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Success_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tut, srv, Success_Response)() {
  return &_Success_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ros_tut/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_tut/srv/success.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Success__callbacks = {
  "ros_tut::srv",
  "Success",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tut, srv, Success_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tut, srv, Success_Response)(),
};

static rosidl_service_type_support_t Success__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Success__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tut, srv, Success)() {
  return &Success__handle;
}

#if defined(__cplusplus)
}
#endif
