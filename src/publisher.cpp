#include <cmath>
#include <iostream>
#include <ros-tut/publisher.hpp>
#include <string>
#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <chrono>
#include <cstdlib>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/twist.hpp>
// #include <ros_tut/visibility.h>

#include <ros_tut/msg/distance.hpp>
#include <turtlesim/msg/pose.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace composition {

publisher::publisher(const rclcpp::NodeOptions &options) : Node("publisher", options) {
  publisher_val = create_publisher<ros_tut::msg::Distance>("/turtle_distance", 10);
  timer     = create_wall_timer(1000ms, std::bind(&publisher::publish, this));

  auto sitting_turtle = [this](const turtlesim::msg::Pose::SharedPtr msg) -> void {
    x_sitting_turtle = msg->x;
    y_sitting_turtle = msg->x;
  };

  auto moving_turtle = [this](const turtlesim::msg::Pose::SharedPtr msg) -> void {
    x_moving_turtle = msg->x;
    y_moving_turtle = msg->y;
  };

  auto callback_option = rclcpp::SubscriptionOptions();
  callback_option.callback_group = callbacks;

  // set ros2 topic statics
  callback_option.topic_stats_options.state =
      rclcpp::TopicStatisticsState::Enable;


  this->sitting_turtle = this->create_subscription<turtlesim::msg::Pose>(
      "/stationary_turtle/pose", QUEUE, sitting_turtle, callback_option);

  this->moving_turtle = this->create_subscription<turtlesim::msg::Pose>(
      "/moving_turtle/pose", QUEUE, moving_turtle, callback_option );
}

void publisher::publish() {
  double pos_y{abs(y_sitting_turtle - y_moving_turtle)};
  double pos_x{abs(x_sitting_turtle - x_sitting_turtle)};
  auto msg     = std::make_unique<ros_tut::msg::Distance>();
  msg->x_pos    = pos_x;
  msg->y_pos    = pos_y;
  msg->distance = sqrt((pos_x * pos_x) + (pos_y * pos_y));

  publisher_val->publish(std::move(msg));
}
}

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::publisher)