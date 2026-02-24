// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice
#ifndef AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aiguillages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aiguillages/msg/detail/actionneurs__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
bool cdr_serialize_aiguillages__msg__Actionneurs(
  const aiguillages__msg__Actionneurs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
bool cdr_deserialize_aiguillages__msg__Actionneurs(
  eprosima::fastcdr::Cdr &,
  aiguillages__msg__Actionneurs * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
size_t get_serialized_size_aiguillages__msg__Actionneurs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
size_t max_serialized_size_aiguillages__msg__Actionneurs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
bool cdr_serialize_key_aiguillages__msg__Actionneurs(
  const aiguillages__msg__Actionneurs * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
size_t get_serialized_size_key_aiguillages__msg__Actionneurs(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
size_t max_serialized_size_key_aiguillages__msg__Actionneurs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aiguillages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aiguillages, msg, Actionneurs)();

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__ACTIONNEURS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
