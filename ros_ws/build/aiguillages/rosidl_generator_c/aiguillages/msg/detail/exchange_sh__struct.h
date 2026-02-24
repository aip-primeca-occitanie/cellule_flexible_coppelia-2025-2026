// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/exchange_sh.h"


#ifndef AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_H_
#define AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ExchangeSh in the package aiguillages.
typedef struct aiguillages__msg__ExchangeSh
{
  std_msgs__msg__Header header;
  /// sert de pont avec copelia, en echangeant un identifiant unique numerique pour identifier l'objet dans le simulateur
  int32_t handle;
} aiguillages__msg__ExchangeSh;

// Struct for a sequence of aiguillages__msg__ExchangeSh.
typedef struct aiguillages__msg__ExchangeSh__Sequence
{
  aiguillages__msg__ExchangeSh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aiguillages__msg__ExchangeSh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__EXCHANGE_SH__STRUCT_H_
