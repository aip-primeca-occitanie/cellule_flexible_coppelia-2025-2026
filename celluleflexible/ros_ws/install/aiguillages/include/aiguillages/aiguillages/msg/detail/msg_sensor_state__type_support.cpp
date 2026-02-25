// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aiguillages/msg/detail/msg_sensor_state__functions.h"
#include "aiguillages/msg/detail/msg_sensor_state__struct.hpp"
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

void MsgSensorState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aiguillages::msg::MsgSensorState(_init);
}

void MsgSensorState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aiguillages::msg::MsgSensorState *>(message_memory);
  typed_message->~MsgSensorState();
}

size_t size_function__MsgSensorState__cpi(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__MsgSensorState__cpi(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSensorState__cpi(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSensorState__cpi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSensorState__cpi(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSensorState__cpi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSensorState__cpi(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSensorState__cp(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__MsgSensorState__cp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSensorState__cp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 11> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSensorState__cp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSensorState__cp(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSensorState__cp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSensorState__cp(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSensorState__ps(const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * get_const_function__MsgSensorState__ps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSensorState__ps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 25> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSensorState__ps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSensorState__ps(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSensorState__ps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSensorState__ps(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSensorState__dg(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__MsgSensorState__dg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSensorState__dg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSensorState__dg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSensorState__dg(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSensorState__dg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSensorState__dg(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MsgSensorState__dd(const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * get_const_function__MsgSensorState__dd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void * get_function__MsgSensorState__dd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 13> *>(untyped_member);
  return &member[index];
}

void fetch_function__MsgSensorState__dd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MsgSensorState__dd(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MsgSensorState__dd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MsgSensorState__dd(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgSensorState_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cpi",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, cpi),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSensorState__cpi,  // size() function pointer
    get_const_function__MsgSensorState__cpi,  // get_const(index) function pointer
    get_function__MsgSensorState__cpi,  // get(index) function pointer
    fetch_function__MsgSensorState__cpi,  // fetch(index, &value) function pointer
    assign_function__MsgSensorState__cpi,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, cp),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSensorState__cp,  // size() function pointer
    get_const_function__MsgSensorState__cp,  // get_const(index) function pointer
    get_function__MsgSensorState__cp,  // get(index) function pointer
    fetch_function__MsgSensorState__cp,  // fetch(index, &value) function pointer
    assign_function__MsgSensorState__cp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, ps),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSensorState__ps,  // size() function pointer
    get_const_function__MsgSensorState__ps,  // get_const(index) function pointer
    get_function__MsgSensorState__ps,  // get(index) function pointer
    fetch_function__MsgSensorState__ps,  // fetch(index, &value) function pointer
    assign_function__MsgSensorState__ps,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, dg),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSensorState__dg,  // size() function pointer
    get_const_function__MsgSensorState__dg,  // get_const(index) function pointer
    get_function__MsgSensorState__dg,  // get(index) function pointer
    fetch_function__MsgSensorState__dg,  // fetch(index, &value) function pointer
    assign_function__MsgSensorState__dg,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(aiguillages::msg::MsgSensorState, dd),  // bytes offset in struct
    nullptr,  // default value
    size_function__MsgSensorState__dd,  // size() function pointer
    get_const_function__MsgSensorState__dd,  // get_const(index) function pointer
    get_function__MsgSensorState__dd,  // get(index) function pointer
    fetch_function__MsgSensorState__dd,  // fetch(index, &value) function pointer
    assign_function__MsgSensorState__dd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgSensorState_message_members = {
  "aiguillages::msg",  // message namespace
  "MsgSensorState",  // message name
  7,  // number of fields
  sizeof(aiguillages::msg::MsgSensorState),
  false,  // has_any_key_member_
  MsgSensorState_message_member_array,  // message members
  MsgSensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgSensorState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgSensorState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgSensorState_message_members,
  get_message_typesupport_handle_function,
  &aiguillages__msg__MsgSensorState__get_type_hash,
  &aiguillages__msg__MsgSensorState__get_type_description,
  &aiguillages__msg__MsgSensorState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aiguillages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aiguillages::msg::MsgSensorState>()
{
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::MsgSensorState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aiguillages, msg, MsgSensorState)() {
  return &::aiguillages::msg::rosidl_typesupport_introspection_cpp::MsgSensorState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
