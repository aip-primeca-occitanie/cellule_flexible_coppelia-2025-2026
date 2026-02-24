// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_create.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__TRAITS_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shuttles/msg/detail/msg_shuttle_create__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shuttles
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgShuttleCreate & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << ", ";
  }

  // member: product
  {
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
    out << ", ";
  }

  // member: handle
  {
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << ", ";
  }

  // member: handle_platform
  {
    out << "handle_platform: ";
    rosidl_generator_traits::value_to_yaml(msg.handle_platform, out);
    out << ", ";
  }

  // member: zone
  {
    out << "zone: ";
    rosidl_generator_traits::value_to_yaml(msg.zone, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgShuttleCreate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << "\n";
  }

  // member: product
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product: ";
    rosidl_generator_traits::value_to_yaml(msg.product, out);
    out << "\n";
  }

  // member: handle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << "\n";
  }

  // member: handle_platform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle_platform: ";
    rosidl_generator_traits::value_to_yaml(msg.handle_platform, out);
    out << "\n";
  }

  // member: zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zone: ";
    rosidl_generator_traits::value_to_yaml(msg.zone, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgShuttleCreate & msg, bool use_flow_style = false)
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
  const shuttles::msg::MsgShuttleCreate & msg,
  std::ostream & out, size_t indentation = 0)
{
  shuttles::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shuttles::msg::to_yaml() instead")]]
inline std::string to_yaml(const shuttles::msg::MsgShuttleCreate & msg)
{
  return shuttles::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shuttles::msg::MsgShuttleCreate>()
{
  return "shuttles::msg::MsgShuttleCreate";
}

template<>
inline const char * name<shuttles::msg::MsgShuttleCreate>()
{
  return "shuttles/msg/MsgShuttleCreate";
}

template<>
struct has_fixed_size<shuttles::msg::MsgShuttleCreate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shuttles::msg::MsgShuttleCreate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shuttles::msg::MsgShuttleCreate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__TRAITS_HPP_
