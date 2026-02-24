// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/Capteurs.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/capteurs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__Capteurs__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0xb6, 0xa4, 0x92, 0xec, 0xf6, 0xd4, 0x44,
      0x2a, 0x15, 0xaa, 0x01, 0x95, 0x75, 0xfd, 0x28,
      0xd2, 0xee, 0x69, 0xf7, 0x6a, 0x64, 0xd3, 0x5c,
      0x1f, 0x49, 0x9d, 0x8b, 0x94, 0x2c, 0xd9, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__Capteurs__TYPE_NAME[] = "commande_locale/msg/Capteurs";

// Define type names, field names, and default values
static char commande_locale__msg__Capteurs__FIELD_NAME__capteurs[] = "capteurs";

static rosidl_runtime_c__type_description__Field commande_locale__msg__Capteurs__FIELDS[] = {
  {
    {commande_locale__msg__Capteurs__FIELD_NAME__capteurs, 8, 8},
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
commande_locale__msg__Capteurs__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__Capteurs__TYPE_NAME, 28, 28},
      {commande_locale__msg__Capteurs__FIELDS, 1, 1},
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
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__Capteurs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__Capteurs__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__Capteurs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__Capteurs__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
