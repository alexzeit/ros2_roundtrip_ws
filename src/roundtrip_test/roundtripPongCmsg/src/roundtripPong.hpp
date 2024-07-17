#pragma once

#include "rclcpp/rclcpp.hpp"
#include "roundtrip_msg/msg/roundtrip.hpp"

class PONG_Node : public rclcpp::Node
{
public:
    PONG_Node();

private:
    
    bool my_callback(const roundtrip_msg::msg::Roundtrip msg);

    int count_;
    const std::string inst_num_;
    const uint16_t qos_profile_;
    std::chrono::time_point<std::chrono::system_clock> start1, end1, start2;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<roundtrip_msg::msg::Roundtrip>::SharedPtr my_pub_;
    rclcpp::Subscription<roundtrip_msg::msg::Roundtrip>::SharedPtr my_sub_;
};
