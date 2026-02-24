// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robots:msg/FaireTacheMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/faire_tache_msg.hpp"


#ifndef ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__BUILDER_HPP_
#define ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robots/msg/detail/faire_tache_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robots
{

namespace msg
{

namespace builder
{

class Init_FaireTacheMsg_duree
{
public:
  explicit Init_FaireTacheMsg_duree(::robots::msg::FaireTacheMsg & msg)
  : msg_(msg)
  {}
  ::robots::msg::FaireTacheMsg duree(::robots::msg::FaireTacheMsg::_duree_type arg)
  {
    msg_.duree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robots::msg::FaireTacheMsg msg_;
};

class Init_FaireTacheMsg_position
{
public:
  explicit Init_FaireTacheMsg_position(::robots::msg::FaireTacheMsg & msg)
  : msg_(msg)
  {}
  Init_FaireTacheMsg_duree position(::robots::msg::FaireTacheMsg::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FaireTacheMsg_duree(msg_);
  }

private:
  ::robots::msg::FaireTacheMsg msg_;
};

class Init_FaireTacheMsg_num_robot
{
public:
  Init_FaireTacheMsg_num_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaireTacheMsg_position num_robot(::robots::msg::FaireTacheMsg::_num_robot_type arg)
  {
    msg_.num_robot = std::move(arg);
    return Init_FaireTacheMsg_position(msg_);
  }

private:
  ::robots::msg::FaireTacheMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robots::msg::FaireTacheMsg>()
{
  return robots::msg::builder::Init_FaireTacheMsg_num_robot();
}

}  // namespace robots

#endif  // ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__BUILDER_HPP_
