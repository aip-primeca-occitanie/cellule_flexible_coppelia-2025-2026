// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/exchange_sh.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_HPP_
#define AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_HPP_

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
# define DEPRECATED__aiguillages__msg__ExchangeSh __attribute__((deprecated))
#else
# define DEPRECATED__aiguillages__msg__ExchangeSh __declspec(deprecated)
#endif

namespace aiguillages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExchangeSh_
{
  using Type = ExchangeSh_<ContainerAllocator>;

  explicit ExchangeSh_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
    }
  }

  explicit ExchangeSh_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _handle_type =
    int32_t;
  _handle_type handle;

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

  // constant declarations

  // pointer types
  using RawPtr =
    aiguillages::msg::ExchangeSh_<ContainerAllocator> *;
  using ConstRawPtr =
    const aiguillages::msg::ExchangeSh_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::ExchangeSh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::ExchangeSh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aiguillages__msg__ExchangeSh
    std::shared_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aiguillages__msg__ExchangeSh
    std::shared_ptr<aiguillages::msg::ExchangeSh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExchangeSh_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->handle != other.handle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExchangeSh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExchangeSh_

// alias to use template instance with default allocator
using ExchangeSh =
  aiguillages::msg::ExchangeSh_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_HPP_
