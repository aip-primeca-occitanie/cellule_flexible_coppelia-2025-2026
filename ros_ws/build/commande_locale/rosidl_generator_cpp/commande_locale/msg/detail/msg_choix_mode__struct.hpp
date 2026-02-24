// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgChoixMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_choix_mode.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__commande_locale__msg__MsgChoixMode __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgChoixMode __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgChoixMode_
{
  using Type = MsgChoixMode_<ContainerAllocator>;

  explicit MsgChoixMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
    }
  }

  explicit MsgChoixMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgChoixMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgChoixMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgChoixMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgChoixMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgChoixMode
    std::shared_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgChoixMode
    std::shared_ptr<commande_locale::msg::MsgChoixMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgChoixMode_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgChoixMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgChoixMode_

// alias to use template instance with default allocator
using MsgChoixMode =
  commande_locale::msg::MsgChoixMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_HPP_
