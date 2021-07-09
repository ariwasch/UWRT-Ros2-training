#include <cmath>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <ros-tut/action.hpp>
#include <ros_tut/action/software.hpp>
#include <turtlesim/srv/teleport_absolute.hpp>

using namespace std::chrono_literals;
using namespace std::placeholders;

namespace composition {

action::action(const rclcpp::NodeOptions &options) : Node("action", options) {
  // create publisher
  this->publisher = this->create_publisher<geometry_msgs::msg::Twist>("/moving_turtle/cmd_vel", rclcpp::QoS(QUEUE));

  auto subscriber_callback = [this](const turtlesim::msg::Pose::SharedPtr msg) -> void {
    this->action::x                = msg->x;
    this->action::y                = msg->y;
    this->action::theta            = msg->theta;
    this->action::linear_velocity  = msg->linear_velocity;
    this->action::angular_velocity = msg->angular_velocity;
  };

  this->subscriber = this->create_subscription<turtlesim::msg::Pose>("/moving_turtle/pose", QUEUE, subscriber_callback);

  this->action_server = rclcpp_action::create_server<ros_tut::action::Software>(
      this, "action", std::bind(&action::handle_goal, this, _1, _2), std::bind(&action::handle_cancel, this, _1),
      std::bind(&action::handle_accepted, this, _1)

  );
}

rclcpp_action::GoalResponse action::handle_goal(const rclcpp_action::GoalUUID &uuid,
                                                std::shared_ptr<const ros_tut::action::Software::Goal> goal) {
  (void)uuid;
  RCLCPP_INFO(this->get_logger(), "GOAL RECIIEIIVEIIVEID");
  RCLCPP_INFO(this->get_logger(), "linear X:%f Y:%f Z:%f", goal->linear_pos.x, goal->linear_pos.y, goal->linear_pos.z);
  RCLCPP_INFO(this->get_logger(), "angular X:%f Y:%f Z:%f", goal->angular_pos.x, goal->angular_pos.y,
              goal->angular_pos.z);
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse action::handle_cancel(const std::shared_ptr<GoalHandleActionServer> goal_handle) {
  (void)goal_handle;  // not needed

  RCLCPP_INFO(this->get_logger(), "Cancelling goal :(");

  return rclcpp_action::CancelResponse::ACCEPT;
}

void action::handle_accepted(const std::shared_ptr<GoalHandleActionServer> goal_handle) {
  std::thread{std::bind(&action::execute, this, _1), goal_handle}.detach();
}

void action::execute(const std::shared_ptr<GoalHandleActionServer> goal_handle) {
  rclcpp::Time start_time = this->now();  // get the current time

  RCLCPP_INFO(this->get_logger(), "Excuting Goal");

  rclcpp::Rate cycle_rate{1};  // set up frequency for goal execution

  const auto goal = goal_handle->get_goal();

  std::unique_ptr<ros_tut::action::Software::Feedback> feedback =
      std::make_unique<ros_tut::action::Software::Feedback>();

  std::unique_ptr<ros_tut::action::Software::Result> result = std::make_unique<ros_tut::action::Software::Result>();

  float &curr_x     = feedback->x_pos;
  float &curr_y     = feedback->y_pos;
  float &curr_theta = feedback->theta_pos;

  float lin_x{0};
  float lin_y{0};
  float lin_z{0};

  float ang_x{0};
  float ang_y{0};
  float ang_z{0};

  while (rclcpp::ok() && (lin_x < goal->linear_pos.x || lin_y < goal->linear_pos.y || lin_z < goal->linear_pos.z ||
                          ang_x < goal->angular_pos.x || ang_y < goal->angular_pos.y || ang_z < goal->angular_pos.z)) {
    if (goal_handle->is_canceling()) {
      RCLCPP_INFO(this->get_logger(), "Goal Canceled");

      rclcpp::Time curr_time = this->now();
      rclcpp::Duration time  = curr_time - start_time;
      long int duration{time.nanoseconds()};
      result->duration = duration;

      goal_handle->canceled(std::move(result));
      return;
    }

    auto message_cmd_vel = std::make_unique<geometry_msgs::msg::Twist>();

    message_cmd_vel->linear.x  = (lin_x < goal->linear_pos.x) ? lin_x++ : lin_x;
    message_cmd_vel->linear.y  = (lin_y < goal->linear_pos.y) ? lin_y++ : lin_y;
    message_cmd_vel->linear.z  = (lin_z < goal->linear_pos.z) ? lin_z++ : lin_z;
    message_cmd_vel->angular.x = (ang_x < goal->angular_pos.x) ? ang_x++ : ang_x;
    message_cmd_vel->angular.y = (ang_y < goal->angular_pos.y) ? ang_y++ : ang_y;
    message_cmd_vel->angular.z = (ang_z < goal->angular_pos.z) ? ang_z++ : ang_z;

    this->publisher->publish(std::move(message_cmd_vel));

    // now compute feedback
    curr_x = this->action::x - lin_x;
    curr_y = this->action::y - lin_y;
    float theta{0};
    float x1{lin_x}, x2{lin_y}, x3{lin_z};
    float magnitude{static_cast<float>(sqrt((x1 * x1) + (x2 * x2) + (x3 * x3)))};
    theta = acos(x3 / magnitude);

    curr_theta = this->action::theta - theta;

    goal_handle->publish_feedback(std::move(feedback));

    cycle_rate.sleep();
  }

  // if goal is done
  if (rclcpp::ok()) {
    rclcpp::Time end          = this->now();
    rclcpp::Duration duration = end - start_time;
    long int res_time{duration.nanoseconds()};
    result->duration = res_time;
    // goal_handle->succeed(std::move(result));
    RCLCPP_INFO(this->get_logger(), "Finish Executing Goal");
  }
}

}  // namespace composition

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::action)
