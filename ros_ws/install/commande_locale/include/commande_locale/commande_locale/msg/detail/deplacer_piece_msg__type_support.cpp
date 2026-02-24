// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/detail/deplacer_piece_msg__functions.h"
#include "commande_locale/msg/detail/deplacer_piece_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace commande_locale
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DeplacerPieceMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) commande_locale::msg::DeplacerPieceMsg(_init);
}

void DeplacerPieceMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<commande_locale::msg::DeplacerPieceMsg *>(message_memory);
  typed_message->~DeplacerPieceMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeplacerPieceMsg_message_member_array[3] = {
  {
    "num_robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::DeplacerPieceMsg, num_robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positiona",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::DeplacerPieceMsg, positiona),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positionb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::DeplacerPieceMsg, positionb),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeplacerPieceMsg_message_members = {
  "commande_locale::msg",  // message namespace
  "DeplacerPieceMsg",  // message name
  3,  // number of fields
  sizeof(commande_locale::msg::DeplacerPieceMsg),
  false,  // has_any_key_member_
  DeplacerPieceMsg_message_member_array,  // message members
  DeplacerPieceMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  DeplacerPieceMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeplacerPieceMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeplacerPieceMsg_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__DeplacerPieceMsg__get_type_hash,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace commande_locale


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::DeplacerPieceMsg>()
{
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::DeplacerPieceMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, DeplacerPieceMsg)() {
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::DeplacerPieceMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
