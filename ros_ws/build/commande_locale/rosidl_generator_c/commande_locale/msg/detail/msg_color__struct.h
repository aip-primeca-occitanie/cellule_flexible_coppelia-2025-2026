// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_color.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_H_

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

/// Struct defined in msg/MsgColor in the package commande_locale.
typedef struct commande_locale__msg__MsgColor
{
  std_msgs__msg__Header header;
  int32_t handle;
  int32_t color;
} commande_locale__msg__MsgColor;

// Struct for a sequence of commande_locale__msg__MsgColor.
typedef struct commande_locale__msg__MsgColor__Sequence
{
  commande_locale__msg__MsgColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__STRUCT_H_
