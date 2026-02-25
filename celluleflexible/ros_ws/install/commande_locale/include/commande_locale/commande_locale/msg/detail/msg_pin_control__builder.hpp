// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_pin_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_pin_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgPinControl_pinoff
{
public:
  explicit Init_MsgPinControl_pinoff(::commande_locale::msg::MsgPinControl & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgPinControl pinoff(::commande_locale::msg::MsgPinControl::_pinoff_type arg)
  {
    msg_.pinoff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgPinControl msg_;
};

class Init_MsgPinControl_pinon
{
public:
  explicit Init_MsgPinControl_pinon(::commande_locale::msg::MsgPinControl & msg)
  : msg_(msg)
  {}
  Init_MsgPinControl_pinoff pinon(::commande_locale::msg::MsgPinControl::_pinon_type arg)
  {
    msg_.pinon = std::move(arg);
    return Init_MsgPinControl_pinoff(msg_);
  }

private:
  ::commande_locale::msg::MsgPinControl msg_;
};

class Init_MsgPinControl_header
{
public:
  Init_MsgPinControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgPinControl_pinon header(::commande_locale::msg::MsgPinControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MsgPinControl_pinon(msg_);
  }

private:
  ::commande_locale::msg::MsgPinControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgPinControl>()
{
  return commande_locale::msg::builder::Init_MsgPinControl_header();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__BUILDER_HPP_
