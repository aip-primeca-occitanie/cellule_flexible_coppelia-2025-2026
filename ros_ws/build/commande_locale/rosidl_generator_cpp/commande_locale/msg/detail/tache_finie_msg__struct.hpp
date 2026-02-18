// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/tache_finie_msg.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__commande_locale__msg__TacheFinieMsg __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__msg__TacheFinieMsg __declspec(deprecated)
#endif

namespace commande_locale
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TacheFinieMsg_
{
  using Type = TacheFinieMsg_<ContainerAllocator>;

  explicit TacheFinieMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_poste = 0l;
      this->num_produit = 0l;
      this->duree = 0l;
    }
  }

  explicit TacheFinieMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_poste = 0l;
      this->num_produit = 0l;
      this->duree = 0l;
    }
  }

  // field types and members
  using _num_poste_type =
    int32_t;
  _num_poste_type num_poste;
  using _num_produit_type =
    int32_t;
  _num_produit_type num_produit;
  using _duree_type =
    int32_t;
  _duree_type duree;

  // setters for named parameter idiom
  Type & set__num_poste(
    const int32_t & _arg)
  {
    this->num_poste = _arg;
    return *this;
  }
  Type & set__num_produit(
    const int32_t & _arg)
  {
    this->num_produit = _arg;
    return *this;
  }
  Type & set__duree(
    const int32_t & _arg)
  {
    this->duree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::msg::TacheFinieMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::msg::TacheFinieMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::TacheFinieMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::msg::TacheFinieMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__msg__TacheFinieMsg
    std::shared_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__msg__TacheFinieMsg
    std::shared_ptr<commande_locale::msg::TacheFinieMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TacheFinieMsg_ & other) const
  {
    if (this->num_poste != other.num_poste) {
      return false;
    }
    if (this->num_produit != other.num_produit) {
      return false;
    }
    if (this->duree != other.duree) {
      return false;
    }
    return true;
  }
  bool operator!=(const TacheFinieMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TacheFinieMsg_

// alias to use template instance with default allocator
using TacheFinieMsg =
  commande_locale::msg::TacheFinieMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_HPP_
