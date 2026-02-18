// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/actionneurs.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_HPP_
#define AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aiguillages__msg__Actionneurs __attribute__((deprecated))
#else
# define DEPRECATED__aiguillages__msg__Actionneurs __declspec(deprecated)
#endif

namespace aiguillages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actionneurs_
{
  using Type = Actionneurs_<ContainerAllocator>;

  explicit Actionneurs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actionneurs = 0ll;
    }
  }

  explicit Actionneurs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actionneurs = 0ll;
    }
  }

  // field types and members
  using _actionneurs_type =
    int64_t;
  _actionneurs_type actionneurs;

  // setters for named parameter idiom
  Type & set__actionneurs(
    const int64_t & _arg)
  {
    this->actionneurs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aiguillages::msg::Actionneurs_<ContainerAllocator> *;
  using ConstRawPtr =
    const aiguillages::msg::Actionneurs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::Actionneurs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::Actionneurs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aiguillages__msg__Actionneurs
    std::shared_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aiguillages__msg__Actionneurs
    std::shared_ptr<aiguillages::msg::Actionneurs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actionneurs_ & other) const
  {
    if (this->actionneurs != other.actionneurs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Actionneurs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actionneurs_

// alias to use template instance with default allocator
using Actionneurs =
  aiguillages::msg::Actionneurs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_HPP_
