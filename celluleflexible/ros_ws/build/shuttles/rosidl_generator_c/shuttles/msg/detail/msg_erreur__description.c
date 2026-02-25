// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice

#include "shuttles/msg/detail/msg_erreur__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shuttles
const rosidl_type_hash_t *
shuttles__msg__MsgErreur__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xb9, 0x19, 0xe8, 0xa1, 0x68, 0x7d, 0xc1,
      0xb6, 0x6f, 0x5b, 0xef, 0x0b, 0x41, 0xb4, 0x06,
      0x72, 0xee, 0xc1, 0x30, 0x75, 0xfd, 0xfc, 0x46,
      0x2d, 0xcd, 0x5f, 0x71, 0x86, 0xac, 0x63, 0x66,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shuttles__msg__MsgErreur__TYPE_NAME[] = "shuttles/msg/MsgErreur";

// Define type names, field names, and default values
static char shuttles__msg__MsgErreur__FIELD_NAME__code[] = "code";
static char shuttles__msg__MsgErreur__FIELD_NAME__n_poste[] = "n_poste";

static rosidl_runtime_c__type_description__Field shuttles__msg__MsgErreur__FIELDS[] = {
  {
    {shuttles__msg__MsgErreur__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgErreur__FIELD_NAME__n_poste, 7, 7},
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
shuttles__msg__MsgErreur__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shuttles__msg__MsgErreur__TYPE_NAME, 22, 22},
      {shuttles__msg__MsgErreur__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 code\n"
  "int32 n_poste";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shuttles__msg__MsgErreur__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shuttles__msg__MsgErreur__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shuttles__msg__MsgErreur__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shuttles__msg__MsgErreur__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
