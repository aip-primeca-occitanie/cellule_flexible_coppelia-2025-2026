// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_stop_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__commande_locale__msg__MsgStopControl __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgStopControl __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgStopControl_
{
  using Type = MsgStopControl_<ContainerAllocator>;

  explicit MsgStopControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->stop.begin(), this->stop.end(), false);
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->go.begin(), this->go.end(), false);
    }
  }

  explicit MsgStopControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    stop(_alloc),
    go(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->stop.begin(), this->stop.end(), false);
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->go.begin(), this->go.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stop_type =
    std::array<bool, 25>;
  _stop_type stop;
  using _go_type =
    std::array<bool, 25>;
  _go_type go;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stop(
    const std::array<bool, 25> & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__go(
    const std::array<bool, 25> & _arg)
  {
    this->go = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgStopControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgStopControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgStopControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgStopControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgStopControl
    std::shared_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgStopControl
    std::shared_ptr<commande_locale::msg::MsgStopControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgStopControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->go != other.go) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgStopControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgStopControl_

// alias to use template instance with default allocator
using MsgStopControl =
  commande_locale::msg::MsgStopControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_HPP_
