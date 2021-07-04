// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tut:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__MSG__DETAIL__DISTANCE__TRAITS_HPP_
#define ROS_TUT__MSG__DETAIL__DISTANCE__TRAITS_HPP_

#include "ros_tut/msg/detail/distance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_tut::msg::Distance>()
{
  return "ros_tut::msg::Distance";
}

template<>
inline const char * name<ros_tut::msg::Distance>()
{
  return "ros_tut/msg/Distance";
}

template<>
struct has_fixed_size<ros_tut::msg::Distance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_tut::msg::Distance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_tut::msg::Distance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_TUT__MSG__DETAIL__DISTANCE__TRAITS_HPP_
