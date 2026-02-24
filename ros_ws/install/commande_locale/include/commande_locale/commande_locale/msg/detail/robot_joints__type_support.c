// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "commande_locale/msg/detail/robot_joints__rosidl_typesupport_introspection_c.h"
#include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "commande_locale/msg/detail/robot_joints__functions.h"
#include "commande_locale/msg/detail/robot_joints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  commande_locale__msg__RobotJoints__init(message_memory);
}

void commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_fini_function(void * message_memory)
{
  commande_locale__msg__RobotJoints__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_member_array[8] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, joint7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__msg__RobotJoints, num_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_members = {
  "commande_locale__msg",  // message namespace
  "RobotJoints",  // message name
  8,  // number of fields
  sizeof(commande_locale__msg__RobotJoints),
  false,  // has_any_key_member_
  commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_member_array,  // message members
  commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_init_function,  // function to initialize message memory (memory has to be allocated)
  commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_type_support_handle = {
  0,
  &commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__msg__RobotJoints__get_type_hash,
  &commande_locale__msg__RobotJoints__get_type_description,
  &commande_locale__msg__RobotJoints__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, msg, RobotJoints)() {
  if (!commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_type_support_handle.typesupport_identifier) {
    commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &commande_locale__msg__RobotJoints__rosidl_typesupport_introspection_c__RobotJoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
