// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/deplacer_piece_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__DeplacerPieceMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x80, 0xd3, 0x44, 0xe6, 0x9f, 0x2a, 0x27,
      0x2e, 0x46, 0x5c, 0xdb, 0x72, 0x05, 0x7b, 0x5c,
      0x0a, 0xe4, 0xe4, 0x6e, 0x01, 0x8d, 0x55, 0x45,
      0x98, 0x1a, 0x6f, 0x7c, 0x11, 0x47, 0x42, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__DeplacerPieceMsg__TYPE_NAME[] = "commande_locale/msg/DeplacerPieceMsg";

// Define type names, field names, and default values
static char commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__num_robot[] = "num_robot";
static char commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__positiona[] = "positiona";
static char commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__positionb[] = "positionb";

static rosidl_runtime_c__type_description__Field commande_locale__msg__DeplacerPieceMsg__FIELDS[] = {
  {
    {commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__num_robot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__positiona, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__DeplacerPieceMsg__FIELD_NAME__positionb, 9, 9},
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
commande_locale__msg__DeplacerPieceMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__DeplacerPieceMsg__TYPE_NAME, 36, 36},
      {commande_locale__msg__DeplacerPieceMsg__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_robot\n"
  "int32 positiona\n"
  "int32 positionb";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__DeplacerPieceMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__DeplacerPieceMsg__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__DeplacerPieceMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__DeplacerPieceMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
