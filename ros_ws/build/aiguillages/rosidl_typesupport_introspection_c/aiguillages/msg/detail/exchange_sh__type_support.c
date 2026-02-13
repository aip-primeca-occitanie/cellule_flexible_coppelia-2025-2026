// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aiguillages/msg/detail/exchange_sh__rosidl_typesupport_introspection_c.h"
#include "aiguillages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aiguillages/msg/detail/exchange_sh__functions.h"
#include "aiguillages/msg/detail/exchange_sh__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aiguillages__msg__ExchangeSh__init(message_memory);
}

void aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_fini_function(void * message_memory)
{
  aiguillages__msg__ExchangeSh__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__ExchangeSh, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "handle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aiguillages__msg__ExchangeSh, handle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_members = {
  "aiguillages__msg",  // message namespace
  "ExchangeSh",  // message name
  2,  // number of fields
  sizeof(aiguillages__msg__ExchangeSh),
  false,  // has_any_key_member_
  aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_member_array,  // message members
  aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_init_function,  // function to initialize message memory (memory has to be allocated)
  aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_type_support_handle = {
  0,
  &aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_members,
  get_message_typesupport_handle_function,
  &aiguillages__msg__ExchangeSh__get_type_hash,
  &aiguillages__msg__ExchangeSh__get_type_description,
  &aiguillages__msg__ExchangeSh__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aiguillages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aiguillages, msg, ExchangeSh)() {
  aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_type_support_handle.typesupport_identifier) {
    aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aiguillages__msg__ExchangeSh__rosidl_typesupport_introspection_c__ExchangeSh_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
