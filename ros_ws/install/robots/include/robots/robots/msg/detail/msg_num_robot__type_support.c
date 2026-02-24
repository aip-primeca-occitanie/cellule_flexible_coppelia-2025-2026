// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robots/msg/detail/msg_num_robot__rosidl_typesupport_introspection_c.h"
#include "robots/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robots/msg/detail/msg_num_robot__functions.h"
#include "robots/msg/detail/msg_num_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robots__msg__MsgNumRobot__init(message_memory);
}

void robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_fini_function(void * message_memory)
{
  robots__msg__MsgNumRobot__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_member_array[2] = {
  {
    "num_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robots__msg__MsgNumRobot, num_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robots__msg__MsgNumRobot, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_members = {
  "robots__msg",  // message namespace
  "MsgNumRobot",  // message name
  2,  // number of fields
  sizeof(robots__msg__MsgNumRobot),
  false,  // has_any_key_member_
  robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_member_array,  // message members
  robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_type_support_handle = {
  0,
  &robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_members,
  get_message_typesupport_handle_function,
  &robots__msg__MsgNumRobot__get_type_hash,
  &robots__msg__MsgNumRobot__get_type_description,
  &robots__msg__MsgNumRobot__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robots
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robots, msg, MsgNumRobot)() {
  if (!robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_type_support_handle.typesupport_identifier) {
    robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robots__msg__MsgNumRobot__rosidl_typesupport_introspection_c__MsgNumRobot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
