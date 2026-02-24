// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgErreur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_erreur.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgErreur in the package commande_locale.
typedef struct commande_locale__msg__MsgErreur
{
  int32_t code;
  int32_t n_poste;
} commande_locale__msg__MsgErreur;

// Struct for a sequence of commande_locale__msg__MsgErreur.
typedef struct commande_locale__msg__MsgErreur__Sequence
{
  commande_locale__msg__MsgErreur * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgErreur__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_ERREUR__STRUCT_H_
