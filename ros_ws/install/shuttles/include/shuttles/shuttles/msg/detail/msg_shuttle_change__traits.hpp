// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_change.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__TRAITS_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shuttles/msg/detail/msg_shuttle_change__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shuttles
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgShuttleChange & msg,
  std::ostream & out)
{
  out << "{";
  // member: handle
  {
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << ", ";
  }

  // member: argument
  {
    out << "argument: ";
    rosidl_generator_traits::value_to_yaml(msg.argument, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgShuttleChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: handle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << "\n";
  }

  // member: argument
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "argument: ";
    rosidl_generator_traits::value_to_yaml(msg.argument, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgShuttleChange & msg, bool use_flow_style = false)
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

}  // namespace shuttles

namespace rosidl_generator_traits
{

[[deprecated("use shuttles::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shuttles::msg::MsgShuttleChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  shuttles::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shuttles::msg::to_yaml() instead")]]
inline std::string to_yaml(const shuttles::msg::MsgShuttleChange & msg)
{
  return shuttles::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shuttles::msg::MsgShuttleChange>()
{
  return "shuttles::msg::MsgShuttleChange";
}

template<>
inline const char * name<shuttles::msg::MsgShuttleChange>()
{
  return "shuttles/msg/MsgShuttleChange";
}

template<>
struct has_fixed_size<shuttles::msg::MsgShuttleChange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shuttles::msg::MsgShuttleChange>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shuttles::msg::MsgShuttleChange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__TRAITS_HPP_
