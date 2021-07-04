#ifndef TURTLE_SERVICE_REQUEST_NODE_HPP_
#define TURTLE_SERVICE_REQUEST_NODE_HPP_

#include <cstdlib>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <ros_tut/srv/success.hpp>
#include <string>
#include <turtlesim/srv/teleport_absolute.hpp>
#include <vector>

using namespace std::placeholders;
using namespace std::chrono_literals;

// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/string.hpp"
// #include "ros_tut/srv/add_three_ints.hpp"

namespace composition {

class reset : public rclcpp::Node {
 public:
  // SOFTWARE_TRAINING_PUBLIC //what is this?
  explicit reset(const rclcpp::NodeOptions &options);
  
 private:
  rclcpp::Service<ros_tut::srv::Success>::SharedPtr service;
  rclcpp::TimerBase::SharedPtr timer;

  // all the turtles
  rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr client;
  // SOFTWARE_TRAINING_LOCAL //what is this?
  void reset_service(const std::shared_ptr<ros_tut::srv::Success::Request> request,
                     std::shared_ptr<ros_tut::srv::Success::Response> response);
};
}  // namespace composition
#endif