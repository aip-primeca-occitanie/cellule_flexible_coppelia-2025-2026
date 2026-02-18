// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_stop_control.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/MsgStopControl in the package commande_locale.
typedef struct commande_locale__msg__MsgStopControl
{
  std_msgs__msg__Header header;
  bool stop[25];
  bool go[25];
} commande_locale__msg__MsgStopControl;

// Struct for a sequence of commande_locale__msg__MsgStopControl.
typedef struct commande_locale__msg__MsgStopControl__Sequence
{
  commande_locale__msg__MsgStopControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgStopControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__STRUCT_H_
