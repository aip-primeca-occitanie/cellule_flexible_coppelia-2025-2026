// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_stop_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_stop_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgStopControl_go
{
public:
  explicit Init_MsgStopControl_go(::commande_locale::msg::MsgStopControl & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgStopControl go(::commande_locale::msg::MsgStopControl::_go_type arg)
  {
    msg_.go = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgStopControl msg_;
};

class Init_MsgStopControl_stop
{
public:
  explicit Init_MsgStopControl_stop(::commande_locale::msg::MsgStopControl & msg)
  : msg_(msg)
  {}
  Init_MsgStopControl_go stop(::commande_locale::msg::MsgStopControl::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_MsgStopControl_go(msg_);
  }

private:
  ::commande_locale::msg::MsgStopControl msg_;
};

class Init_MsgStopControl_header
{
public:
  Init_MsgStopControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgStopControl_stop header(::commande_locale::msg::MsgStopControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MsgStopControl_stop(msg_);
  }

private:
  ::commande_locale::msg::MsgStopControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgStopControl>()
{
  return commande_locale::msg::builder::Init_MsgStopControl_header();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__BUILDER_HPP_
