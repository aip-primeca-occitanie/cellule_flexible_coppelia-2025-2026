// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shuttles/msg/detail/msg_shuttle_change__rosidl_typesupport_introspection_c.h"
#include "shuttles/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shuttles/msg/detail/msg_shuttle_change__functions.h"
#include "shuttles/msg/detail/msg_shuttle_change__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shuttles__msg__MsgShuttleChange__init(message_memory);
}

void shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_fini_function(void * message_memory)
{
  shuttles__msg__MsgShuttleChange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_member_array[2] = {
  {
    "handle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__msg__MsgShuttleChange, handle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "argument",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__msg__MsgShuttleChange, argument),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_members = {
  "shuttles__msg",  // message namespace
  "MsgShuttleChange",  // message name
  2,  // number of fields
  sizeof(shuttles__msg__MsgShuttleChange),
  false,  // has_any_key_member_
  shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_member_array,  // message members
  shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_init_function,  // function to initialize message memory (memory has to be allocated)
  shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_type_support_handle = {
  0,
  &shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_members,
  get_message_typesupport_handle_function,
  &shuttles__msg__MsgShuttleChange__get_type_hash,
  &shuttles__msg__MsgShuttleChange__get_type_description,
  &shuttles__msg__MsgShuttleChange__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shuttles
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, msg, MsgShuttleChange)() {
  if (!shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_type_support_handle.typesupport_identifier) {
    shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shuttles__msg__MsgShuttleChange__rosidl_typesupport_introspection_c__MsgShuttleChange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
