// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robots/msg/msg_num_robot.h"


#ifndef ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__STRUCT_H_
#define ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgNumRobot in the package robots.
typedef struct robots__msg__MsgNumRobot
{
  int32_t num_robot;
  int32_t data;
} robots__msg__MsgNumRobot;

// Struct for a sequence of robots__msg__MsgNumRobot.
typedef struct robots__msg__MsgNumRobot__Sequence
{
  robots__msg__MsgNumRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robots__msg__MsgNumRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTS__MSG__DETAIL__MSG_NUM_ROBOT__STRUCT_H_
