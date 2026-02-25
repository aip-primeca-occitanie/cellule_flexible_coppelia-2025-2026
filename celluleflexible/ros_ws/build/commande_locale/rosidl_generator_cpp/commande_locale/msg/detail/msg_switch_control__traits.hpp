// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/MsgSwitchControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_switch_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/msg_switch_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgSwitchControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lock
  {
    if (msg.lock.size() == 0) {
      out << "lock: []";
    } else {
      out << "lock: [";
      size_t pending_items = msg.lock.size();
      for (auto item : msg.lock) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rd
  {
    if (msg.rd.size() == 0) {
      out << "rd: []";
    } else {
      out << "rd: [";
      size_t pending_items = msg.rd.size();
      for (auto item : msg.rd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg
  {
    if (msg.rg.size() == 0) {
      out << "rg: []";
    } else {
      out << "rg: [";
      size_t pending_items = msg.rg.size();
      for (auto item : msg.rg) {
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
  const MsgSwitchControl & msg,
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

  // member: lock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lock.size() == 0) {
      out << "lock: []\n";
    } else {
      out << "lock:\n";
      for (auto item : msg.lock) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rd.size() == 0) {
      out << "rd: []\n";
    } else {
      out << "rd:\n";
      for (auto item : msg.rd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg.size() == 0) {
      out << "rg: []\n";
    } else {
      out << "rg:\n";
      for (auto item : msg.rg) {
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

inline std::string to_yaml(const MsgSwitchControl & msg, bool use_flow_style = false)
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
  const commande_locale::msg::MsgSwitchControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::MsgSwitchControl & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::MsgSwitchControl>()
{
  return "commande_locale::msg::MsgSwitchControl";
}

template<>
inline const char * name<commande_locale::msg::MsgSwitchControl>()
{
  return "commande_locale/msg/MsgSwitchControl";
}

template<>
struct has_fixed_size<commande_locale::msg::MsgSwitchControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<commande_locale::msg::MsgSwitchControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<commande_locale::msg::MsgSwitchControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__TRAITS_HPP_
