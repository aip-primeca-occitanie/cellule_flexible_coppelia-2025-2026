// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/MsgErreur.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/msg_erreur__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__MsgErreur__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xb4, 0x3a, 0x19, 0x57, 0x7d, 0x69, 0x71,
      0x99, 0x5e, 0x2a, 0xb6, 0x90, 0xe7, 0x3c, 0xb6,
      0x9f, 0x87, 0x7b, 0xc9, 0x86, 0x1f, 0xc3, 0xe2,
      0x52, 0xed, 0xf0, 0x3f, 0xfb, 0xb5, 0x1c, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__MsgErreur__TYPE_NAME[] = "commande_locale/msg/MsgErreur";

// Define type names, field names, and default values
static char commande_locale__msg__MsgErreur__FIELD_NAME__code[] = "code";
static char commande_locale__msg__MsgErreur__FIELD_NAME__n_poste[] = "n_poste";

static rosidl_runtime_c__type_description__Field commande_locale__msg__MsgErreur__FIELDS[] = {
  {
    {commande_locale__msg__MsgErreur__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__MsgErreur__FIELD_NAME__n_poste, 7, 7},
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
commande_locale__msg__MsgErreur__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__MsgErreur__TYPE_NAME, 29, 29},
      {commande_locale__msg__MsgErreur__FIELDS, 2, 2},
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
commande_locale__msg__MsgErreur__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__MsgErreur__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__MsgErreur__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__MsgErreur__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
