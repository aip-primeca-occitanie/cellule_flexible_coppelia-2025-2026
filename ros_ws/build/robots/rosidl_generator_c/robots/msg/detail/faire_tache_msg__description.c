// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robots:msg/FaireTacheMsg.idl
// generated code does not contain a copyright notice

#include "robots/msg/detail/faire_tache_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robots
const rosidl_type_hash_t *
robots__msg__FaireTacheMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x78, 0x34, 0x6a, 0xea, 0xda, 0x12, 0xed,
      0x01, 0x21, 0x5a, 0x84, 0x10, 0xf2, 0xf5, 0x5d,
      0x5d, 0xa1, 0x52, 0x93, 0x08, 0xdf, 0x54, 0xf5,
      0xc9, 0xd3, 0x94, 0xc2, 0xc4, 0x0a, 0xae, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robots__msg__FaireTacheMsg__TYPE_NAME[] = "robots/msg/FaireTacheMsg";

// Define type names, field names, and default values
static char robots__msg__FaireTacheMsg__FIELD_NAME__num_robot[] = "num_robot";
static char robots__msg__FaireTacheMsg__FIELD_NAME__position[] = "position";
static char robots__msg__FaireTacheMsg__FIELD_NAME__duree[] = "duree";

static rosidl_runtime_c__type_description__Field robots__msg__FaireTacheMsg__FIELDS[] = {
  {
    {robots__msg__FaireTacheMsg__FIELD_NAME__num_robot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__FaireTacheMsg__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robots__msg__FaireTacheMsg__FIELD_NAME__duree, 5, 5},
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
robots__msg__FaireTacheMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robots__msg__FaireTacheMsg__TYPE_NAME, 24, 24},
      {robots__msg__FaireTacheMsg__FIELDS, 3, 3},
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
  "int32 position\n"
  "int32 duree";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robots__msg__FaireTacheMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robots__msg__FaireTacheMsg__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robots__msg__FaireTacheMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robots__msg__FaireTacheMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
