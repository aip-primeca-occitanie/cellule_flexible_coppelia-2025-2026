// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

#include "aiguillages/msg/detail/capteurs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_type_hash_t *
aiguillages__msg__Capteurs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x77, 0xbe, 0xe3, 0x84, 0x26, 0x0e, 0xd1,
      0x6b, 0x4f, 0xaf, 0xbe, 0xf1, 0x14, 0x8b, 0x78,
      0x52, 0x73, 0x61, 0xd5, 0x27, 0xd0, 0x9e, 0xf7,
      0x3a, 0xd7, 0x23, 0xc0, 0x80, 0x23, 0x54, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aiguillages__msg__Capteurs__TYPE_NAME[] = "aiguillages/msg/Capteurs";

// Define type names, field names, and default values
static char aiguillages__msg__Capteurs__FIELD_NAME__capteurs[] = "capteurs";

static rosidl_runtime_c__type_description__Field aiguillages__msg__Capteurs__FIELDS[] = {
  {
    {aiguillages__msg__Capteurs__FIELD_NAME__capteurs, 8, 8},
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
aiguillages__msg__Capteurs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aiguillages__msg__Capteurs__TYPE_NAME, 24, 24},
      {aiguillages__msg__Capteurs__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 capteurs\n"
  "\n"
  "#Fchier sous format PLC ; pas de header, comme-ci ca envoyer bcp de messages et ne contient qu'un seul int, ce qui respecte le format plc\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aiguillages__msg__Capteurs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aiguillages__msg__Capteurs__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aiguillages__msg__Capteurs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aiguillages__msg__Capteurs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
