// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_color.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_HPP_

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
# define DEPRECATED__commande_locale__msg__MsgColor __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgColor __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgColor_
{
  using Type = MsgColor_<ContainerAllocator>;

  explicit MsgColor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
      this->color = 0l;
    }
  }

  explicit MsgColor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
      this->color = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _handle_type =
    int32_t;
  _handle_type handle;
  using _color_type =
    int32_t;
  _color_type color;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__handle(
    const int32_t & _arg)
  {
    this->handle = _arg;
    return *this;
  }
  Type & set__color(
    const int32_t & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgColor_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgColor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgColor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgColor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgColor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgColor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgColor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgColor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgColor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgColor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgColor
    std::shared_ptr<commande_locale::msg::MsgColor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgColor
    std::shared_ptr<commande_locale::msg::MsgColor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgColor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->handle != other.handle) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgColor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgColor_

// alias to use template instance with default allocator
using MsgColor =
  commande_locale::msg::MsgColor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_HPP_
