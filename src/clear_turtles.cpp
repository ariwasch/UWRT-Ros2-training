#include <chrono>
#include <functional>
#include <memory>
#include <string>
// #include "std_srvs"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
// #include "ros_tut/srv/add_three_ints.hpp"

int main(int argc, char **argv){
    
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("clear");
  rclcpp::Client<ros_tut::srv::Success>::SharedPtr client =
    node->create_client<ros_tut::srv::Success>("clear");

  auto request = std::make_shared<turtlesim::srv::Success::Request>();
//   request->a = atoll(argv[1]);
//   request->b = atoll(argv[2]);

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
  }

  rclcpp::shutdown();
  return 0;
    
}