// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/actionneurs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__Actionneurs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0xad, 0x95, 0x01, 0x8f, 0xd5, 0x45, 0xb5,
      0xab, 0xff, 0x92, 0x78, 0x4e, 0x35, 0x71, 0x97,
      0xea, 0xbc, 0x0d, 0x4a, 0x62, 0xea, 0xa0, 0xd1,
      0x41, 0x51, 0x61, 0xff, 0x8c, 0x31, 0x36, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__Actionneurs__TYPE_NAME[] = "commande_locale/msg/Actionneurs";

// Define type names, field names, and default values
static char commande_locale__msg__Actionneurs__FIELD_NAME__actionneurs[] = "actionneurs";

static rosidl_runtime_c__type_description__Field commande_locale__msg__Actionneurs__FIELDS[] = {
  {
    {commande_locale__msg__Actionneurs__FIELD_NAME__actionneurs, 11, 11},
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
commande_locale__msg__Actionneurs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__Actionneurs__TYPE_NAME, 31, 31},
      {commande_locale__msg__Actionneurs__FIELDS, 1, 1},
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
commande_locale__msg__Actionneurs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__Actionneurs__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 20, 20},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__Actionneurs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__Actionneurs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
