// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aiguillages/msg/detail/exchange_sh__functions.h"
#include "aiguillages/msg/detail/exchange_sh__struct.hpp"
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

void ExchangeSh_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aiguillages::msg::ExchangeSh(_init);
}

void ExchangeSh_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aiguillages::msg::ExchangeSh *>(message_memory);
  typed_message->~ExchangeSh();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExchangeSh_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::ExchangeSh, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "handle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::ExchangeSh, handle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExchangeSh_message_members = {
  "aiguillages::msg",  // message namespace
  "ExchangeSh",  // message name
  2,  // number of fields
  sizeof(aiguillages::msg::ExchangeSh),
  false,  // has_any_key_member_
  ExchangeSh_message_member_array,  // message members
  ExchangeSh_init_function,  // function to initialize message memory (memory has to be allocated)
  ExchangeSh_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExchangeSh_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExchangeSh_message_members,
  get_message_typesupport_handle_function,
  &aiguillages__msg__ExchangeSh__get_type_hash,
  &aiguillages__msg__ExchangeSh__get_type_description,
  &aiguillages__msg__ExchangeSh__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aiguillages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aiguillages::msg::ExchangeSh>()
{
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::ExchangeSh_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aiguillages, msg, ExchangeSh)() {
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::ExchangeSh_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
