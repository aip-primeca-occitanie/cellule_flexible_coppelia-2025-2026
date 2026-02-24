// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/move_robot.h"


#ifndef ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_H_
#define ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MoveRobot in the package robots.
typedef struct robots__msg__MoveRobot
{
  int32_t position;
  int32_t bras;
  int32_t pince;
  int32_t num_robot;
} robots__msg__MoveRobot;

// Struct for a sequence of robots__msg__MoveRobot.
typedef struct robots__msg__MoveRobot__Sequence
{
  robots__msg__MoveRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robots__msg__MoveRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTS__MSG__DETAIL__MOVE_ROBOT__STRUCT_H_
