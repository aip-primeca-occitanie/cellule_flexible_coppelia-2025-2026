// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/msg/msg_erreur.h"


#ifndef SHUTTLES__MSG__DETAIL__MSG_ERREUR__STRUCT_H_
#define SHUTTLES__MSG__DETAIL__MSG_ERREUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgErreur in the package shuttles.
typedef struct shuttles__msg__MsgErreur
{
  int32_t code;
  int32_t n_poste;
} shuttles__msg__MsgErreur;

// Struct for a sequence of shuttles__msg__MsgErreur.
typedef struct shuttles__msg__MsgErreur__Sequence
{
  shuttles__msg__MsgErreur * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__msg__MsgErreur__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__MSG__DETAIL__MSG_ERREUR__STRUCT_H_
