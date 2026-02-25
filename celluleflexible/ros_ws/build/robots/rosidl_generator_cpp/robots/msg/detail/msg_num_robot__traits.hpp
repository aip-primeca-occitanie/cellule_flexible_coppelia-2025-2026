// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/msg_num_robot.hpp"


#ifndef ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__TRAITS_HPP_
#define ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robots/msg/detail/msg_num_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robots
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgNumRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_robot
  {
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgNumRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgNumRobot & msg, bool use_flow_style = false)
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

}  // namespace robots

namespace rosidl_generator_traits
{

[[deprecated("use robots::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robots::msg::MsgNumRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  robots::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robots::msg::to_yaml() instead")]]
inline std::string to_yaml(const robots::msg::MsgNumRobot & msg)
{
  return robots::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robots::msg::MsgNumRobot>()
{
  return "robots::msg::MsgNumRobot";
}

template<>
inline const char * name<robots::msg::MsgNumRobot>()
{
  return "robots/msg/MsgNumRobot";
}

template<>
struct has_fixed_size<robots::msg::MsgNumRobot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robots::msg::MsgNumRobot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robots::msg::MsgNumRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__TRAITS_HPP_
