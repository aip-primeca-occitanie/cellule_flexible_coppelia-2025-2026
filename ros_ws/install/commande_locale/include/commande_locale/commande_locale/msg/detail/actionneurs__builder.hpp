// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/actionneurs.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/actionneurs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_Actionneurs_actionneurs
{
public:
  Init_Actionneurs_actionneurs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::commande_locale::msg::Actionneurs actionneurs(::commande_locale::msg::Actionneurs::_actionneurs_type arg)
  {
    msg_.actionneurs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::Actionneurs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::Actionneurs>()
{
  return commande_locale::msg::builder::Init_Actionneurs_actionneurs();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_
