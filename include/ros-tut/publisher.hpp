// #include <ros-tut/visibility.h>

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <ros_tut/msg/distance.hpp>
#include <turtlesim/msg/pose.hpp>

namespace composition {

class publisher : public rclcpp::Node {
 public:
  explicit publisher(const rclcpp::NodeOptions &options);

 private:
  rclcpp::Publisher<ros_tut::msg::Distance>::SharedPtr publisher_val;

  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sitting_turtle;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr moving_turtle;

  rclcpp::TimerBase::SharedPtr timer;

  rclcpp::CallbackGroup::SharedPtr callbacks;
  void publish();
  float x_sitting_turtle;
  float y_sitting_turtle;

  float x_moving_turtle;
  float y_moving_turtle;

  float distance;

  static const unsigned int QUEUE{10};
};
}  // namespace composition