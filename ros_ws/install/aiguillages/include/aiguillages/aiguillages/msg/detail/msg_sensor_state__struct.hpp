// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/msg_sensor_state.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_HPP_
#define AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_HPP_

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
# define DEPRECATED__aiguillages__msg__MsgSensorState __attribute__((deprecated))
#else
# define DEPRECATED__aiguillages__msg__MsgSensorState __declspec(deprecated)
#endif

namespace aiguillages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgSensorState_
{
  using Type = MsgSensorState_<ContainerAllocator>;

  explicit MsgSensorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->cpi.begin(), this->cpi.end(), false);
      std::fill<typename std::array<bool, 11>::iterator, bool>(this->cp.begin(), this->cp.end(), false);
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->ps.begin(), this->ps.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->dg.begin(), this->dg.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->dd.begin(), this->dd.end(), false);
    }
  }

  explicit MsgSensorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cpi(_alloc),
    cp(_alloc),
    ps(_alloc),
    dg(_alloc),
    dd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      std::fill<typename std::array<bool, 9>::iterator, bool>(this->cpi.begin(), this->cpi.end(), false);
      std::fill<typename std::array<bool, 11>::iterator, bool>(this->cp.begin(), this->cp.end(), false);
      std::fill<typename std::array<bool, 25>::iterator, bool>(this->ps.begin(), this->ps.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->dg.begin(), this->dg.end(), false);
      std::fill<typename std::array<bool, 13>::iterator, bool>(this->dd.begin(), this->dd.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    int32_t;
  _id_type id;
  using _cpi_type =
    std::array<bool, 9>;
  _cpi_type cpi;
  using _cp_type =
    std::array<bool, 11>;
  _cp_type cp;
  using _ps_type =
    std::array<bool, 25>;
  _ps_type ps;
  using _dg_type =
    std::array<bool, 13>;
  _dg_type dg;
  using _dd_type =
    std::array<bool, 13>;
  _dd_type dd;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__cpi(
    const std::array<bool, 9> & _arg)
  {
    this->cpi = _arg;
    return *this;
  }
  Type & set__cp(
    const std::array<bool, 11> & _arg)
  {
    this->cp = _arg;
    return *this;
  }
  Type & set__ps(
    const std::array<bool, 25> & _arg)
  {
    this->ps = _arg;
    return *this;
  }
  Type & set__dg(
    const std::array<bool, 13> & _arg)
  {
    this->dg = _arg;
    return *this;
  }
  Type & set__dd(
    const std::array<bool, 13> & _arg)
  {
    this->dd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aiguillages::msg::MsgSensorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aiguillages::msg::MsgSensorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::MsgSensorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aiguillages::msg::MsgSensorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aiguillages__msg__MsgSensorState
    std::shared_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aiguillages__msg__MsgSensorState
    std::shared_ptr<aiguillages::msg::MsgSensorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgSensorState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->cpi != other.cpi) {
      return false;
    }
    if (this->cp != other.cp) {
      return false;
    }
    if (this->ps != other.ps) {
      return false;
    }
    if (this->dg != other.dg) {
      return false;
    }
    if (this->dd != other.dd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgSensorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgSensorState_

// alias to use template instance with default allocator
using MsgSensorState =
  aiguillages::msg::MsgSensorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_HPP_
