// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/robot_joints.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/robot_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_RobotJoints_num_robot
{
public:
  explicit Init_RobotJoints_num_robot(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::RobotJoints num_robot(::commande_locale::msg::RobotJoints::_num_robot_type arg)
  {
    msg_.num_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint7
{
public:
  explicit Init_RobotJoints_joint7(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_num_robot joint7(::commande_locale::msg::RobotJoints::_joint7_type arg)
  {
    msg_.joint7 = std::move(arg);
    return Init_RobotJoints_num_robot(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint6
{
public:
  explicit Init_RobotJoints_joint6(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_joint7 joint6(::commande_locale::msg::RobotJoints::_joint6_type arg)
  {
    msg_.joint6 = std::move(arg);
    return Init_RobotJoints_joint7(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint5
{
public:
  explicit Init_RobotJoints_joint5(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_joint6 joint5(::commande_locale::msg::RobotJoints::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return Init_RobotJoints_joint6(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint4
{
public:
  explicit Init_RobotJoints_joint4(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_joint5 joint4(::commande_locale::msg::RobotJoints::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_RobotJoints_joint5(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint3
{
public:
  explicit Init_RobotJoints_joint3(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_joint4 joint3(::commande_locale::msg::RobotJoints::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_RobotJoints_joint4(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint2
{
public:
  explicit Init_RobotJoints_joint2(::commande_locale::msg::RobotJoints & msg)
  : msg_(msg)
  {}
  Init_RobotJoints_joint3 joint2(::commande_locale::msg::RobotJoints::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_RobotJoints_joint3(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

class Init_RobotJoints_joint1
{
public:
  Init_RobotJoints_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotJoints_joint2 joint1(::commande_locale::msg::RobotJoints::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_RobotJoints_joint2(msg_);
  }

private:
  ::commande_locale::msg::RobotJoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::RobotJoints>()
{
  return commande_locale::msg::builder::Init_RobotJoints_joint1();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__BUILDER_HPP_
