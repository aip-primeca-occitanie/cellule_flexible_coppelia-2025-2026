// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/msg_sensor_state.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__BUILDER_HPP_
#define AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aiguillages/msg/detail/msg_sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aiguillages
{

namespace msg
{

namespace builder
{

class Init_MsgSensorState_dd
{
public:
  explicit Init_MsgSensorState_dd(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  ::aiguillages::msg::MsgSensorState dd(::aiguillages::msg::MsgSensorState::_dd_type arg)
  {
    msg_.dd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_dg
{
public:
  explicit Init_MsgSensorState_dg(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  Init_MsgSensorState_dd dg(::aiguillages::msg::MsgSensorState::_dg_type arg)
  {
    msg_.dg = std::move(arg);
    return Init_MsgSensorState_dd(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_ps
{
public:
  explicit Init_MsgSensorState_ps(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  Init_MsgSensorState_dg ps(::aiguillages::msg::MsgSensorState::_ps_type arg)
  {
    msg_.ps = std::move(arg);
    return Init_MsgSensorState_dg(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_cp
{
public:
  explicit Init_MsgSensorState_cp(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  Init_MsgSensorState_ps cp(::aiguillages::msg::MsgSensorState::_cp_type arg)
  {
    msg_.cp = std::move(arg);
    return Init_MsgSensorState_ps(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_cpi
{
public:
  explicit Init_MsgSensorState_cpi(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  Init_MsgSensorState_cp cpi(::aiguillages::msg::MsgSensorState::_cpi_type arg)
  {
    msg_.cpi = std::move(arg);
    return Init_MsgSensorState_cp(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_id
{
public:
  explicit Init_MsgSensorState_id(::aiguillages::msg::MsgSensorState & msg)
  : msg_(msg)
  {}
  Init_MsgSensorState_cpi id(::aiguillages::msg::MsgSensorState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MsgSensorState_cpi(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

class Init_MsgSensorState_header
{
public:
  Init_MsgSensorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgSensorState_id header(::aiguillages::msg::MsgSensorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MsgSensorState_id(msg_);
  }

private:
  ::aiguillages::msg::MsgSensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aiguillages::msg::MsgSensorState>()
{
  return aiguillages::msg::builder::Init_MsgSensorState_header();
}

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__BUILDER_HPP_
