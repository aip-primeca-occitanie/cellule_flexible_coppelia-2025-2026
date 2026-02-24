// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_pin_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/msg_pin_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgPinControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pinon
  {
    if (msg.pinon.size() == 0) {
      out << "pinon: []";
    } else {
      out << "pinon: [";
      size_t pending_items = msg.pinon.size();
      for (auto item : msg.pinon) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pinoff
  {
    if (msg.pinoff.size() == 0) {
      out << "pinoff: []";
    } else {
      out << "pinoff: [";
      size_t pending_items = msg.pinoff.size();
      for (auto item : msg.pinoff) {
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
  const MsgPinControl & msg,
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

  // member: pinon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pinon.size() == 0) {
      out << "pinon: []\n";
    } else {
      out << "pinon:\n";
      for (auto item : msg.pinon) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pinoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pinoff.size() == 0) {
      out << "pinoff: []\n";
    } else {
      out << "pinoff:\n";
      for (auto item : msg.pinoff) {
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

inline std::string to_yaml(const MsgPinControl & msg, bool use_flow_style = false)
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
  const commande_locale::msg::MsgPinControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::MsgPinControl & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::MsgPinControl>()
{
  return "commande_locale::msg::MsgPinControl";
}

template<>
inline const char * name<commande_locale::msg::MsgPinControl>()
{
  return "commande_locale/msg/MsgPinControl";
}

template<>
struct has_fixed_size<commande_locale::msg::MsgPinControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<commande_locale::msg::MsgPinControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<commande_locale::msg::MsgPinControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__TRAITS_HPP_
