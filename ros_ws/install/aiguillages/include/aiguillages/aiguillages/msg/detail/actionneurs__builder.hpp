// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/actionneurs.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_
#define AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aiguillages/msg/detail/actionneurs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aiguillages
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
  ::aiguillages::msg::Actionneurs actionneurs(::aiguillages::msg::Actionneurs::_actionneurs_type arg)
  {
    msg_.actionneurs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aiguillages::msg::Actionneurs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aiguillages::msg::Actionneurs>()
{
  return aiguillages::msg::builder::Init_Actionneurs_actionneurs();
}

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__BUILDER_HPP_
