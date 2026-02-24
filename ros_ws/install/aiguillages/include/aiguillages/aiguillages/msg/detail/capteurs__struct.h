// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/capteurs.h"


#ifndef AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_H_
#define AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Capteurs in the package aiguillages.
typedef struct aiguillages__msg__Capteurs
{
  int64_t capteurs;
} aiguillages__msg__Capteurs;

// Struct for a sequence of aiguillages__msg__Capteurs.
typedef struct aiguillages__msg__Capteurs__Sequence
{
  aiguillages__msg__Capteurs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aiguillages__msg__Capteurs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__CAPTEURS__STRUCT_H_
