// #include <ros-tut/visibility.h>

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <ros-tut/msg/software.hpp>
#include <turtlesim/msg/pose.hpp>

namespace composition {

class publisher : public rclcpp::Node {
 public:
  explicit publisher(const rclcpp::NodeOptions &options);

 private:
  rclcpp::Publisher<software_training::msg::Software>::SharedPtr publisher;

  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sitting_turtle;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr moving_turtle;

  rclcpp::TimerBase::SharedPtr timer;

  rclcpp::CallbackGroup::SharedPtr callbacks;

  float x_sitting_turtle;
  float y_sitting_turtle;

  float x_moving_turtle;
  float y_moving_turtle;

  float distance;

  static const unsigned int QUEUE{10};
};
}  // namespace composition