// #ifndef TURTLE_SERVICE_REQUEST_NODE_HPP_
// #define TURTLE_SERVICE_REQUEST_NODE_HPP_
#ifndef TURTLE_SERVICE_REQUEST_NODE_HPP_
#define TURTLE_SERVICE_REQUEST_NODE_HPP_



#include <cstdlib>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>

// #include <software_training/visibility.h>
#include <turtlesim/msg/pose.hpp>
#include "geometry_msgs/msg/twist.hpp"
namespace composition{

class circle : public rclcpp::Node {

public: 
    explicit circle(const rclcpp::NodeOptions &options);

private: 
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher;
    rclcpp::TimerBase::SharedPtr timer;

    void circleBoi();

};
}

#endif
