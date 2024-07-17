#include "roundtripPong.hpp"
       // All of the GPIO stuff...
using namespace std::chrono_literals;


PONG_Node::PONG_Node()

    :

      Node("roundtripPong_node"),
      count_(0),
      inst_num_(declare_parameter<std::string>("inst_num", "1")),
      qos_profile_(declare_parameter<std::uint16_t>("qos_profile", 1U))
{

    RCLCPP_INFO(this->get_logger(), "Starting roundtripPing Node with name %s  inst_num:=%s  qos_profile:=%d",
                this->get_node_names()[0].c_str(), inst_num_.c_str(), qos_profile_);
    
    rclcpp::QoS qos(rclcpp::KeepLast(10));

    if (qos_profile_ == 0) {
        qos = rclcpp::QoS(rclcpp::KeepLast(10), rmw_qos_profile_system_default);
    } else {
        qos = rclcpp::QoS(rclcpp::KeepLast(10), rmw_qos_profile_sensor_data);
    }

    // subscribe
    my_sub_ = this->create_subscription<roundtrip_msg::msg::Roundtrip>(
        "roundtripPing" + inst_num_, qos, std::bind(&PONG_Node::my_callback, this, std::placeholders::_1));

    // publish
    my_pub_ = this->create_publisher<roundtrip_msg::msg::Roundtrip>("roundtripPong" + inst_num_, qos);

}



bool PONG_Node::my_callback(const roundtrip_msg::msg::Roundtrip msg)
{

    

        auto message = roundtrip_msg::msg::Roundtrip();

        message.tpoint = msg.tpoint;
        message.msgcnt = msg.msgcnt;
        
        my_pub_->publish(message);
    
  
        count_++;

     

        if (count_%10000==0){
            RCLCPP_INFO(this->get_logger(), "sent %d feedbacks", count_);
        }
        if (msg.tpoint==0){
                RCLCPP_INFO(this->get_logger(), "Shutdown roundtripPong Node");
                rclcpp::shutdown();        
        }

        return true;
}

int main(int argc, char* argv[])
{

    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PONG_Node>());
    rclcpp::shutdown();   
    return 0;
}
