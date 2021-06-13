#include <chrono>
#include <functional>
#include <memory>
#include <string>
// #include "std_srvs"

// #include <ros-tut/src/clear_turtles.hpp>

using namespace std::placeholders;
using namespace std::chrono_literals;

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
// #include "ros_tut/srv/add_three_ints.hpp"

namespace composition {
  kill_turtles::kill_turtles(
    const rclcpp::NodeOptions &options) : Node("kill_turtles", options) { 
      client = create_client<turtlesim::srv::Empty>("/clear");

      timer = create_wall_timer(2s, std::bind(&kill_turtles::clear, this)); //don't understand line
    }
  
  void kill_turtles::clear()
  {
    if (!client_->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(
          this->get_logger(),
          "Interrupted while waiting for the service. Exiting.");
        return;
      }
      RCLCPP_INFO(this->get_logger(), "Service not available after waiting");
      return;
  }
  auto request = std::make_shared<turtlesim::srv::Empty::Request>();

  using ServiceResponseFuture =
    rclcpp::kill_turtles<turtlesim::srv::Empty>::SharedFuture;
  auto response_received_callback = [this](ServiceResponseFuture future) {
      RCLCPP_INFO(this->get_logger(), "Got result: [%" PRId64 "]", future.get()->sum);
  };
  auto future_result = client_->async_send_request(request, response_received_callback);

  }

}
