// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/MsgAddProduct.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_add_product.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgAddProduct in the package commande_locale.
typedef struct commande_locale__msg__MsgAddProduct
{
  int32_t num_poste;
  int32_t num_produit;
} commande_locale__msg__MsgAddProduct;

// Struct for a sequence of commande_locale__msg__MsgAddProduct.
typedef struct commande_locale__msg__MsgAddProduct__Sequence
{
  commande_locale__msg__MsgAddProduct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__MsgAddProduct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_ADD_PRODUCT__STRUCT_H_
