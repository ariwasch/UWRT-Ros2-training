// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tut:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__MSG__DETAIL__DISTANCE__BUILDER_HPP_
#define ROS_TUT__MSG__DETAIL__DISTANCE__BUILDER_HPP_

#include "ros_tut/msg/detail/distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_tut
{

namespace msg
{

namespace builder
{

class Init_Distance_distance
{
public:
  explicit Init_Distance_distance(::ros_tut::msg::Distance & msg)
  : msg_(msg)
  {}
  ::ros_tut::msg::Distance distance(::ros_tut::msg::Distance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tut::msg::Distance msg_;
};

class Init_Distance_y_pos
{
public:
  explicit Init_Distance_y_pos(::ros_tut::msg::Distance & msg)
  : msg_(msg)
  {}
  Init_Distance_distance y_pos(::ros_tut::msg::Distance::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_Distance_distance(msg_);
  }

private:
  ::ros_tut::msg::Distance msg_;
};

class Init_Distance_x_pos
{
public:
  Init_Distance_x_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_y_pos x_pos(::ros_tut::msg::Distance::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Distance_y_pos(msg_);
  }

private:
  ::ros_tut::msg::Distance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tut::msg::Distance>()
{
  return ros_tut::msg::builder::Init_Distance_x_pos();
}

}  // namespace ros_tut

#endif  // ROS_TUT__MSG__DETAIL__DISTANCE__BUILDER_HPP_
