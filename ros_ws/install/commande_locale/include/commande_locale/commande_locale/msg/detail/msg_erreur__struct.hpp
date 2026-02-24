// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/MsgErreur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_erreur.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__commande_locale__msg__MsgErreur __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__MsgErreur __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgErreur_
{
  using Type = MsgErreur_<ContainerAllocator>;

  explicit MsgErreur_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->n_poste = 0l;
    }
  }

  explicit MsgErreur_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->n_poste = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;
  using _n_poste_type =
    int32_t;
  _n_poste_type n_poste;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__n_poste(
    const int32_t & _arg)
  {
    this->n_poste = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::MsgErreur_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::MsgErreur_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgErreur_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::MsgErreur_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__MsgErreur
    std::shared_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__MsgErreur
    std::shared_ptr<commande_locale::msg::MsgErreur_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgErreur_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->n_poste != other.n_poste) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgErreur_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgErreur_

// alias to use template instance with default allocator
using MsgErreur =
  commande_locale::msg::MsgErreur_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_HPP_
