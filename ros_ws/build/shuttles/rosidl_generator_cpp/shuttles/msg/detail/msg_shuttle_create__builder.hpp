// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_create.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__BUILDER_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shuttles/msg/detail/msg_shuttle_create__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shuttles
{

namespace msg
{

namespace builder
{

class Init_MsgShuttleCreate_zone
{
public:
  explicit Init_MsgShuttleCreate_zone(::shuttles::msg::MsgShuttleCreate & msg)
  : msg_(msg)
  {}
  ::shuttles::msg::MsgShuttleCreate zone(::shuttles::msg::MsgShuttleCreate::_zone_type arg)
  {
    msg_.zone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

class Init_MsgShuttleCreate_handle_platform
{
public:
  explicit Init_MsgShuttleCreate_handle_platform(::shuttles::msg::MsgShuttleCreate & msg)
  : msg_(msg)
  {}
  Init_MsgShuttleCreate_zone handle_platform(::shuttles::msg::MsgShuttleCreate::_handle_platform_type arg)
  {
    msg_.handle_platform = std::move(arg);
    return Init_MsgShuttleCreate_zone(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

class Init_MsgShuttleCreate_handle
{
public:
  explicit Init_MsgShuttleCreate_handle(::shuttles::msg::MsgShuttleCreate & msg)
  : msg_(msg)
  {}
  Init_MsgShuttleCreate_handle_platform handle(::shuttles::msg::MsgShuttleCreate::_handle_type arg)
  {
    msg_.handle = std::move(arg);
    return Init_MsgShuttleCreate_handle_platform(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

class Init_MsgShuttleCreate_product
{
public:
  explicit Init_MsgShuttleCreate_product(::shuttles::msg::MsgShuttleCreate & msg)
  : msg_(msg)
  {}
  Init_MsgShuttleCreate_handle product(::shuttles::msg::MsgShuttleCreate::_product_type arg)
  {
    msg_.product = std::move(arg);
    return Init_MsgShuttleCreate_handle(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

class Init_MsgShuttleCreate_destination
{
public:
  explicit Init_MsgShuttleCreate_destination(::shuttles::msg::MsgShuttleCreate & msg)
  : msg_(msg)
  {}
  Init_MsgShuttleCreate_product destination(::shuttles::msg::MsgShuttleCreate::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_MsgShuttleCreate_product(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

class Init_MsgShuttleCreate_name
{
public:
  Init_MsgShuttleCreate_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgShuttleCreate_destination name(::shuttles::msg::MsgShuttleCreate::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MsgShuttleCreate_destination(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleCreate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::msg::MsgShuttleCreate>()
{
  return shuttles::msg::builder::Init_MsgShuttleCreate_name();
}

}  // namespace shuttles

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__BUILDER_HPP_
