// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice

#include "shuttles/msg/detail/msg_shuttle_change__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shuttles
const rosidl_type_hash_t *
shuttles__msg__MsgShuttleChange__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xf7, 0x43, 0x9e, 0x90, 0x8b, 0xfc, 0xb3,
      0xe3, 0x75, 0x9e, 0x99, 0x0e, 0x70, 0xc7, 0x9b,
      0x62, 0x1b, 0xe3, 0x20, 0xff, 0xa3, 0xf7, 0xac,
      0x31, 0x81, 0x42, 0x88, 0x33, 0x6d, 0x8a, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shuttles__msg__MsgShuttleChange__TYPE_NAME[] = "shuttles/msg/MsgShuttleChange";

// Define type names, field names, and default values
static char shuttles__msg__MsgShuttleChange__FIELD_NAME__handle[] = "handle";
static char shuttles__msg__MsgShuttleChange__FIELD_NAME__argument[] = "argument";

static rosidl_runtime_c__type_description__Field shuttles__msg__MsgShuttleChange__FIELDS[] = {
  {
    {shuttles__msg__MsgShuttleChange__FIELD_NAME__handle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleChange__FIELD_NAME__argument, 8, 8},
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
shuttles__msg__MsgShuttleChange__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shuttles__msg__MsgShuttleChange__TYPE_NAME, 29, 29},
      {shuttles__msg__MsgShuttleChange__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# argument = destination or product\n"
  "\n"
  "int32 handle\n"
  "int32 argument ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shuttles__msg__MsgShuttleChange__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shuttles__msg__MsgShuttleChange__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shuttles__msg__MsgShuttleChange__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shuttles__msg__MsgShuttleChange__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
