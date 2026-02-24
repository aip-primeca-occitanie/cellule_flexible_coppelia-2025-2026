// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/tache_finie_msg.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/tache_finie_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_TacheFinieMsg_duree
{
public:
  explicit Init_TacheFinieMsg_duree(::commande_locale::msg::TacheFinieMsg & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::TacheFinieMsg duree(::commande_locale::msg::TacheFinieMsg::_duree_type arg)
  {
    msg_.duree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::TacheFinieMsg msg_;
};

class Init_TacheFinieMsg_num_produit
{
public:
  explicit Init_TacheFinieMsg_num_produit(::commande_locale::msg::TacheFinieMsg & msg)
  : msg_(msg)
  {}
  Init_TacheFinieMsg_duree num_produit(::commande_locale::msg::TacheFinieMsg::_num_produit_type arg)
  {
    msg_.num_produit = std::move(arg);
    return Init_TacheFinieMsg_duree(msg_);
  }

private:
  ::commande_locale::msg::TacheFinieMsg msg_;
};

class Init_TacheFinieMsg_num_poste
{
public:
  Init_TacheFinieMsg_num_poste()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TacheFinieMsg_num_produit num_poste(::commande_locale::msg::TacheFinieMsg::_num_poste_type arg)
  {
    msg_.num_poste = std::move(arg);
    return Init_TacheFinieMsg_num_produit(msg_);
  }

private:
  ::commande_locale::msg::TacheFinieMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::TacheFinieMsg>()
{
  return commande_locale::msg::builder::Init_TacheFinieMsg_num_poste();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__BUILDER_HPP_
