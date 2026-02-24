// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/capteurs.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__CAPTEURS__TRAITS_HPP_
#define AIGUILLAGES__MSG__DETAIL__CAPTEURS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aiguillages/msg/detail/capteurs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aiguillages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Capteurs & msg,
  std::ostream & out)
{
  out << "{";
  // member: capteurs
  {
    out << "capteurs: ";
    rosidl_generator_traits::value_to_yaml(msg.capteurs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Capteurs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capteurs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capteurs: ";
    rosidl_generator_traits::value_to_yaml(msg.capteurs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Capteurs & msg, bool use_flow_style = false)
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

}  // namespace aiguillages

namespace rosidl_generator_traits
{

[[deprecated("use aiguillages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aiguillages::msg::Capteurs & msg,
  std::ostream & out, size_t indentation = 0)
{
  aiguillages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aiguillages::msg::to_yaml() instead")]]
inline std::string to_yaml(const aiguillages::msg::Capteurs & msg)
{
  return aiguillages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aiguillages::msg::Capteurs>()
{
  return "aiguillages::msg::Capteurs";
}

template<>
inline const char * name<aiguillages::msg::Capteurs>()
{
  return "aiguillages/msg/Capteurs";
}

template<>
struct has_fixed_size<aiguillages::msg::Capteurs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aiguillages::msg::Capteurs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aiguillages::msg::Capteurs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIGUILLAGES__MSG__DETAIL__CAPTEURS__TRAITS_HPP_
