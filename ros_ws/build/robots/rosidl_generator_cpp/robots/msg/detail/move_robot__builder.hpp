// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/move_robot.hpp"


#ifndef ROBOTS__MSG__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define ROBOTS__MSG__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robots/msg/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robots
{

namespace msg
{

namespace builder
{

class Init_MoveRobot_num_robot
{
public:
  explicit Init_MoveRobot_num_robot(::robots::msg::MoveRobot & msg)
  : msg_(msg)
  {}
  ::robots::msg::MoveRobot num_robot(::robots::msg::MoveRobot::_num_robot_type arg)
  {
    msg_.num_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robots::msg::MoveRobot msg_;
};

class Init_MoveRobot_pince
{
public:
  explicit Init_MoveRobot_pince(::robots::msg::MoveRobot & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_num_robot pince(::robots::msg::MoveRobot::_pince_type arg)
  {
    msg_.pince = std::move(arg);
    return Init_MoveRobot_num_robot(msg_);
  }

private:
  ::robots::msg::MoveRobot msg_;
};

class Init_MoveRobot_bras
{
public:
  explicit Init_MoveRobot_bras(::robots::msg::MoveRobot & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_pince bras(::robots::msg::MoveRobot::_bras_type arg)
  {
    msg_.bras = std::move(arg);
    return Init_MoveRobot_pince(msg_);
  }

private:
  ::robots::msg::MoveRobot msg_;
};

class Init_MoveRobot_position
{
public:
  Init_MoveRobot_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_bras position(::robots::msg::MoveRobot::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MoveRobot_bras(msg_);
  }

private:
  ::robots::msg::MoveRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robots::msg::MoveRobot>()
{
  return robots::msg::builder::Init_MoveRobot_position();
}

}  // namespace robots

#endif  // ROBOTS__MSG__DETAIL__MOVE_ROBOT__BUILDER_HPP_
