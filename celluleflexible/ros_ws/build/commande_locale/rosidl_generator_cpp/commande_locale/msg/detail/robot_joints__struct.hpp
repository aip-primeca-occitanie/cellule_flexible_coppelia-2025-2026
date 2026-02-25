// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/robot_joints.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__commande_locale__msg__RobotJoints __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__RobotJoints __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotJoints_
{
  using Type = RobotJoints_<ContainerAllocator>;

  explicit RobotJoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0l;
      this->joint2 = 0l;
      this->joint3 = 0l;
      this->joint4 = 0l;
      this->joint5 = 0l;
      this->joint6 = 0l;
      this->joint7 = 0l;
      this->num_robot = 0l;
    }
  }

  explicit RobotJoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1 = 0l;
      this->joint2 = 0l;
      this->joint3 = 0l;
      this->joint4 = 0l;
      this->joint5 = 0l;
      this->joint6 = 0l;
      this->joint7 = 0l;
      this->num_robot = 0l;
    }
  }

  // field types and members
  using _joint1_type =
    int32_t;
  _joint1_type joint1;
  using _joint2_type =
    int32_t;
  _joint2_type joint2;
  using _joint3_type =
    int32_t;
  _joint3_type joint3;
  using _joint4_type =
    int32_t;
  _joint4_type joint4;
  using _joint5_type =
    int32_t;
  _joint5_type joint5;
  using _joint6_type =
    int32_t;
  _joint6_type joint6;
  using _joint7_type =
    int32_t;
  _joint7_type joint7;
  using _num_robot_type =
    int32_t;
  _num_robot_type num_robot;

  // setters for named parameter idiom
  Type & set__joint1(
    const int32_t & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const int32_t & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const int32_t & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint4(
    const int32_t & _arg)
  {
    this->joint4 = _arg;
    return *this;
  }
  Type & set__joint5(
    const int32_t & _arg)
  {
    this->joint5 = _arg;
    return *this;
  }
  Type & set__joint6(
    const int32_t & _arg)
  {
    this->joint6 = _arg;
    return *this;
  }
  Type & set__joint7(
    const int32_t & _arg)
  {
    this->joint7 = _arg;
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
    commande_locale::msg::RobotJoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::RobotJoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::RobotJoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::RobotJoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__RobotJoints
    std::shared_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__RobotJoints
    std::shared_ptr<commande_locale::msg::RobotJoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotJoints_ & other) const
  {
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint4 != other.joint4) {
      return false;
    }
    if (this->joint5 != other.joint5) {
      return false;
    }
    if (this->joint6 != other.joint6) {
      return false;
    }
    if (this->joint7 != other.joint7) {
      return false;
    }
    if (this->num_robot != other.num_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotJoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotJoints_

// alias to use template instance with default allocator
using RobotJoints =
  commande_locale::msg::RobotJoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_HPP_
