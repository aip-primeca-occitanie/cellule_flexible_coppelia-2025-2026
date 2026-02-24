// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/capteurs.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_HPP_
#define AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aiguillages__msg__Capteurs __attribute__((deprecated))
#else
# define DEPRECATED__aiguillages__msg__Capteurs __declspec(deprecated)
#endif

namespace aiguillages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Capteurs_
{
  using Type = Capteurs_<ContainerAllocator>;

  explicit Capteurs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capteurs = 0ll;
    }
  }

  explicit Capteurs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capteurs = 0ll;
    }
  }

  // field types and members
  using _capteurs_type =
    int64_t;
  _capteurs_type capteurs;

  // setters for named parameter idiom
  Type & set__capteurs(
    const int64_t & _arg)
  {
    this->capteurs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aiguillages::msg::Capteurs_<ContainerAllocator> *;
  using ConstRawPtr =
    const aiguillages::msg::Capteurs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aiguillages::msg::Capteurs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aiguillages::msg::Capteurs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::Capteurs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::Capteurs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::Capteurs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::Capteurs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aiguillages::msg::Capteurs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aiguillages::msg::Capteurs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aiguillages__msg__Capteurs
    std::shared_ptr<aiguillages::msg::Capteurs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aiguillages__msg__Capteurs
    std::shared_ptr<aiguillages::msg::Capteurs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Capteurs_ & other) const
  {
    if (this->capteurs != other.capteurs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Capteurs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Capteurs_

// alias to use template instance with default allocator
using Capteurs =
  aiguillages::msg::Capteurs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_HPP_
