#include <cmath>
#include <iostream>
#include <software_training/turtle_publisher.hpp>
#include <string>

using namespace std::chrono_literals;

namespace composition {

publisher::publisher(const rclcpp::NodeOptions &options) : Node("publisher", options) {
  publisher = this->create_publisher<ros - tut::msg::Distance>("/turtle_distance", 10);
  timer     = this->create_wall_timer(1000ms, std::bind(&publisher::publish, this));

  auto sitting_turtle = [this](const turtlesim::msg::Pose::SharedPtr msg) -> void {
    x_sitting_turtle = msg.x;
    y_sitting_turtle = msg.y;
  };

  auto moving_turtle = [this](const turtlesim::msg::Pose::SharedPtr msg) -> void {
    x_moving_turtle = msg.x;
    y_moving_turtle = msg.y;
  };

  sitting_turtle = this->create_subscription<turtlesim::msg::Pose>(
      "/stationary_turtle/pose", 10, std::bind(&publisher::sitting_turtle, this, std::placeholders::_1));

  moving_turtle = this->create_subscription<turtlesim::msg::Pose>(
      "/moving_turtle/pose", 10, std::bind(&publisher::moving_turtle, this, std::placeholders::_1));
}

void publisher::publish() {
  double pos_y{abs(y_sitting_turtle - y_moving_turtle)};
  double pos_x{abs(x_sitting_turtle - x_sitting_turtle)};
  auto msg     = std::make_unique<ros - tut::msg::Distance>();
  msg.x_pos    = pos_x;
  msg.y_pos    = pos_y;
  msg.distance = sqrt((pos_x * pos_x) + (pos_y * pos_y));

  publisher->publish(msg);
}

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::publisher)