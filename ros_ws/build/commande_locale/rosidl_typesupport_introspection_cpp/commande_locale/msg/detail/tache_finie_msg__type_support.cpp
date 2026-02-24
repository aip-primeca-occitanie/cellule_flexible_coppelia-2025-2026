// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/detail/tache_finie_msg__functions.h"
#include "commande_locale/msg/detail/tache_finie_msg__struct.hpp"
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

void TacheFinieMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) commande_locale::msg::TacheFinieMsg(_init);
}

void TacheFinieMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<commande_locale::msg::TacheFinieMsg *>(message_memory);
  typed_message->~TacheFinieMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TacheFinieMsg_message_member_array[3] = {
  {
    "num_poste",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::TacheFinieMsg, num_poste),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_produit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::TacheFinieMsg, num_produit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::TacheFinieMsg, duree),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TacheFinieMsg_message_members = {
  "commande_locale::msg",  // message namespace
  "TacheFinieMsg",  // message name
  3,  // number of fields
  sizeof(commande_locale::msg::TacheFinieMsg),
  false,  // has_any_key_member_
  TacheFinieMsg_message_member_array,  // message members
  TacheFinieMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TacheFinieMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TacheFinieMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TacheFinieMsg_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__TacheFinieMsg__get_type_hash,
  &commande_locale__msg__TacheFinieMsg__get_type_description,
  &commande_locale__msg__TacheFinieMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace commande_locale


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::TacheFinieMsg>()
{
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::TacheFinieMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, TacheFinieMsg)() {
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::TacheFinieMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
