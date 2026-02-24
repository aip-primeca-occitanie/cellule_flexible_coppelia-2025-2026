// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice

#include "aiguillages/msg/detail/actionneurs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_type_hash_t *
aiguillages__msg__Actionneurs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x26, 0x72, 0x13, 0x44, 0x4d, 0x77, 0xd8,
      0xc2, 0x9f, 0xbc, 0xef, 0x9a, 0x6d, 0xf8, 0x63,
      0x26, 0xfd, 0x19, 0x48, 0xe9, 0xe2, 0x1b, 0x20,
      0xbc, 0x1a, 0xdb, 0x63, 0x62, 0x1c, 0xf3, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aiguillages__msg__Actionneurs__TYPE_NAME[] = "aiguillages/msg/Actionneurs";

// Define type names, field names, and default values
static char aiguillages__msg__Actionneurs__FIELD_NAME__actionneurs[] = "actionneurs";

static rosidl_runtime_c__type_description__Field aiguillages__msg__Actionneurs__FIELDS[] = {
  {
    {aiguillages__msg__Actionneurs__FIELD_NAME__actionneurs, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aiguillages__msg__Actionneurs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aiguillages__msg__Actionneurs__TYPE_NAME, 27, 27},
      {aiguillages__msg__Actionneurs__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 actionneurs\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aiguillages__msg__Actionneurs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aiguillages__msg__Actionneurs__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aiguillages__msg__Actionneurs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aiguillages__msg__Actionneurs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
