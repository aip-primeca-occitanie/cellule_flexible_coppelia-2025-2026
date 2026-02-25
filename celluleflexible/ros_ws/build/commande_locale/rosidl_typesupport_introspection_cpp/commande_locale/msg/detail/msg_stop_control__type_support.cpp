// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/detail/msg_stop_control__functions.h"
#include "commande_locale/msg/detail/msg_stop_control__struct.hpp"
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

void MsgStopControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) commande_locale::msg::MsgStopControl(_init);
}

void MsgStopControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<commande_locale::msg::MsgStopControl *>(message_memory);
  typed_message->~MsgStopControl();
}

size_t size_function__MsgStopControl__stop(const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * get_const_function__MsgStopControl__stop(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgStopControl__stop(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgStopControl__stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgStopControl__stop(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgStopControl__stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgStopControl__stop(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgStopControl__go(const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * get_const_function__MsgStopControl__go(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgStopControl__go(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgStopControl__go(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgStopControl__go(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgStopControl__go(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgStopControl__go(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgStopControl_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgStopControl, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgStopControl, stop),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgStopControl__stop,  // size() function pointer
    get_const_function__MsgStopControl__stop,  // get_const(index) function pointer
    get_function__MsgStopControl__stop,  // get(index) function pointer
    fetch_function__MsgStopControl__stop,  // fetch(index, &value) function pointer
    assign_function__MsgStopControl__stop,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "go",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(commande_locale::msg::MsgStopControl, go),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgStopControl__go,  // size() function pointer
    get_const_function__MsgStopControl__go,  // get_const(index) function pointer
    get_function__MsgStopControl__go,  // get(index) function pointer
    fetch_function__MsgStopControl__go,  // fetch(index, &value) function pointer
    assign_function__MsgStopControl__go,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgStopControl_message_members = {
  "commande_locale::msg",  // message namespace
  "MsgStopControl",  // message name
  3,  // number of fields
  sizeof(commande_locale::msg::MsgStopControl),
  false,  // has_any_key_member_
  MsgStopControl_message_member_array,  // message members
  MsgStopControl_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgStopControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgStopControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgStopControl_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__MsgStopControl__get_type_hash,
  &commande_locale__msg__MsgStopControl__get_type_description,
  &commande_locale__msg__MsgStopControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace commande_locale


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::MsgStopControl>()
{
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::MsgStopControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, MsgStopControl)() {
  return &::commande_locale::msg::rosidl_typesupport_introspection_cpp::MsgStopControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
