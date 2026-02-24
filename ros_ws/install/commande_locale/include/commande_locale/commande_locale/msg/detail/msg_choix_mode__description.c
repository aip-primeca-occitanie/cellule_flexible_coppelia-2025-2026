// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/MsgChoixMode.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/msg_choix_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__MsgChoixMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xec, 0x6c, 0x24, 0xb5, 0x10, 0x56, 0x61,
      0x71, 0xa2, 0xfc, 0xcb, 0xb7, 0x6f, 0x8e, 0x84,
      0x36, 0x55, 0x0f, 0x44, 0x1b, 0xf2, 0xfd, 0x53,
      0xc1, 0x0f, 0xe7, 0xe0, 0x24, 0x1d, 0xd1, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__MsgChoixMode__TYPE_NAME[] = "commande_locale/msg/MsgChoixMode";

// Define type names, field names, and default values
static char commande_locale__msg__MsgChoixMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field commande_locale__msg__MsgChoixMode__FIELDS[] = {
  {
    {commande_locale__msg__MsgChoixMode__FIELD_NAME__mode, 4, 4},
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
commande_locale__msg__MsgChoixMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__MsgChoixMode__TYPE_NAME, 32, 32},
      {commande_locale__msg__MsgChoixMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 mode\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__MsgChoixMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__MsgChoixMode__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__MsgChoixMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__MsgChoixMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
