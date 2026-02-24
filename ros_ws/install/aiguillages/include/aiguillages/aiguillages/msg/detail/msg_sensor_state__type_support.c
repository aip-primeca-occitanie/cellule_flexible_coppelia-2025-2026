// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aiguillages/msg/detail/msg_sensor_state__rosidl_typesupport_introspection_c.h"
#include "aiguillages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aiguillages/msg/detail/msg_sensor_state__functions.h"
#include "aiguillages/msg/detail/msg_sensor_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aiguillages__msg__MsgSensorState__init(message_memory);
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_fini_function(void * message_memory)
{
  aiguillages__msg__MsgSensorState__fini(message_memory);
}

size_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__cpi(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cpi(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cpi(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__cpi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cpi(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__cpi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cpi(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__cp(
  const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cp(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cp(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__cp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cp(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__cp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cp(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__ps(
  const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__ps(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__ps(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__ps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__ps(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__ps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__ps(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__dg(
  const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dg(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dg(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__dg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dg(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__dg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dg(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__dd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 13;
}

const void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dd(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dd(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__dd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dd(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__dd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dd(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, cpi),  // bytes offset in struct
    NULL,  // default value
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__cpi,  // size() function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cpi,  // get_const(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cpi,  // get(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__cpi,  // fetch(index, &value) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__cpi,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, cp),  // bytes offset in struct
    NULL,  // default value
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__cp,  // size() function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__cp,  // get_const(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__cp,  // get(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__cp,  // fetch(index, &value) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__cp,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, ps),  // bytes offset in struct
    NULL,  // default value
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__ps,  // size() function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__ps,  // get_const(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__ps,  // get(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__ps,  // fetch(index, &value) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__ps,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, dg),  // bytes offset in struct
    NULL,  // default value
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__dg,  // size() function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dg,  // get_const(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dg,  // get(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__dg,  // fetch(index, &value) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__dg,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    13,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__MsgSensorState, dd),  // bytes offset in struct
    NULL,  // default value
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__size_function__MsgSensorState__dd,  // size() function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_const_function__MsgSensorState__dd,  // get_const(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__get_function__MsgSensorState__dd,  // get(index) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__fetch_function__MsgSensorState__dd,  // fetch(index, &value) function pointer
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__assign_function__MsgSensorState__dd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_members = {
  "aiguillages__msg",  // message namespace
  "MsgSensorState",  // message name
  7,  // number of fields
  sizeof(aiguillages__msg__MsgSensorState),
  false,  // has_any_key_member_
  aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_member_array,  // message members
  aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_type_support_handle = {
  0,
  &aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_members,
  get_message_typesupport_handle_function,
  &aiguillages__msg__MsgSensorState__get_type_hash,
  &aiguillages__msg__MsgSensorState__get_type_description,
  &aiguillages__msg__MsgSensorState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aiguillages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aiguillages, msg, MsgSensorState)() {
  aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_type_support_handle.typesupport_identifier) {
    aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aiguillages__msg__MsgSensorState__rosidl_typesupport_introspection_c__MsgSensorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
