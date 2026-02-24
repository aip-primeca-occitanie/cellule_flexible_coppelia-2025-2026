// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/MsgSwitchControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/detail/msg_switch_control__functions.h"
#include "commande_locale/msg/detail/msg_switch_control__struct.hpp"
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

void MsgSwitchControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) commande_locale::msg::MsgSwitchControl(_init);
}

void MsgSwitchControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<commande_locale::msg::MsgSwitchControl *>(message_memory);
  typed_message->~MsgSwitchControl();
}

size_t size_function__MsgSwitchControl__lock(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__MsgSwitchControl__lock(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSwitchControl__lock(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSwitchControl__lock(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSwitchControl__lock(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSwitchControl__lock(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSwitchControl__lock(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSwitchControl__rd(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__MsgSwitchControl__rd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSwitchControl__rd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSwitchControl__rd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSwitchControl__rd(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSwitchControl__rd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSwitchControl__rd(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSwitchControl__rg(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__MsgSwitchControl__rg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSwitchControl__rg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSwitchControl__rg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSwitchControl__rg(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSwitchControl__rg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSwitchControl__rg(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgSwitchControl_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgSwitchControl, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lock",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgSwitchControl, lock),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSwitchControl__lock,  // size() function pointer
    get_const_function__MsgSwitchControl__lock,  // get_const(index) function pointer
    get_function__MsgSwitchControl__lock,  // get(index) function pointer
    fetch_function__MsgSwitchControl__lock,  // fetch(index, &value) function pointer
    assign_function__MsgSwitchControl__lock,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgSwitchControl, rd),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSwitchControl__rd,  // size() function pointer
    get_const_function__MsgSwitchControl__rd,  // get_const(index) function pointer
    get_function__MsgSwitchControl__rd,  // get(index) function pointer
    fetch_function__MsgSwitchControl__rd,  // fetch(index, &value) function pointer
    assign_function__MsgSwitchControl__rd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgSwitchControl, rg),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSwitchControl__rg,  // size() function pointer
    get_const_function__MsgSwitchControl__rg,  // get_const(index) function pointer
    get_function__MsgSwitchControl__rg,  // get(index) function pointer
    fetch_function__MsgSwitchControl__rg,  // fetch(index, &value) function pointer
    assign_function__MsgSwitchControl__rg,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgSwitchControl_message_members = {
  "commande_locale::msg",  // message namespace
  "MsgSwitchControl",  // message name
  4,  // number of fields
  sizeof(commande_locale::msg::MsgSwitchControl),
  false,  // has_any_key_member_
  MsgSwitchControl_message_member_array,  // message members
  MsgSwitchControl_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgSwitchControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgSwitchControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgSwitchControl_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__MsgSwitchControl__get_type_hash,
  &commande_locale__msg__MsgSwitchControl__get_type_description,
  &commande_locale__msg__MsgSwitchControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace commande_locale


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::MsgSwitchControl>()
{
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::MsgSwitchControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, MsgSwitchControl)() {
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::MsgSwitchControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
