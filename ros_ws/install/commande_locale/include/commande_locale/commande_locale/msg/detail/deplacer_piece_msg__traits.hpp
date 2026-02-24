// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/deplacer_piece_msg.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/deplacer_piece_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeplacerPieceMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_robot
  {
    out << "num_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.num_robot, out);
    out << ", ";
  }

  // member: positiona
  {
    out << "positiona: ";
    rosidl_generator_traits::value_to_yaml(msg.positiona, out);
    out << ", ";
  }

  // member: positionb
  {
    out << "positionb: ";
    rosidl_generator_traits::value_to_yaml(msg.positionb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeplacerPieceMsg & msg,
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

  // member: positiona
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positiona: ";
    rosidl_generator_traits::value_to_yaml(msg.positiona, out);
    out << "\n";
  }

  // member: positionb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positionb: ";
    rosidl_generator_traits::value_to_yaml(msg.positionb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeplacerPieceMsg & msg, bool use_flow_style = false)
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
  const commande_locale::msg::DeplacerPieceMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::DeplacerPieceMsg & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::DeplacerPieceMsg>()
{
  return "commande_locale::msg::DeplacerPieceMsg";
}

template<>
inline const char * name<commande_locale::msg::DeplacerPieceMsg>()
{
  return "commande_locale/msg/DeplacerPieceMsg";
}

template<>
struct has_fixed_size<commande_locale::msg::DeplacerPieceMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::msg::DeplacerPieceMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::msg::DeplacerPieceMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__TRAITS_HPP_
