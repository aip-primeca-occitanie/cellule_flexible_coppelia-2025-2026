// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_pin_control.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_H_

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

/// Struct defined in msg/MsgPinControl in the package commande_locale.
typedef struct commande_locale__msg__MsgPinControl
{
  std_msgs__msg__Header header;
  bool pinon[9];
  bool pinoff[9];
} commande_locale__msg__MsgPinControl;

// Struct for a sequence of commande_locale__msg__MsgPinControl.
typedef struct commande_locale__msg__MsgPinControl__Sequence
{
  commande_locale__msg__MsgPinControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgPinControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__STRUCT_H_
