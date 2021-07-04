// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__SRV__DETAIL__SUCCESS__BUILDER_HPP_
#define ROS_TUT__SRV__DETAIL__SUCCESS__BUILDER_HPP_

#include "ros_tut/srv/detail/success__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_tut
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tut::srv::Success_Request>()
{
  return ::ros_tut::srv::Success_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros_tut


namespace ros_tut
{

namespace srv
{

namespace builder
{

class Init_Success_Response_result
{
public:
  Init_Success_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_tut::srv::Success_Response result(::ros_tut::srv::Success_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tut::srv::Success_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tut::srv::Success_Response>()
{
  return ros_tut::srv::builder::Init_Success_Response_result();
}

}  // namespace ros_tut

#endif  // ROS_TUT__SRV__DETAIL__SUCCESS__BUILDER_HPP_
