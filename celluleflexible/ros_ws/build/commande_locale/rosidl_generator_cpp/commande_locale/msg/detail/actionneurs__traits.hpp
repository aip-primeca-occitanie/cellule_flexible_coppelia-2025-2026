// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/actionneurs.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/actionneurs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const Actionneurs & msg,
  std::ostream & out)
{
  out << "{";
  // member: actionneurs
  {
    out << "actionneurs: ";
    rosidl_generator_traits::value_to_yaml(msg.actionneurs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Actionneurs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actionneurs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actionneurs: ";
    rosidl_generator_traits::value_to_yaml(msg.actionneurs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Actionneurs & msg, bool use_flow_style = false)
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
  const commande_locale::msg::Actionneurs & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::Actionneurs & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::Actionneurs>()
{
  return "commande_locale::msg::Actionneurs";
}

template<>
inline const char * name<commande_locale::msg::Actionneurs>()
{
  return "commande_locale/msg/Actionneurs";
}

template<>
struct has_fixed_size<commande_locale::msg::Actionneurs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::msg::Actionneurs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::msg::Actionneurs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__TRAITS_HPP_
