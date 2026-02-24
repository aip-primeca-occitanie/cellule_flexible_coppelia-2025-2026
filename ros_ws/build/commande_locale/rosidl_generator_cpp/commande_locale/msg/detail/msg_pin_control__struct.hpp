// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_pin_control.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__commande_locale__msg__MsgPinControl __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgPinControl __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgPinControl_
{
  using Type = MsgPinControl_<ContainerAllocator>;

  explicit MsgPinControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->pinon.begin(), this->pinon.end(), false);
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->pinoff.begin(), this->pinoff.end(), false);
    }
  }

  explicit MsgPinControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pinon(_alloc),
    pinoff(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->pinon.begin(), this->pinon.end(), false);
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->pinoff.begin(), this->pinoff.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pinon_type =
    std::array<bool, 9>;
  _pinon_type pinon;
  using _pinoff_type =
    std::array<bool, 9>;
  _pinoff_type pinoff;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pinon(
    const std::array<bool, 9> & _arg)
  {
    this->pinon = _arg;
    return *this;
  }
  Type & set__pinoff(
    const std::array<bool, 9> & _arg)
  {
    this->pinoff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgPinControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgPinControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgPinControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgPinControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgPinControl
    std::shared_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgPinControl
    std::shared_ptr<commande_locale::msg::MsgPinControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgPinControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pinon != other.pinon) {
      return false;
    }
    if (this->pinoff != other.pinoff) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgPinControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgPinControl_

// alias to use template instance with default allocator
using MsgPinControl =
  commande_locale::msg::MsgPinControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_HPP_
