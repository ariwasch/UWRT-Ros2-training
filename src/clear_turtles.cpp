#ifndef TURTLE_SERVICE_REQUEST_NODE_HPP_
#define TURTLE_SERVICE_REQUEST_NODE_HPP_

#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>

#include <turtlesim/srv/kill.hpp>


using namespace std::placeholders;
using namespace std::chrono_literals;

// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/string.hpp"
// #include "ros_tut/srv/add_three_ints.hpp"

namespace composition {


class kill_turtles : public rclcpp::Node {
 public:
  // SOFTWARE_TRAINING_PUBLIC //what is this?
  explicit kill_turtles(const rclcpp::NodeOptions &options);

 private:
  rclcpp::Client<turtlesim::srv::Kill>::SharedPtr client;
  rclcpp::TimerBase::SharedPtr timer;

  // all the turtles
  std::vector<std::string> turtle_names = {"turtle1", "moving_turtle", "stationary_turtle"};

  // SOFTWARE_TRAINING_LOCAL //what is this?
  void clear();
};

#endif


kill_turtles::kill_turtles(const rclcpp::NodeOptions &options) : Node("kill_turtles", options) {
  client = create_client<turtlesim::srv::Kill>("/kill");

  timer = create_wall_timer(2s, std::bind(&kill_turtles::clear, this));  // don't understand line
}

void kill_turtles::clear() {
  if (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
      return;
    }
    RCLCPP_INFO(this->get_logger(), "Service not available after waiting");
    return;
  }
  
  for (std::string &name : turtle_names){
      auto request = std::make_shared<turtlesim::srv::Kill::Request>();
    request->name = name;
  
  // using ServiceResponseFuture     = kill_turtles<turtlesim::srv::Empty>::SharedFuture;
  auto response_received_callback = [this](rclcpp::Client<turtlesim::srv::Kill>::SharedFuture response) {
    RCLCPP_INFO(this->get_logger(), "POGGERS");
    (void)response;
  };
  
  auto future_result = client->async_send_request(request, response_received_callback);
  }
}
}
#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::kill_turtles) //what is this??
