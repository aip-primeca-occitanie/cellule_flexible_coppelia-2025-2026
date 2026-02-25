// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/actionneurs.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Actionneurs in the package commande_locale.
typedef struct commande_locale__msg__Actionneurs
{
  int64_t actionneurs;
} commande_locale__msg__Actionneurs;

// Struct for a sequence of commande_locale__msg__Actionneurs.
typedef struct commande_locale__msg__Actionneurs__Sequence
{
  commande_locale__msg__Actionneurs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__Actionneurs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ACTIONNEURS__STRUCT_H_
