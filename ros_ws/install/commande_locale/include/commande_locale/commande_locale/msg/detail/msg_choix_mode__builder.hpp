// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgChoixMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_choix_mode.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_choix_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgChoixMode_mode
{
public:
  Init_MsgChoixMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::commande_locale::msg::MsgChoixMode mode(::commande_locale::msg::MsgChoixMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgChoixMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgChoixMode>()
{
  return commande_locale::msg::builder::Init_MsgChoixMode_mode();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__BUILDER_HPP_
