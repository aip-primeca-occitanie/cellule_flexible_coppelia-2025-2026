// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/deplacer_piece_msg.hpp"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__BUILDER_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "commande_locale/msg/detail/deplacer_piece_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace commande_locale
{

namespace msg
{

namespace builder
{

class Init_DeplacerPieceMsg_positionb
{
public:
  explicit Init_DeplacerPieceMsg_positionb(::commande_locale::msg::DeplacerPieceMsg & msg)
  : msg_(msg)
  {}
  ::commande_locale::msg::DeplacerPieceMsg positionb(::commande_locale::msg::DeplacerPieceMsg::_positionb_type arg)
  {
    msg_.positionb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::commande_locale::msg::DeplacerPieceMsg msg_;
};

class Init_DeplacerPieceMsg_positiona
{
public:
  explicit Init_DeplacerPieceMsg_positiona(::commande_locale::msg::DeplacerPieceMsg & msg)
  : msg_(msg)
  {}
  Init_DeplacerPieceMsg_positionb positiona(::commande_locale::msg::DeplacerPieceMsg::_positiona_type arg)
  {
    msg_.positiona = std::move(arg);
    return Init_DeplacerPieceMsg_positionb(msg_);
  }

private:
  ::commande_locale::msg::DeplacerPieceMsg msg_;
};

class Init_DeplacerPieceMsg_num_robot
{
public:
  Init_DeplacerPieceMsg_num_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeplacerPieceMsg_positiona num_robot(::commande_locale::msg::DeplacerPieceMsg::_num_robot_type arg)
  {
    msg_.num_robot = std::move(arg);
    return Init_DeplacerPieceMsg_positiona(msg_);
  }

private:
  ::commande_locale::msg::DeplacerPieceMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::commande_locale::msg::DeplacerPieceMsg>()
{
  return commande_locale::msg::builder::Init_DeplacerPieceMsg_num_robot();
}

}  // namespace commande_locale

#endif  // COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__BUILDER_HPP_
