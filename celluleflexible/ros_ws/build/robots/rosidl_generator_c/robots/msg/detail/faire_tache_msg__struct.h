// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robots:msg/FaireTacheMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/faire_tache_msg.h"


#ifndef ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_H_
#define ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/FaireTacheMsg in the package robots.
typedef struct robots__msg__FaireTacheMsg
{
  int32_t num_robot;
  int32_t position;
  int32_t duree;
} robots__msg__FaireTacheMsg;

// Struct for a sequence of robots__msg__FaireTacheMsg.
typedef struct robots__msg__FaireTacheMsg__Sequence
{
  robots__msg__FaireTacheMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robots__msg__FaireTacheMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTS__MSG__DETAIL__FAIRE_TACHE_MSG__STRUCT_H_
