// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/MsgAddProduct.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/msg_add_product__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__MsgAddProduct__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0x42, 0xe7, 0x45, 0xaa, 0x0a, 0xa0, 0x8e,
      0xec, 0x00, 0x8f, 0x88, 0x89, 0x3f, 0xa6, 0x78,
      0xb8, 0x3b, 0x09, 0x3e, 0xcb, 0x30, 0xb3, 0x5c,
      0x20, 0x23, 0x89, 0xc7, 0xfc, 0xde, 0x58, 0x23,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__MsgAddProduct__TYPE_NAME[] = "commande_locale/msg/MsgAddProduct";

// Define type names, field names, and default values
static char commande_locale__msg__MsgAddProduct__FIELD_NAME__num_poste[] = "num_poste";
static char commande_locale__msg__MsgAddProduct__FIELD_NAME__num_produit[] = "num_produit";

static rosidl_runtime_c__type_description__Field commande_locale__msg__MsgAddProduct__FIELDS[] = {
  {
    {commande_locale__msg__MsgAddProduct__FIELD_NAME__num_poste, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__MsgAddProduct__FIELD_NAME__num_produit, 11, 11},
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
commande_locale__msg__MsgAddProduct__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__MsgAddProduct__TYPE_NAME, 33, 33},
      {commande_locale__msg__MsgAddProduct__FIELDS, 2, 2},
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
  "int32 num_produit";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__MsgAddProduct__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__MsgAddProduct__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__MsgAddProduct__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__MsgAddProduct__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
