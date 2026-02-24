// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robots:msg/FaireTacheMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/faire_tache_msg.hpp"


#ifndef ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__TRAITS_HPP_
#define ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robots/msg/detail/faire_tache_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robots
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaireTacheMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_robot
  {
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: duree
  {
    out << "duree: ";
    rosidl_generator_traits::value_to_yaml(msg.duree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaireTacheMsg & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: duree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duree: ";
    rosidl_generator_traits::value_to_yaml(msg.duree, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaireTacheMsg & msg, bool use_flow_style = false)
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
  const robots::msg::FaireTacheMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  robots::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robots::msg::to_yaml() instead")]]
inline std::string to_yaml(const robots::msg::FaireTacheMsg & msg)
{
  return robots::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robots::msg::FaireTacheMsg>()
{
  return "robots::msg::FaireTacheMsg";
}

template<>
inline const char * name<robots::msg::FaireTacheMsg>()
{
  return "robots/msg/FaireTacheMsg";
}

template<>
struct has_fixed_size<robots::msg::FaireTacheMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robots::msg::FaireTacheMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robots::msg::FaireTacheMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__TRAITS_HPP_
