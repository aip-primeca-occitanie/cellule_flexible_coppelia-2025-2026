// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_erreur.hpp"


#ifndef SHUTTLES__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shuttles/msg/detail/msg_erreur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shuttles
{

namespace msg
{

namespace builder
{

class Init_MsgErreur_n_poste
{
public:
  explicit Init_MsgErreur_n_poste(::shuttles::msg::MsgErreur & msg)
  : msg_(msg)
  {}
  ::shuttles::msg::MsgErreur n_poste(::shuttles::msg::MsgErreur::_n_poste_type arg)
  {
    msg_.n_poste = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::msg::MsgErreur msg_;
};

class Init_MsgErreur_code
{
public:
  Init_MsgErreur_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgErreur_n_poste code(::shuttles::msg::MsgErreur::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_MsgErreur_n_poste(msg_);
  }

private:
  ::shuttles::msg::MsgErreur msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::msg::MsgErreur>()
{
  return shuttles::msg::builder::Init_MsgErreur_code();
}

}  // namespace shuttles

#endif  // SHUTTLES__MSG__DETAIL__MSG_ERREUR__BUILDER_HPP_
