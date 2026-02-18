// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

#include "robots/msg/detail/msg_num_robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robots
const rosidl_type_hash_t *
robots__msg__MsgNumRobot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0xbf, 0x06, 0x43, 0x8a, 0x79, 0x95, 0x22,
      0x6f, 0x31, 0x10, 0xc0, 0x64, 0xd6, 0xcf, 0x82,
      0x37, 0x42, 0x33, 0xe3, 0x68, 0x5f, 0x81, 0x42,
      0x13, 0x19, 0x76, 0xad, 0x9f, 0x24, 0x12, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robots__msg__MsgNumRobot__TYPE_NAME[] = "robots/msg/MsgNumRobot";

// Define type names, field names, and default values
static char robots__msg__MsgNumRobot__FIELD_NAME__num_robot[] = "num_robot";
static char robots__msg__MsgNumRobot__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field robots__msg__MsgNumRobot__FIELDS[] = {
  {
    {robots__msg__MsgNumRobot__FIELD_NAME__num_robot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__MsgNumRobot__FIELD_NAME__data, 4, 4},
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
robots__msg__MsgNumRobot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robots__msg__MsgNumRobot__TYPE_NAME, 22, 22},
      {robots__msg__MsgNumRobot__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_robot\n"
  "int32 data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robots__msg__MsgNumRobot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robots__msg__MsgNumRobot__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robots__msg__MsgNumRobot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robots__msg__MsgNumRobot__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
