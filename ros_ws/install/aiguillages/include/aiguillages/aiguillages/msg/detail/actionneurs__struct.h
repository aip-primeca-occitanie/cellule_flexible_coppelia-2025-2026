// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/actionneurs.h"


#ifndef AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_H_
#define AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Actionneurs in the package aiguillages.
typedef struct aiguillages__msg__Actionneurs
{
  int64_t actionneurs;
} aiguillages__msg__Actionneurs;

// Struct for a sequence of aiguillages__msg__Actionneurs.
typedef struct aiguillages__msg__Actionneurs__Sequence
{
  aiguillages__msg__Actionneurs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aiguillages__msg__Actionneurs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__STRUCT_H_
