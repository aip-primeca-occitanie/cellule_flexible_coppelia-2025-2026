// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_change.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shuttles__msg__MsgShuttleChange __attribute__((deprecated))
#else
# define DEPRECATED__shuttles__msg__MsgShuttleChange __declspec(deprecated)
#endif

namespace shuttles
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgShuttleChange_
{
  using Type = MsgShuttleChange_<ContainerAllocator>;

  explicit MsgShuttleChange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
      this->argument = 0l;
    }
  }

  explicit MsgShuttleChange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
      this->argument = 0l;
    }
  }

  // field types and members
  using _handle_type =
    int32_t;
  _handle_type handle;
  using _argument_type =
    int32_t;
  _argument_type argument;

  // setters for named parameter idiom
  Type & set__handle(
    const int32_t & _arg)
  {
    this->handle = _arg;
    return *this;
  }
  Type & set__argument(
    const int32_t & _arg)
  {
    this->argument = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shuttles::msg::MsgShuttleChange_<ContainerAllocator> *;
  using ConstRawPtr =
    const shuttles::msg::MsgShuttleChange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shuttles::msg::MsgShuttleChange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shuttles::msg::MsgShuttleChange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shuttles__msg__MsgShuttleChange
    std::shared_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shuttles__msg__MsgShuttleChange
    std::shared_ptr<shuttles::msg::MsgShuttleChange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgShuttleChange_ & other) const
  {
    if (this->handle != other.handle) {
      return false;
    }
    if (this->argument != other.argument) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgShuttleChange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgShuttleChange_

// alias to use template instance with default allocator
using MsgShuttleChange =
  shuttles::msg::MsgShuttleChange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shuttles

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_HPP_
