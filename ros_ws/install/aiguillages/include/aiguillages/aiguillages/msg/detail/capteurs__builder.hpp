// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/capteurs.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__CAPTEURS__BUILDER_HPP_
#define AIGUILLAGES__MSG__DETAIL__CAPTEURS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aiguillages/msg/detail/capteurs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aiguillages
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
  ::aiguillages::msg::Capteurs capteurs(::aiguillages::msg::Capteurs::_capteurs_type arg)
  {
    msg_.capteurs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aiguillages::msg::Capteurs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aiguillages::msg::Capteurs>()
{
  return aiguillages::msg::builder::Init_Capteurs_capteurs();
}

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__CAPTEURS__BUILDER_HPP_
