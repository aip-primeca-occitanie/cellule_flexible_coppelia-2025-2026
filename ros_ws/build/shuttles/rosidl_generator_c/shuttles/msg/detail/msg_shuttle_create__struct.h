// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_create.h"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__STRUCT_H_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MsgShuttleCreate in the package shuttles.
typedef struct shuttles__msg__MsgShuttleCreate
{
  rosidl_runtime_c__String name;
  int32_t destination;
  int32_t product;
  int32_t handle;
  int32_t handle_platform;
  int32_t zone;
} shuttles__msg__MsgShuttleCreate;

// Struct for a sequence of shuttles__msg__MsgShuttleCreate.
typedef struct shuttles__msg__MsgShuttleCreate__Sequence
{
  shuttles__msg__MsgShuttleCreate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__msg__MsgShuttleCreate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CREATE__STRUCT_H_
