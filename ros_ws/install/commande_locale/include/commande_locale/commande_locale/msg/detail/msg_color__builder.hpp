// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_color.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgColor_color
{
public:
  explicit Init_MsgColor_color(::commande_locale::msg::MsgColor & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgColor color(::commande_locale::msg::MsgColor::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgColor msg_;
};

class Init_MsgColor_handle
{
public:
  explicit Init_MsgColor_handle(::commande_locale::msg::MsgColor & msg)
  : msg_(msg)
  {}
  Init_MsgColor_color handle(::commande_locale::msg::MsgColor::_handle_type arg)
  {
    msg_.handle = std::move(arg);
    return Init_MsgColor_color(msg_);
  }

private:
  ::commande_locale::msg::MsgColor msg_;
};

class Init_MsgColor_header
{
public:
  Init_MsgColor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgColor_handle header(::commande_locale::msg::MsgColor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MsgColor_handle(msg_);
  }

private:
  ::commande_locale::msg::MsgColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgColor>()
{
  return commande_locale::msg::builder::Init_MsgColor_header();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__BUILDER_HPP_
