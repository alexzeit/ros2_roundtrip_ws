# Measure latency ros2 

The repo contains nodes for measuring ROS2 roundtrip time which is the time measured for communication runtime between a sender and a receiver nodec..

The ros2 workspace contains the following packages:



The repo also contains a small lib for writing the measured data to a *.csv file which is located in lib/data_collector.


## Building

colcon build

## Testing

### 1st console (1st host)

source install/setup.bash

ros2 run roundtrip_ping_cmsg roundtripPing_node

### 2nd console (or 2nd host)

source install/setup.bash

ros2 run roundtrip_pong_cmsg roundtripPong_node


## test result

After 1M samples the test results will be stored in Ping console in measurement dir in .csv file

## Purpose of the Project

This software is not ready for production use. It has neither been developed nor
tested for a specific use case. However, the license conditions of the
applicable Open Source licenses allow you to adapt the software to your needs.
Before using it in a safety relevant setting, make sure that the software
fulfills your requirements and adjust it according to any applicable safety
standards, e.g., ISO 26262.
