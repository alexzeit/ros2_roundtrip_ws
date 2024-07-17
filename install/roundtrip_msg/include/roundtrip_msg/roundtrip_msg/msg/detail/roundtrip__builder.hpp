// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice

#ifndef ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__BUILDER_HPP_
#define ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roundtrip_msg/msg/detail/roundtrip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roundtrip_msg
{

namespace msg
{

namespace builder
{

class Init_Roundtrip_msgcnt
{
public:
  explicit Init_Roundtrip_msgcnt(::roundtrip_msg::msg::Roundtrip & msg)
  : msg_(msg)
  {}
  ::roundtrip_msg::msg::Roundtrip msgcnt(::roundtrip_msg::msg::Roundtrip::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roundtrip_msg::msg::Roundtrip msg_;
};

class Init_Roundtrip_tpoint
{
public:
  Init_Roundtrip_tpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Roundtrip_msgcnt tpoint(::roundtrip_msg::msg::Roundtrip::_tpoint_type arg)
  {
    msg_.tpoint = std::move(arg);
    return Init_Roundtrip_msgcnt(msg_);
  }

private:
  ::roundtrip_msg::msg::Roundtrip msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roundtrip_msg::msg::Roundtrip>()
{
  return roundtrip_msg::msg::builder::Init_Roundtrip_tpoint();
}

}  // namespace roundtrip_msg

#endif  // ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__BUILDER_HPP_
