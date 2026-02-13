// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/msg_sensor_state.h"


#ifndef AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_H_
#define AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_H_

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

/// Struct defined in msg/MsgSensorState in the package aiguillages.
typedef struct aiguillages__msg__MsgSensorState
{
  std_msgs__msg__Header header;
  /// identifiant de la navette
  int32_t id;
  /// capteur de position indexé, situé aux postes de travail
  bool cpi[9];
  /// capteur de position convoyeur
  bool cp[11];
  /// capteur stop
  bool ps[25];
  /// detection gauche Tableau de booléens representant les capteurs physique dans CoppeliaSim
  bool dg[13];
  /// detection droite Tableau de booléens representant les capteurs physique dans CoppeliaSim
  bool dd[13];
} aiguillages__msg__MsgSensorState;

// Struct for a sequence of aiguillages__msg__MsgSensorState.
typedef struct aiguillages__msg__MsgSensorState__Sequence
{
  aiguillages__msg__MsgSensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aiguillages__msg__MsgSensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__STRUCT_H_
