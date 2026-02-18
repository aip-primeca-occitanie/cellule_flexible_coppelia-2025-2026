// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/robot_joints.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_H_
#define COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotJoints in the package commande_locale.
typedef struct commande_locale__msg__RobotJoints
{
  int32_t joint1;
  int32_t joint2;
  int32_t joint3;
  int32_t joint4;
  int32_t joint5;
  int32_t joint6;
  int32_t joint7;
  int32_t num_robot;
} commande_locale__msg__RobotJoints;

// Struct for a sequence of commande_locale__msg__RobotJoints.
typedef struct commande_locale__msg__RobotJoints__Sequence
{
  commande_locale__msg__RobotJoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__msg__RobotJoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__STRUCT_H_
