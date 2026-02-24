// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/deplacer_piece_msg.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DeplacerPieceMsg in the package commande_locale.
typedef struct commande_locale__msg__DeplacerPieceMsg
{
  int32_t num_robot;
  int32_t positiona;
  int32_t positionb;
} commande_locale__msg__DeplacerPieceMsg;

// Struct for a sequence of commande_locale__msg__DeplacerPieceMsg.
typedef struct commande_locale__msg__DeplacerPieceMsg__Sequence
{
  commande_locale__msg__DeplacerPieceMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__DeplacerPieceMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__DEPLACER_PIECE_MSG__STRUCT_H_
