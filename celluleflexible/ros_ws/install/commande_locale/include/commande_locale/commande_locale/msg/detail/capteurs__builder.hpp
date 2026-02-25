// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/capteurs.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/capteurs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_Capteurs_capteurs
{
public:
  Init_Capteurs_capteurs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::commande_locale::msg::Capteurs capteurs(::commande_locale::msg::Capteurs::_capteurs_type arg)
  {
    msg_.capteurs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::Capteurs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::Capteurs>()
{
  return commande_locale::msg::builder::Init_Capteurs_capteurs();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__BUILDER_HPP_
