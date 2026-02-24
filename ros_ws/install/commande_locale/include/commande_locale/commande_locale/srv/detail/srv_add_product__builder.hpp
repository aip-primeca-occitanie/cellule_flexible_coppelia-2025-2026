// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:srv/SrvAddProduct.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/srv/srv_add_product.hpp"


#ifndef COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__BUILDER_HPP_
#define COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/srv/detail/srv_add_product__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace srv
{

namespace builder
{

class Init_SrvAddProduct_Request_choixproduit
{
public:
  explicit Init_SrvAddProduct_Request_choixproduit(::commande_locale::srv::SrvAddProduct_Request & msg)
  : msg_(msg)
  {}
  ::commande_locale::srv::SrvAddProduct_Request choixproduit(::commande_locale::srv::SrvAddProduct_Request::_choixproduit_type arg)
  {
    msg_.choixproduit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Request msg_;
};

class Init_SrvAddProduct_Request_choixposte
{
public:
  Init_SrvAddProduct_Request_choixposte()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvAddProduct_Request_choixproduit choixposte(::commande_locale::srv::SrvAddProduct_Request::_choixposte_type arg)
  {
    msg_.choixposte = std::move(arg);
    return Init_SrvAddProduct_Request_choixproduit(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::srv::SrvAddProduct_Request>()
{
  return commande_locale::srv::builder::Init_SrvAddProduct_Request_choixposte();
}

}  // namespace commande_locale


namespace commande_locale
{

namespace srv
{

namespace builder
{

class Init_SrvAddProduct_Response_success
{
public:
  Init_SrvAddProduct_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::commande_locale::srv::SrvAddProduct_Response success(::commande_locale::srv::SrvAddProduct_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::srv::SrvAddProduct_Response>()
{
  return commande_locale::srv::builder::Init_SrvAddProduct_Response_success();
}

}  // namespace commande_locale


namespace commande_locale
{

namespace srv
{

namespace builder
{

class Init_SrvAddProduct_Event_response
{
public:
  explicit Init_SrvAddProduct_Event_response(::commande_locale::srv::SrvAddProduct_Event & msg)
  : msg_(msg)
  {}
  ::commande_locale::srv::SrvAddProduct_Event response(::commande_locale::srv::SrvAddProduct_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Event msg_;
};

class Init_SrvAddProduct_Event_request
{
public:
  explicit Init_SrvAddProduct_Event_request(::commande_locale::srv::SrvAddProduct_Event & msg)
  : msg_(msg)
  {}
  Init_SrvAddProduct_Event_response request(::commande_locale::srv::SrvAddProduct_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SrvAddProduct_Event_response(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Event msg_;
};

class Init_SrvAddProduct_Event_info
{
public:
  Init_SrvAddProduct_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrvAddProduct_Event_request info(::commande_locale::srv::SrvAddProduct_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SrvAddProduct_Event_request(msg_);
  }

private:
  ::commande_locale::srv::SrvAddProduct_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::srv::SrvAddProduct_Event>()
{
  return commande_locale::srv::builder::Init_SrvAddProduct_Event_info();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT__BUILDER_HPP_
