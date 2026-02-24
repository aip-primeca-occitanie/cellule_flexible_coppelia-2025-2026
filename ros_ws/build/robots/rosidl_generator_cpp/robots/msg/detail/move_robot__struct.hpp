// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/move_robot.hpp"


#ifndef ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_HPP_
#define ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robots__msg__MoveRobot __attribute__((deprecated))
#else
# define DEPRECATED__robots__msg__MoveRobot __declspec(deprecated)
#endif

namespace robots
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveRobot_
{
  using Type = MoveRobot_<ContainerAllocator>;

  explicit MoveRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
      this->bras = 0l;
      this->pince = 0l;
      this->num_robot = 0l;
    }
  }

  explicit MoveRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
      this->bras = 0l;
      this->pince = 0l;
      this->num_robot = 0l;
    }
  }

  // field types and members
  using _position_type =
    int32_t;
  _position_type position;
  using _bras_type =
    int32_t;
  _bras_type bras;
  using _pince_type =
    int32_t;
  _pince_type pince;
  using _num_robot_type =
    int32_t;
  _num_robot_type num_robot;

  // setters for named parameter idiom
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__bras(
    const int32_t & _arg)
  {
    this->bras = _arg;
    return *this;
  }
  Type & set__pince(
    const int32_t & _arg)
  {
    this->pince = _arg;
    return *this;
  }
  Type & set__num_robot(
    const int32_t & _arg)
  {
    this->num_robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robots::msg::MoveRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const robots::msg::MoveRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robots::msg::MoveRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robots::msg::MoveRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robots::msg::MoveRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robots::msg::MoveRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robots::msg::MoveRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robots::msg::MoveRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robots::msg::MoveRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robots::msg::MoveRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robots__msg__MoveRobot
    std::shared_ptr<robots::msg::MoveRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robots__msg__MoveRobot
    std::shared_ptr<robots::msg::MoveRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveRobot_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->bras != other.bras) {
      return false;
    }
    if (this->pince != other.pince) {
      return false;
    }
    if (this->num_robot != other.num_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveRobot_

// alias to use template instance with default allocator
using MoveRobot =
  robots::msg::MoveRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robots

#endif  // ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_HPP_
