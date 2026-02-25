// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robots:msg/FaireTacheMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/faire_tache_msg.hpp"


#ifndef ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_HPP_
#define ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robots__msg__FaireTacheMsg __attribute__((deprecated))
#else
# define DEPRECATED__robots__msg__FaireTacheMsg __declspec(deprecated)
#endif

namespace robots
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaireTacheMsg_
{
  using Type = FaireTacheMsg_<ContainerAllocator>;

  explicit FaireTacheMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_robot = 0l;
      this->position = 0l;
      this->duree = 0l;
    }
  }

  explicit FaireTacheMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_robot = 0l;
      this->position = 0l;
      this->duree = 0l;
    }
  }

  // field types and members
  using _num_robot_type =
    int32_t;
  _num_robot_type num_robot;
  using _position_type =
    int32_t;
  _position_type position;
  using _duree_type =
    int32_t;
  _duree_type duree;

  // setters for named parameter idiom
  Type & set__num_robot(
    const int32_t & _arg)
  {
    this->num_robot = _arg;
    return *this;
  }
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__duree(
    const int32_t & _arg)
  {
    this->duree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robots::msg::FaireTacheMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const robots::msg::FaireTacheMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robots::msg::FaireTacheMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robots::msg::FaireTacheMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robots__msg__FaireTacheMsg
    std::shared_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robots__msg__FaireTacheMsg
    std::shared_ptr<robots::msg::FaireTacheMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaireTacheMsg_ & other) const
  {
    if (this->num_robot != other.num_robot) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->duree != other.duree) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaireTacheMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaireTacheMsg_

// alias to use template instance with default allocator
using FaireTacheMsg =
  robots::msg::FaireTacheMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robots

#endif  // ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_HPP_
