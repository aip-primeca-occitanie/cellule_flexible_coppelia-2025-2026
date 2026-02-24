// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_shuttle_change.h"


#ifndef SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_H_
#define SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgShuttleChange in the package shuttles.
/**
  * argument = destination or product
 */
typedef struct shuttles__msg__MsgShuttleChange
{
  int32_t handle;
  int32_t argument;
} shuttles__msg__MsgShuttleChange;

// Struct for a sequence of shuttles__msg__MsgShuttleChange.
typedef struct shuttles__msg__MsgShuttleChange__Sequence
{
  shuttles__msg__MsgShuttleChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__msg__MsgShuttleChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__MSG__DETAIL__MSG_SHUTTLE_CHANGE__STRUCT_H_
