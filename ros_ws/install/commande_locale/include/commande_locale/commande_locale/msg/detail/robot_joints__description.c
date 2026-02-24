// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

#include "commande_locale/msg/detail/robot_joints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__RobotJoints__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xb2, 0xcd, 0xe3, 0xf6, 0xf6, 0xa8, 0x98,
      0x2b, 0x9c, 0xc8, 0xdc, 0xc6, 0x41, 0xba, 0x3e,
      0xaf, 0x6b, 0x56, 0x66, 0xca, 0x1f, 0xdb, 0xa3,
      0xf2, 0x58, 0xfa, 0x45, 0xee, 0xa9, 0x2f, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char commande_locale__msg__RobotJoints__TYPE_NAME[] = "commande_locale/msg/RobotJoints";

// Define type names, field names, and default values
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint1[] = "joint1";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint2[] = "joint2";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint3[] = "joint3";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint4[] = "joint4";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint5[] = "joint5";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint6[] = "joint6";
static char commande_locale__msg__RobotJoints__FIELD_NAME__joint7[] = "joint7";
static char commande_locale__msg__RobotJoints__FIELD_NAME__num_robot[] = "num_robot";

static rosidl_runtime_c__type_description__Field commande_locale__msg__RobotJoints__FIELDS[] = {
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint5, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint6, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__joint7, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {commande_locale__msg__RobotJoints__FIELD_NAME__num_robot, 9, 9},
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
commande_locale__msg__RobotJoints__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {commande_locale__msg__RobotJoints__TYPE_NAME, 31, 31},
      {commande_locale__msg__RobotJoints__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 joint1\n"
  "int32 joint2\n"
  "int32 joint3\n"
  "int32 joint4\n"
  "int32 joint5\n"
  "int32 joint6\n"
  "int32 joint7\n"
  "int32 num_robot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__RobotJoints__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {commande_locale__msg__RobotJoints__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__RobotJoints__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *commande_locale__msg__RobotJoints__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
