// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_stop_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/msg_stop_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgStopControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stop
  {
    if (msg.stop.size() == 0) {
      out << "stop: []";
    } else {
      out << "stop: [";
      size_t pending_items = msg.stop.size();
      for (auto item : msg.stop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: go
  {
    if (msg.go.size() == 0) {
      out << "go: []";
    } else {
      out << "go: [";
      size_t pending_items = msg.go.size();
      for (auto item : msg.go) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgStopControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop.size() == 0) {
      out << "stop: []\n";
    } else {
      out << "stop:\n";
      for (auto item : msg.stop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.go.size() == 0) {
      out << "go: []\n";
    } else {
      out << "go:\n";
      for (auto item : msg.go) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgStopControl & msg, bool use_flow_style = false)
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

}  // namespace commande_locale

namespace rosidl_generator_traits
{

[[deprecated("use commande_locale::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const commande_locale::msg::MsgStopControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::MsgStopControl & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::MsgStopControl>()
{
  return "commande_locale::msg::MsgStopControl";
}

template<>
inline const char * name<commande_locale::msg::MsgStopControl>()
{
  return "commande_locale/msg/MsgStopControl";
}

template<>
struct has_fixed_size<commande_locale::msg::MsgStopControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<commande_locale::msg::MsgStopControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<commande_locale::msg::MsgStopControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__TRAITS_HPP_
