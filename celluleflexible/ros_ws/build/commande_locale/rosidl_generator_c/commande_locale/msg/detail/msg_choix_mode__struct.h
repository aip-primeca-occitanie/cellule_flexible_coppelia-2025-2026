// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgChoixMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_choix_mode.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgChoixMode in the package commande_locale.
typedef struct commande_locale__msg__MsgChoixMode
{
  int32_t mode;
} commande_locale__msg__MsgChoixMode;

// Struct for a sequence of commande_locale__msg__MsgChoixMode.
typedef struct commande_locale__msg__MsgChoixMode__Sequence
{
  commande_locale__msg__MsgChoixMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgChoixMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_CHOIX_MODE__STRUCT_H_
