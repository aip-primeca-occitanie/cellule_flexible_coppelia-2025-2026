// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aiguillages/msg/detail/capteurs__functions.h"
#include "aiguillages/msg/detail/capteurs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aiguillages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Capteurs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aiguillages::msg::Capteurs(_init);
}

void Capteurs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aiguillages::msg::Capteurs *>(message_memory);
  typed_message->~Capteurs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Capteurs_message_member_array[1] = {
  {
    "capteurs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::Capteurs, capteurs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Capteurs_message_members = {
  "aiguillages::msg",  // message namespace
  "Capteurs",  // message name
  1,  // number of fields
  sizeof(aiguillages::msg::Capteurs),
  false,  // has_any_key_member_
  Capteurs_message_member_array,  // message members
  Capteurs_init_function,  // function to initialize message memory (memory has to be allocated)
  Capteurs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Capteurs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Capteurs_message_members,
  get_message_typesupport_handle_function,
  &aiguillages__msg__Capteurs__get_type_hash,
  &aiguillages__msg__Capteurs__get_type_description,
  &aiguillages__msg__Capteurs__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aiguillages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aiguillages::msg::Capteurs>()
{
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::Capteurs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aiguillages, msg, Capteurs)() {
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::Capteurs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
