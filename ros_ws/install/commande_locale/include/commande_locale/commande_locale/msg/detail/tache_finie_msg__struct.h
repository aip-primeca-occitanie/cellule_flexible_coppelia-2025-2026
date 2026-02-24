// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/tache_finie_msg.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TacheFinieMsg in the package commande_locale.
typedef struct commande_locale__msg__TacheFinieMsg
{
  int32_t num_poste;
  int32_t num_produit;
  int32_t duree;
} commande_locale__msg__TacheFinieMsg;

// Struct for a sequence of commande_locale__msg__TacheFinieMsg.
typedef struct commande_locale__msg__TacheFinieMsg__Sequence
{
  commande_locale__msg__TacheFinieMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__TacheFinieMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__TACHE_FINIE_MSG__STRUCT_H_
