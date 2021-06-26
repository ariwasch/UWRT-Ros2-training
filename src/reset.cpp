#include <chrono>
#include <ros-tut/reset.hpp>

namespace composition {

reset::reset(const rclcpp::NodeOptions &options) : Node("reset", options) {
  client = create_client<turtlesim::srv::TeleportAbsolute>("/moving_turtle/teleport_absolute");

  // create service
  service = create_service<ros - tut::srv::Success>(
      "/reset", std::bind(&reset::service_callback, this, _1, _2));  // what does this do????
}

void reset::service_callback(const std::shared_ptr<ros - tut::srv::Success::Request> request,
                             std::shared_ptr<ros - tut::srv::Success::Response> response) {
  (void)request;  // request is not needed

  RCLCPP_INFO(this->get_logger(), "Starting ...");

  // make client call to reset turtle
  if (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "System Aborted");
      response.success = false;
      return;
    }
    RCLCPP_INFO(this->get_logger(), "Service is not available! Exit!");
    response.success = false;
    return;
  }

  auto client_request = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();

  // fill request data
  client_request.x     = 0;
  client_request.y     = 0;
  client_request.theta = 0;

  // create response callback
  auto response_callback = [this](rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedFuture future) -> void {
    (void)future;  // not needed
    RCLCPP_INFO(this->get_logger(), "Turtle Moved!!! YAYAYYAYAYAY");
  };

  // send client request
  auto result = client->async_send_request(client_request, response_callback);

  RCLCPP_INFO(this->get_logger(), "I LIKE TURTLES!!!!!!");

  response.success = true;
}

}  // namespace composition

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::reset)
