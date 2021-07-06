#ifndef ACTION_HPP_
#define ACTION_HPP_

// #include <ros_tut/visibility.h>

#include <chrono>
#include <functional>
#include <geometry_msgs/msg/twist.hpp>  // cmd_vel publisher message
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/time.hpp>                  // ros2 time header
#include <rclcpp_action/rclcpp_action.hpp>  // ros2 action header
#include <ros_tut/action/software.hpp>
#include <thread>
#include <turtlesim/msg/pose.hpp>  // header for message to get moving turt position

namespace composition {

class action : public rclcpp::Node {
 public:
  explicit action(const rclcpp::NodeOptions &options);

  // nice to have to prevent lengthy repitive code
  using GoalHandleActionServer = rclcpp_action::ServerGoalHandle<ros_tut::action::Software>;

 private:
  // action server
  rclcpp_action::Server<ros_tut::action::Software>::SharedPtr action_server;

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher;

  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber;

  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid,
                                          std::shared_ptr<const ros_tut::action::Software::Goal> goal);

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleActionServer> goal_handle);

  // handle accepetd callback function
  void handle_accepted(const std::shared_ptr<GoalHandleActionServer> goal_handle);

  // executioner callback function
  void execute(const std::shared_ptr<GoalHandleActionServer> goal_handle);

  // for subscriber
  static float x;
  static float y;
  static float theta;
  static float linear_velocity;
  static float angular_velocity;

  static constexpr unsigned int QUEUE{10};
};

}  // namespace composition

#endif  // MOVING_TURTLE_ACTION_SERVER_HPP_