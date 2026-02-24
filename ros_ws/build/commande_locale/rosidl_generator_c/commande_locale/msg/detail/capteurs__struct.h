// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/capteurs.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Capteurs in the package commande_locale.
typedef struct commande_locale__msg__Capteurs
{
  int64_t capteurs;
} commande_locale__msg__Capteurs;

// Struct for a sequence of commande_locale__msg__Capteurs.
typedef struct commande_locale__msg__Capteurs__Sequence
{
  commande_locale__msg__Capteurs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__Capteurs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__CAPTEURS__STRUCT_H_
