#include <memory>
#include <ros-tut/spawn.hpp>
#include <vector>

using namespace std::chrono_literals;

namespace composition {
    spawn::spawn(const rclcpp::NodeOptions &options) : Node("spawn", options) {
        client = this->create_client<turtlesim::srv::Spawn>("/spawn");
        timer = create_wall_timer(2s, std::bind(&spawn::spawn_offspring, this)); 
    }

    void spawn::spawn_offspring(){
        if (!client->wait_for_service(1s)) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Service not available after waiting");
        return;
        }
    
    for (const std::string &name : turtle_info) {

    // create request
    std::unique_ptr<turtlesim::srv::Spawn::Request> request =
        std::make_unique<turtlesim::srv::Spawn::Request>();

    // fill in repsonse
    request->name = name;
    request->x = turtle_description[name].x;
    request->y = turtle_description[name].y;

    // create a callback to call client and because no 'spin()' is available
    auto callback =
        [this](rclcpp::Client<turtlesim::srv::Spawn>::SharedFuture response)
        -> void {
      RCLCPP_INFO(this->get_logger(), "Turtle Created: %s",
                  response.get()->name.c_str());
      rclcpp::shutdown();
    };

    // send request
    auto result = client->async_send_request(std::move(request), callback);
  }

    }

}

#include <rclcpp_components/register_node_macro.hpp>

RCLCPP_COMPONENTS_REGISTER_NODE(composition::spawn)
