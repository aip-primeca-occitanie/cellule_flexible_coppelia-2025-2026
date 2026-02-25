// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgSwitchControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_switch_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__commande_locale__msg__MsgSwitchControl __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgSwitchControl __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgSwitchControl_
{
  using Type = MsgSwitchControl_<ContainerAllocator>;

  explicit MsgSwitchControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->lock.begin(), this->lock.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->rd.begin(), this->rd.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->rg.begin(), this->rg.end(), false);
    }
  }

  explicit MsgSwitchControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lock(_alloc),
    rd(_alloc),
    rg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->lock.begin(), this->lock.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->rd.begin(), this->rd.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->rg.begin(), this->rg.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lock_type =
    std::array<bool, 13>;
  _lock_type lock;
  using _rd_type =
    std::array<bool, 13>;
  _rd_type rd;
  using _rg_type =
    std::array<bool, 13>;
  _rg_type rg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lock(
    const std::array<bool, 13> & _arg)
  {
    this->lock = _arg;
    return *this;
  }
  Type & set__rd(
    const std::array<bool, 13> & _arg)
  {
    this->rd = _arg;
    return *this;
  }
  Type & set__rg(
    const std::array<bool, 13> & _arg)
  {
    this->rg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgSwitchControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgSwitchControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgSwitchControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgSwitchControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgSwitchControl
    std::shared_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgSwitchControl
    std::shared_ptr<commande_locale::msg::MsgSwitchControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgSwitchControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lock != other.lock) {
      return false;
    }
    if (this->rd != other.rd) {
      return false;
    }
    if (this->rg != other.rg) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgSwitchControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgSwitchControl_

// alias to use template instance with default allocator
using MsgSwitchControl =
  commande_locale::msg::MsgSwitchControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_SWITCH_CONTROL__STRUCT_HPP_
