// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/MsgChoixMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_choix_mode.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/msg_choix_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgChoixMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgChoixMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgChoixMode & msg, bool use_flow_style = false)
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
  const commande_locale::msg::MsgChoixMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::MsgChoixMode & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::MsgChoixMode>()
{
  return "commande_locale::msg::MsgChoixMode";
}

template<>
inline const char * name<commande_locale::msg::MsgChoixMode>()
{
  return "commande_locale/msg/MsgChoixMode";
}

template<>
struct has_fixed_size<commande_locale::msg::MsgChoixMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::msg::MsgChoixMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::msg::MsgChoixMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__TRAITS_HPP_
