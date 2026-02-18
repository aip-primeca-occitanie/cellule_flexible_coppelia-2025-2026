// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice

#include "robots/msg/detail/move_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robots
const rosidl_type_hash_t *
robots__msg__MoveRobot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xe1, 0x65, 0x00, 0x43, 0x52, 0x8f, 0x1c,
      0x49, 0x22, 0xdd, 0xf4, 0x34, 0x63, 0xdc, 0x63,
      0xb5, 0x12, 0x8f, 0xd1, 0xcb, 0x52, 0xef, 0x1f,
      0x7d, 0xca, 0xb3, 0x9d, 0xb6, 0x2d, 0xac, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robots__msg__MoveRobot__TYPE_NAME[] = "robots/msg/MoveRobot";

// Define type names, field names, and default values
static char robots__msg__MoveRobot__FIELD_NAME__position[] = "position";
static char robots__msg__MoveRobot__FIELD_NAME__bras[] = "bras";
static char robots__msg__MoveRobot__FIELD_NAME__pince[] = "pince";
static char robots__msg__MoveRobot__FIELD_NAME__num_robot[] = "num_robot";

static rosidl_runtime_c__type_description__Field robots__msg__MoveRobot__FIELDS[] = {
  {
    {robots__msg__MoveRobot__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__MoveRobot__FIELD_NAME__bras, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__MoveRobot__FIELD_NAME__pince, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__MoveRobot__FIELD_NAME__num_robot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robots__msg__MoveRobot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robots__msg__MoveRobot__TYPE_NAME, 20, 20},
      {robots__msg__MoveRobot__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 position\n"
  "int32 bras\n"
  "int32 pince\n"
  "int32 num_robot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robots__msg__MoveRobot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robots__msg__MoveRobot__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robots__msg__MoveRobot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robots__msg__MoveRobot__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
