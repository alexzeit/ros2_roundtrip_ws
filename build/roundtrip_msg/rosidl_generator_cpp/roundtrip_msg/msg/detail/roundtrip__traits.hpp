// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice

#ifndef ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__TRAITS_HPP_
#define ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roundtrip_msg/msg/detail/roundtrip__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roundtrip_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Roundtrip & msg,
  std::ostream & out)
{
  out << "{";
  // member: tpoint
  {
    out << "tpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.tpoint, out);
    out << ", ";
  }

  // member: msgcnt
  {
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Roundtrip & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.tpoint, out);
    out << "\n";
  }

  // member: msgcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Roundtrip & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roundtrip_msg

namespace rosidl_generator_traits
{

[[deprecated("use roundtrip_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roundtrip_msg::msg::Roundtrip & msg,
  std::ostream & out, size_t indentation = 0)
{
  roundtrip_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roundtrip_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const roundtrip_msg::msg::Roundtrip & msg)
{
  return roundtrip_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roundtrip_msg::msg::Roundtrip>()
{
  return "roundtrip_msg::msg::Roundtrip";
}

template<>
inline const char * name<roundtrip_msg::msg::Roundtrip>()
{
  return "roundtrip_msg/msg/Roundtrip";
}

template<>
struct has_fixed_size<roundtrip_msg::msg::Roundtrip>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roundtrip_msg::msg::Roundtrip>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roundtrip_msg::msg::Roundtrip>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__TRAITS_HPP_
