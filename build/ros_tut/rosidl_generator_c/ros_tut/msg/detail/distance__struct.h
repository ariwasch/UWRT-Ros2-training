// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_tut:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__MSG__DETAIL__DISTANCE__STRUCT_H_
#define ROS_TUT__MSG__DETAIL__DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Distance in the package ros_tut.
typedef struct ros_tut__msg__Distance
{
  double x_pos;
  double y_pos;
  double distance;
} ros_tut__msg__Distance;

// Struct for a sequence of ros_tut__msg__Distance.
typedef struct ros_tut__msg__Distance__Sequence
{
  ros_tut__msg__Distance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_tut__msg__Distance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_TUT__MSG__DETAIL__DISTANCE__STRUCT_H_
