cmake_minimum_required(VERSION 3.8)
project(roundtrip_pong_cmsg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
add_compile_options(-Wall -Wextra -Wpedantic -mtune=native -march=native -O3)



# set(CMAKE_PREFIX_PATH "/usr/lib/aarch64-linux-gnu")

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(roundtrip_msg REQUIRED)

include_directories(include)
#link_directories(/usr/lib/aarch64-linux-gnu/)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(roundtripPong_node src/roundtripPong.cpp)
ament_target_dependencies(roundtripPong_node rclcpp std_msgs roundtrip_msg)



# add_compile_options(-lgpiod)
install(TARGETS
  roundtripPong_node
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
