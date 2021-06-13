// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__SRV__DETAIL__SUCCESS__TRAITS_HPP_
#define ROS_TUT__SRV__DETAIL__SUCCESS__TRAITS_HPP_

#include "ros_tut/srv/detail/success__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_tut::srv::Success_Request>()
{
  return "ros_tut::srv::Success_Request";
}

template<>
inline const char * name<ros_tut::srv::Success_Request>()
{
  return "ros_tut/srv/Success_Request";
}

template<>
struct has_fixed_size<ros_tut::srv::Success_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_tut::srv::Success_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_tut::srv::Success_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_tut::srv::Success_Response>()
{
  return "ros_tut::srv::Success_Response";
}

template<>
inline const char * name<ros_tut::srv::Success_Response>()
{
  return "ros_tut/srv/Success_Response";
}

template<>
struct has_fixed_size<ros_tut::srv::Success_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_tut::srv::Success_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_tut::srv::Success_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_tut::srv::Success>()
{
  return "ros_tut::srv::Success";
}

template<>
inline const char * name<ros_tut::srv::Success>()
{
  return "ros_tut/srv/Success";
}

template<>
struct has_fixed_size<ros_tut::srv::Success>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_tut::srv::Success_Request>::value &&
    has_fixed_size<ros_tut::srv::Success_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_tut::srv::Success>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_tut::srv::Success_Request>::value &&
    has_bounded_size<ros_tut::srv::Success_Response>::value
  >
{
};

template<>
struct is_service<ros_tut::srv::Success>
  : std::true_type
{
};

template<>
struct is_service_request<ros_tut::srv::Success_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_tut::srv::Success_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_TUT__SRV__DETAIL__SUCCESS__TRAITS_HPP_
