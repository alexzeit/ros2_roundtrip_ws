#include "roundtripPing.hpp"
       // All of the GPIO stuff...
using namespace std::chrono_literals;

PING_Node::PING_Node()

    :

      Node("roundtripPing_node"),
      count_(0),
      send_count_(0),
      conLost(0),
      msgLost(0),
      last_rx_nr(0),
      number_samples(1000000),
      inst_num_(declare_parameter<std::string>("inst_num", "1")),
      qos_profile_(declare_parameter<std::uint16_t>("qos_profile", 1U))
{
    DataVec.datafilename="measurement/roundtrip_test" + inst_num_ + ".csv";
    DataVec.deleteCSV();



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
        "roundtripPong" + inst_num_, qos, std::bind(&PING_Node::my_callback, this, std::placeholders::_1));

    // publish
    my_pub_ = this->create_publisher<roundtrip_msg::msg::Roundtrip>("roundtripPing" + inst_num_, qos);

    auto publish_msg = [this]() -> void
    {


        




       // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
         {

            auto timePoint = std::chrono::steady_clock::now();
            auto duration = timePoint.time_since_epoch();
            auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
            long long microsecondsC = static_cast<long long>(microseconds);            

            auto message = roundtrip_msg::msg::Roundtrip();
            message.tpoint = microsecondsC;
            message.msgcnt = send_count_;
            my_pub_->publish(message);
            start1 = std::chrono::high_resolution_clock::now();
        }
        send_count_++; //disable ping, wait for pong
        
    };
    constexpr auto timer_dt = 1000us;
    timer_ = this->create_wall_timer(timer_dt, publish_msg);
    
}

PING_Node::~PING_Node()
{
    DataVec.exportCSV();
}

bool PING_Node::my_callback(const roundtrip_msg::msg::Roundtrip msg)
{
    if (msg.tpoint != 0)
    {
            auto timePoint = std::chrono::steady_clock::now();
            auto duration = timePoint.time_since_epoch();
            auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
            long long microsecondsC = static_cast<long long>(microseconds); 

        auto timeDifference = microsecondsC - msg.tpoint;

        //drop 1000 msg for connection stabilization
        if (count_>1000) {
            DataVec.add(static_cast<int>(timeDifference));
            if (msg.msgcnt > last_rx_nr + 1) {
                conLost++;
                msgLost += msg.msgcnt - last_rx_nr + 1;
            }


        }

        if (count_%10000==0){
            RCLCPP_INFO(this->get_logger(), "Roundtrip latency: %lldµs, msg count: %ld", timeDifference, count_);
        }

        count_++;

        last_rx_nr = msg.msgcnt;

        if (count_>=number_samples + 1000){

            auto message = roundtrip_msg::msg::Roundtrip();
            message.tpoint = 0;            
            my_pub_->publish(message);

            RCLCPP_INFO(this->get_logger(), "Lost connection: %ld, lost messages: %ld", conLost, msgLost);

            

            RCLCPP_INFO(this->get_logger(), "Shutdown roundtriptPing node");
            rclcpp::shutdown();

        }
    }
    // RCLCPP_INFO(this->get_logger(), "I heard roundtripPong: '%s'", msg->data.c_str());
    return true;
}

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PING_Node>());
    rclcpp::shutdown();   
    return 0;
}
