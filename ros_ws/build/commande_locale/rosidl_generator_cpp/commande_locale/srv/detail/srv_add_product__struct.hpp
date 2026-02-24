// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from commande_locale:srv/SrvAddProduct.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/srv/srv_add_product.hpp"


#ifndef COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__STRUCT_HPP_
#define COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Request __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Request __declspec(deprecated)
#endif

namespace commande_locale
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvAddProduct_Request_
{
  using Type = SrvAddProduct_Request_<ContainerAllocator>;

  explicit SrvAddProduct_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choixposte = 0l;
      this->choixproduit = 0l;
    }
  }

  explicit SrvAddProduct_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choixposte = 0l;
      this->choixproduit = 0l;
    }
  }

  // field types and members
  using _choixposte_type =
    int32_t;
  _choixposte_type choixposte;
  using _choixproduit_type =
    int32_t;
  _choixproduit_type choixproduit;

  // setters for named parameter idiom
  Type & set__choixposte(
    const int32_t & _arg)
  {
    this->choixposte = _arg;
    return *this;
  }
  Type & set__choixproduit(
    const int32_t & _arg)
  {
    this->choixproduit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Request
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Request
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvAddProduct_Request_ & other) const
  {
    if (this->choixposte != other.choixposte) {
      return false;
    }
    if (this->choixproduit != other.choixproduit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvAddProduct_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvAddProduct_Request_

// alias to use template instance with default allocator
using SrvAddProduct_Request =
  commande_locale::srv::SrvAddProduct_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace commande_locale


#ifndef _WIN32
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Response __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Response __declspec(deprecated)
#endif

namespace commande_locale
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvAddProduct_Response_
{
  using Type = SrvAddProduct_Response_<ContainerAllocator>;

  explicit SrvAddProduct_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SrvAddProduct_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Response
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Response
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvAddProduct_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvAddProduct_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvAddProduct_Response_

// alias to use template instance with default allocator
using SrvAddProduct_Response =
  commande_locale::srv::SrvAddProduct_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace commande_locale


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Event __attribute__((deprecated))
#else
# define DEPRECATED__commande_locale__srv__SrvAddProduct_Event __declspec(deprecated)
#endif

namespace commande_locale
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SrvAddProduct_Event_
{
  using Type = SrvAddProduct_Event_<ContainerAllocator>;

  explicit SrvAddProduct_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SrvAddProduct_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<commande_locale::srv::SrvAddProduct_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<commande_locale::srv::SrvAddProduct_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Event
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__commande_locale__srv__SrvAddProduct_Event
    std::shared_ptr<commande_locale::srv::SrvAddProduct_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrvAddProduct_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrvAddProduct_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrvAddProduct_Event_

// alias to use template instance with default allocator
using SrvAddProduct_Event =
  commande_locale::srv::SrvAddProduct_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace commande_locale

namespace commande_locale
{

namespace srv
{

struct SrvAddProduct
{
  using Request = commande_locale::srv::SrvAddProduct_Request;
  using Response = commande_locale::srv::SrvAddProduct_Response;
  using Event = commande_locale::srv::SrvAddProduct_Event;
};

}  // namespace srv

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__STRUCT_HPP_
