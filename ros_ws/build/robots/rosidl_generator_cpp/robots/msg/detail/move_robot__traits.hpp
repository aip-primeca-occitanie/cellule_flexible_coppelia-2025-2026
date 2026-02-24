// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/move_robot.hpp"


#ifndef ROBOTS__MSG__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define ROBOTS__MSG__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robots/msg/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robots
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: bras
  {
    out << "bras: ";
    rosidl_generator_traits::value_to_yaml(msg.bras, out);
    out << ", ";
  }

  // member: pince
  {
    out << "pince: ";
    rosidl_generator_traits::value_to_yaml(msg.pince, out);
    out << ", ";
  }

  // member: num_robot
  {
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: bras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bras: ";
    rosidl_generator_traits::value_to_yaml(msg.bras, out);
    out << "\n";
  }

  // member: pince
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pince: ";
    rosidl_generator_traits::value_to_yaml(msg.pince, out);
    out << "\n";
  }

  // member: num_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot & msg, bool use_flow_style = false)
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
  const robots::msg::MoveRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  robots::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robots::msg::to_yaml() instead")]]
inline std::string to_yaml(const robots::msg::MoveRobot & msg)
{
  return robots::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robots::msg::MoveRobot>()
{
  return "robots::msg::MoveRobot";
}

template<>
inline const char * name<robots::msg::MoveRobot>()
{
  return "robots/msg/MoveRobot";
}

template<>
struct has_fixed_size<robots::msg::MoveRobot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robots::msg::MoveRobot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robots::msg::MoveRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTS__MSG__DETAIL__MOVE_ROBOT__TRAITS_HPP_
