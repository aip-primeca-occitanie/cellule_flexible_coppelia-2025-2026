// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/tache_finie_msg.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__TRAITS_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/msg/detail/tache_finie_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace commande_locale
{

namespace msg
{

inline void to_flow_style_yaml(
  const TacheFinieMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_poste
  {
    out << "num_poste: ";
    rosidl_generator_traits::value_to_yaml(msg.num_poste, out);
    out << ", ";
  }

  // member: num_produit
  {
    out << "num_produit: ";
    rosidl_generator_traits::value_to_yaml(msg.num_produit, out);
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
  const TacheFinieMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_poste
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_poste: ";
    rosidl_generator_traits::value_to_yaml(msg.num_poste, out);
    out << "\n";
  }

  // member: num_produit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_produit: ";
    rosidl_generator_traits::value_to_yaml(msg.num_produit, out);
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

inline std::string to_yaml(const TacheFinieMsg & msg, bool use_flow_style = false)
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
  const commande_locale::msg::TacheFinieMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::msg::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::msg::TacheFinieMsg & msg)
{
  return commande_locale::msg::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::msg::TacheFinieMsg>()
{
  return "commande_locale::msg::TacheFinieMsg";
}

template<>
inline const char * name<commande_locale::msg::TacheFinieMsg>()
{
  return "commande_locale/msg/TacheFinieMsg";
}

template<>
struct has_fixed_size<commande_locale::msg::TacheFinieMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::msg::TacheFinieMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::msg::TacheFinieMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__TRAITS_HPP_
