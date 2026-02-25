// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/TacheFinieMsg.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/tache_finie_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__TacheFinieMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x0c, 0x9d, 0x13, 0x48, 0xa5, 0x65, 0xab,
      0xba, 0xc9, 0xfe, 0xdf, 0xff, 0x0c, 0x1b, 0x91,
      0x1b, 0x94, 0xde, 0xf4, 0x72, 0x9e, 0x49, 0x26,
      0xb4, 0xdb, 0xc3, 0xac, 0x91, 0x3f, 0xe3, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__TacheFinieMsg__TYPE_NAME[] = "commande_locale/msg/TacheFinieMsg";

// Define type names, field names, and default values
static char commande_locale__msg__TacheFinieMsg__FIELD_NAME__num_poste[] = "num_poste";
static char commande_locale__msg__TacheFinieMsg__FIELD_NAME__num_produit[] = "num_produit";
static char commande_locale__msg__TacheFinieMsg__FIELD_NAME__duree[] = "duree";

static rosidl_runtime_c__type_description__Field commande_locale__msg__TacheFinieMsg__FIELDS[] = {
  {
    {commande_locale__msg__TacheFinieMsg__FIELD_NAME__num_poste, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__TacheFinieMsg__FIELD_NAME__num_produit, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__TacheFinieMsg__FIELD_NAME__duree, 5, 5},
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
commande_locale__msg__TacheFinieMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__TacheFinieMsg__TYPE_NAME, 33, 33},
      {commande_locale__msg__TacheFinieMsg__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_poste\n"
  "int32 num_produit\n"
  "int32 duree";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__TacheFinieMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__TacheFinieMsg__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__TacheFinieMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__TacheFinieMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
