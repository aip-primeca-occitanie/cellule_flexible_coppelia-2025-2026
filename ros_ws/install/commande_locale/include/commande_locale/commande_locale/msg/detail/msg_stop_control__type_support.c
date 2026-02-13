// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "commande_locale/msg/detail/msg_stop_control__rosidl_typesupport_introspection_c.h"
#include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "commande_locale/msg/detail/msg_stop_control__functions.h"
#include "commande_locale/msg/detail/msg_stop_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  commande_locale__msg__MsgStopControl__init(message_memory);
}

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_fini_function(void * message_memory)
{
  commande_locale__msg__MsgStopControl__fini(message_memory);
}

size_t commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__size_function__MsgStopControl__stop(
  const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__stop(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__stop(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__fetch_function__MsgStopControl__stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__stop(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__assign_function__MsgStopControl__stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__stop(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__size_function__MsgStopControl__go(
  const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__go(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__go(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__fetch_function__MsgStopControl__go(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__go(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__assign_function__MsgStopControl__go(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__go(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__MsgStopControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__MsgStopControl, stop),  // bytes offset in struct
    NULL,  // default value
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__size_function__MsgStopControl__stop,  // size() function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__stop,  // get_const(index) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__stop,  // get(index) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__fetch_function__MsgStopControl__stop,  // fetch(index, &value) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__assign_function__MsgStopControl__stop,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "go",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__MsgStopControl, go),  // bytes offset in struct
    NULL,  // default value
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__size_function__MsgStopControl__go,  // size() function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_const_function__MsgStopControl__go,  // get_const(index) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__get_function__MsgStopControl__go,  // get(index) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__fetch_function__MsgStopControl__go,  // fetch(index, &value) function pointer
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__assign_function__MsgStopControl__go,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_members = {
  "commande_locale__msg",  // message namespace
  "MsgStopControl",  // message name
  3,  // number of fields
  sizeof(commande_locale__msg__MsgStopControl),
  false,  // has_any_key_member_
  commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_member_array,  // message members
  commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_init_function,  // function to initialize message memory (memory has to be allocated)
  commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_type_support_handle = {
  0,
  &commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__MsgStopControl__get_type_hash,
  &commande_locale__msg__MsgStopControl__get_type_description,
  &commande_locale__msg__MsgStopControl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, msg, MsgStopControl)() {
  commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_type_support_handle.typesupport_identifier) {
    commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &commande_locale__msg__MsgStopControl__rosidl_typesupport_introspection_c__MsgStopControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
