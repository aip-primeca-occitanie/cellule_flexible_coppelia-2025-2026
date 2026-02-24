// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/detail/actionneurs__functions.h"
#include "commande_locale/msg/detail/actionneurs__struct.hpp"
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

void Actionneurs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) commande_locale::msg::Actionneurs(_init);
}

void Actionneurs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<commande_locale::msg::Actionneurs *>(message_memory);
  typed_message->~Actionneurs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Actionneurs_message_member_array[1] = {
  {
    "actionneurs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::Actionneurs, actionneurs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Actionneurs_message_members = {
  "commande_locale::msg",  // message namespace
  "Actionneurs",  // message name
  1,  // number of fields
  sizeof(commande_locale::msg::Actionneurs),
  false,  // has_any_key_member_
  Actionneurs_message_member_array,  // message members
  Actionneurs_init_function,  // function to initialize message memory (memory has to be allocated)
  Actionneurs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Actionneurs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Actionneurs_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__Actionneurs__get_type_hash,
  &commande_locale__msg__Actionneurs__get_type_description,
  &commande_locale__msg__Actionneurs__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace commande_locale


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::Actionneurs>()
{
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::Actionneurs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, Actionneurs)() {
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::Actionneurs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
