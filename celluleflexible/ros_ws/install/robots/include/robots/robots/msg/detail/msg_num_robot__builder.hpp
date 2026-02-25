// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/msg_num_robot.hpp"


#ifndef ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__BUILDER_HPP_
#define ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robots/msg/detail/msg_num_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robots
{

namespace msg
{

namespace builder
{

class Init_MsgNumRobot_data
{
public:
  explicit Init_MsgNumRobot_data(::robots::msg::MsgNumRobot & msg)
  : msg_(msg)
  {}
  ::robots::msg::MsgNumRobot data(::robots::msg::MsgNumRobot::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robots::msg::MsgNumRobot msg_;
};

class Init_MsgNumRobot_num_robot
{
public:
  Init_MsgNumRobot_num_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgNumRobot_data num_robot(::robots::msg::MsgNumRobot::_num_robot_type arg)
  {
    msg_.num_robot = std::move(arg);
    return Init_MsgNumRobot_data(msg_);
  }

private:
  ::robots::msg::MsgNumRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robots::msg::MsgNumRobot>()
{
  return robots::msg::builder::Init_MsgNumRobot_num_robot();
}

}  // namespace robots

#endif  // ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__BUILDER_HPP_
