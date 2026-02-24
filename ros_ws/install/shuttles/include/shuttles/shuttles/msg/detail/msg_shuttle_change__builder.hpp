// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_change.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__BUILDER_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shuttles/msg/detail/msg_shuttle_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shuttles
{

namespace msg
{

namespace builder
{

class Init_MsgShuttleChange_argument
{
public:
  explicit Init_MsgShuttleChange_argument(::shuttles::msg::MsgShuttleChange & msg)
  : msg_(msg)
  {}
  ::shuttles::msg::MsgShuttleChange argument(::shuttles::msg::MsgShuttleChange::_argument_type arg)
  {
    msg_.argument = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleChange msg_;
};

class Init_MsgShuttleChange_handle
{
public:
  Init_MsgShuttleChange_handle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgShuttleChange_argument handle(::shuttles::msg::MsgShuttleChange::_handle_type arg)
  {
    msg_.handle = std::move(arg);
    return Init_MsgShuttleChange_argument(msg_);
  }

private:
  ::shuttles::msg::MsgShuttleChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::msg::MsgShuttleChange>()
{
  return shuttles::msg::builder::Init_MsgShuttleChange_handle();
}

}  // namespace shuttles

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__BUILDER_HPP_
