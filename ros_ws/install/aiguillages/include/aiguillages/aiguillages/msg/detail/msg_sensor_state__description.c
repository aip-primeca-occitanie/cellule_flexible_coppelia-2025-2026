// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

#include "aiguillages/msg/detail/msg_sensor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_type_hash_t *
aiguillages__msg__MsgSensorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x39, 0x07, 0xb2, 0x0e, 0x6b, 0xd5, 0xdf,
      0xf8, 0x06, 0x68, 0x39, 0x41, 0x2d, 0x04, 0x95,
      0x8b, 0x76, 0xfe, 0x02, 0x2b, 0x61, 0xc9, 0xb9,
      0xf2, 0x6e, 0xe9, 0xf0, 0x62, 0x4b, 0xb0, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char aiguillages__msg__MsgSensorState__TYPE_NAME[] = "aiguillages/msg/MsgSensorState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char aiguillages__msg__MsgSensorState__FIELD_NAME__header[] = "header";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__id[] = "id";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__cpi[] = "cpi";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__cp[] = "cp";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__ps[] = "ps";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__dg[] = "dg";
static char aiguillages__msg__MsgSensorState__FIELD_NAME__dd[] = "dd";

static rosidl_runtime_c__type_description__Field aiguillages__msg__MsgSensorState__FIELDS[] = {
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__cpi, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__cp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      11,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__ps, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      25,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__dg, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      13,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aiguillages__msg__MsgSensorState__FIELD_NAME__dd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      13,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription aiguillages__msg__MsgSensorState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aiguillages__msg__MsgSensorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aiguillages__msg__MsgSensorState__TYPE_NAME, 30, 30},
      {aiguillages__msg__MsgSensorState__FIELDS, 7, 7},
    },
    {aiguillages__msg__MsgSensorState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "int32 id # identifiant de la navette\n"
  "bool[9] cpi # capteur de position index\\xc3\\xa9, situ\\xc3\\xa9 aux postes de travail\n"
  "bool[11] cp # capteur de position convoyeur\n"
  "bool[25] ps # capteur stop \n"
  "bool[13] dg # detection gauche Tableau de bool\\xc3\\xa9ens representant les capteurs physique dans CoppeliaSim\n"
  "bool[13] dd # detection droite Tableau de bool\\xc3\\xa9ens representant les capteurs physique dans CoppeliaSim ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aiguillages__msg__MsgSensorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aiguillages__msg__MsgSensorState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 410, 410},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aiguillages__msg__MsgSensorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aiguillages__msg__MsgSensorState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
