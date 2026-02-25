// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/MsgErreur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_erreur.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/msg_erreur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_MsgErreur_n_poste
{
public:
  explicit Init_MsgErreur_n_poste(::commande_locale::msg::MsgErreur & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::MsgErreur n_poste(::commande_locale::msg::MsgErreur::_n_poste_type arg)
  {
    msg_.n_poste = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::MsgErreur msg_;
};

class Init_MsgErreur_code
{
public:
  Init_MsgErreur_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgErreur_n_poste code(::commande_locale::msg::MsgErreur::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_MsgErreur_n_poste(msg_);
  }

private:
  ::commande_locale::msg::MsgErreur msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::MsgErreur>()
{
  return commande_locale::msg::builder::Init_MsgErreur_code();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_
