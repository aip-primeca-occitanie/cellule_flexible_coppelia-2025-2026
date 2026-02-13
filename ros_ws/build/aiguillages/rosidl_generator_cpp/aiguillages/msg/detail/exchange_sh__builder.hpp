// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/exchange_sh.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__BUILDER_HPP_
#define AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aiguillages/msg/detail/exchange_sh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aiguillages
{

namespace msg
{

namespace builder
{

class Init_ExchangeSh_handle
{
public:
  explicit Init_ExchangeSh_handle(::aiguillages::msg::ExchangeSh & msg)
  : msg_(msg)
  {}
  ::aiguillages::msg::ExchangeSh handle(::aiguillages::msg::ExchangeSh::_handle_type arg)
  {
    msg_.handle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aiguillages::msg::ExchangeSh msg_;
};

class Init_ExchangeSh_header
{
public:
  Init_ExchangeSh_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExchangeSh_handle header(::aiguillages::msg::ExchangeSh::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExchangeSh_handle(msg_);
  }

private:
  ::aiguillages::msg::ExchangeSh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aiguillages::msg::ExchangeSh>()
{
  return aiguillages::msg::builder::Init_ExchangeSh_header();
}

}  // namespace aiguillages

#endif  // AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__BUILDER_HPP_
