#pragma once

#include "roundtrip_msg/msg/roundtrip.hpp"
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include "../../../../lib/data_collector/data_collector.hpp"

class PING_Node : public rclcpp::Node
{
public:
    PING_Node();
    ~PING_Node();

private:
    
    bool my_callback(const roundtrip_msg::msg::Roundtrip msg);

    long count_;
    long send_count_;
    long conLost;
    long msgLost;
    long last_rx_nr;
    long number_samples;
    const std::string inst_num_;
    const uint16_t qos_profile_;


    DataCollector<int> DataVec; // Instanziert DataCollector mit int - int reicht für 

    std::chrono::time_point<std::chrono::system_clock> start1, end1;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<roundtrip_msg::msg::Roundtrip>::SharedPtr my_pub_;
    rclcpp::Subscription<roundtrip_msg::msg::Roundtrip>::SharedPtr my_sub_;
};
