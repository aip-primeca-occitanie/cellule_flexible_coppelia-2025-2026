// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgAddProduct.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_add_product.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_add_product__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgAddProduct_num_produit
{
public:
  explicit Init_MsgAddProduct_num_produit(::commande_locale::msg::MsgAddProduct & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgAddProduct num_produit(::commande_locale::msg::MsgAddProduct::_num_produit_type arg)
  {
    msg_.num_produit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgAddProduct msg_;
};

class Init_MsgAddProduct_num_poste
{
public:
  Init_MsgAddProduct_num_poste()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgAddProduct_num_produit num_poste(::commande_locale::msg::MsgAddProduct::_num_poste_type arg)
  {
    msg_.num_poste = std::move(arg);
    return Init_MsgAddProduct_num_produit(msg_);
  }

private:
  ::commande_locale::msg::MsgAddProduct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgAddProduct>()
{
  return commande_locale::msg::builder::Init_MsgAddProduct_num_poste();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__BUILDER_HPP_
