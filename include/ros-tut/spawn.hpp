#ifndef SPAWN_TURTLE_NODELET_HPP_
#define SPAWN_TURTLE_NODELET_HPP_

// #include <cstdlib>
// #include <map>
#include <memory>
// #include <string>
#include <vector>
#include <rclcpp/rclcpp.hpp>
#include <turtlesim/srv/spawn.hpp>

namespace composition {

class spawn : public rclcpp::Node {

public:
  explicit spawn(const rclcpp::NodeOptions &options);

private:
  rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr client;
  rclcpp::TimerBase::SharedPtr timer;

  int NUMBER_OF_TURTLES = 2;

  typedef struct turtle_info {
    std::string name;
    float x;
    float y;
  } turtle_info;

    std::vector<turtle_info> turtle_descriptions = {
             {"stationary_turtle", 5, 5},
             {"moving_turtle", 25, 10}
    };

  std::map<std::string, turtle_info> turtle_description;

  void spawn_offspring();

};

} 
#endif