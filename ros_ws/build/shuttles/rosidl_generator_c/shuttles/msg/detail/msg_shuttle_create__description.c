// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice

#include "shuttles/msg/detail/msg_shuttle_create__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_shuttles
const rosidl_type_hash_t *
shuttles__msg__MsgShuttleCreate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x53, 0x3e, 0x10, 0x21, 0xe2, 0xa2, 0xee,
      0x81, 0xf6, 0x33, 0x35, 0xa6, 0xaf, 0xd1, 0xbf,
      0x33, 0x4c, 0x9f, 0xee, 0x7d, 0xeb, 0xa8, 0x04,
      0x49, 0xf6, 0x2a, 0x03, 0xe8, 0x47, 0xa1, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char shuttles__msg__MsgShuttleCreate__TYPE_NAME[] = "shuttles/msg/MsgShuttleCreate";

// Define type names, field names, and default values
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__name[] = "name";
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__destination[] = "destination";
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__product[] = "product";
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__handle[] = "handle";
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__handle_platform[] = "handle_platform";
static char shuttles__msg__MsgShuttleCreate__FIELD_NAME__zone[] = "zone";

static rosidl_runtime_c__type_description__Field shuttles__msg__MsgShuttleCreate__FIELDS[] = {
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__product, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__handle, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__handle_platform, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {shuttles__msg__MsgShuttleCreate__FIELD_NAME__zone, 4, 4},
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
shuttles__msg__MsgShuttleCreate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {shuttles__msg__MsgShuttleCreate__TYPE_NAME, 29, 29},
      {shuttles__msg__MsgShuttleCreate__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 destination\n"
  "int32 product\n"
  "int32 handle\n"
  "int32 handle_platform\n"
  "int32 zone";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
shuttles__msg__MsgShuttleCreate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {shuttles__msg__MsgShuttleCreate__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
shuttles__msg__MsgShuttleCreate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *shuttles__msg__MsgShuttleCreate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
