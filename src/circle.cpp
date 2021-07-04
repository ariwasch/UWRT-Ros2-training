#include <ros-tut/circle.hpp>
using namespace std::chrono_literals;


namespace composition {

    circle::circle(const rclcpp::NodeOptions &options) : Node("circle", options) {
        publisher = create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        timer = create_wall_timer(2s, std::bind(&circle::circleBoi, this)); 
    }

    void circle::circleBoi(){
        auto message = geometry_msgs::msg::Twist();
        message.linear.x = 1;
        message.angular.z = 1;
        publisher->publish(message);
    }

}

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(composition::circle)

