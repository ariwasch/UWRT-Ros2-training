// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tut:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__MSG__DETAIL__NUM__BUILDER_HPP_
#define ROS_TUT__MSG__DETAIL__NUM__BUILDER_HPP_

#include "ros_tut/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_tut
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_tut::msg::Num num(::ros_tut::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tut::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tut::msg::Num>()
{
  return ros_tut::msg::builder::Init_Num_num();
}

}  // namespace ros_tut

#endif  // ROS_TUT__MSG__DETAIL__NUM__BUILDER_HPP_
