// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgSwitchControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_switch_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_switch_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgSwitchControl_rg
{
public:
  explicit Init_MsgSwitchControl_rg(::commande_locale::msg::MsgSwitchControl & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgSwitchControl rg(::commande_locale::msg::MsgSwitchControl::_rg_type arg)
  {
    msg_.rg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgSwitchControl msg_;
};

class Init_MsgSwitchControl_rd
{
public:
  explicit Init_MsgSwitchControl_rd(::commande_locale::msg::MsgSwitchControl & msg)
  : msg_(msg)
  {}
  Init_MsgSwitchControl_rg rd(::commande_locale::msg::MsgSwitchControl::_rd_type arg)
  {
    msg_.rd = std::move(arg);
    return Init_MsgSwitchControl_rg(msg_);
  }

private:
  ::commande_locale::msg::MsgSwitchControl msg_;
};

class Init_MsgSwitchControl_lock
{
public:
  explicit Init_MsgSwitchControl_lock(::commande_locale::msg::MsgSwitchControl & msg)
  : msg_(msg)
  {}
  Init_MsgSwitchControl_rd lock(::commande_locale::msg::MsgSwitchControl::_lock_type arg)
  {
    msg_.lock = std::move(arg);
    return Init_MsgSwitchControl_rd(msg_);
  }

private:
  ::commande_locale::msg::MsgSwitchControl msg_;
};

class Init_MsgSwitchControl_header
{
public:
  Init_MsgSwitchControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgSwitchControl_lock header(::commande_locale::msg::MsgSwitchControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MsgSwitchControl_lock(msg_);
  }

private:
  ::commande_locale::msg::MsgSwitchControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgSwitchControl>()
{
  return commande_locale::msg::builder::Init_MsgSwitchControl_header();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__BUILDER_HPP_
