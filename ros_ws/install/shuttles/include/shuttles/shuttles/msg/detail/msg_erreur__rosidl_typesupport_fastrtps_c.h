// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice
#ifndef SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "shuttles/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shuttles/msg/detail/msg_erreur__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
bool cdr_serialize_shuttles__msg__MsgErreur(
  const shuttles__msg__MsgErreur * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
bool cdr_deserialize_shuttles__msg__MsgErreur(
  eprosima::fastcdr::Cdr &,
  shuttles__msg__MsgErreur * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
size_t get_serialized_size_shuttles__msg__MsgErreur(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
size_t max_serialized_size_shuttles__msg__MsgErreur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
bool cdr_serialize_key_shuttles__msg__MsgErreur(
  const shuttles__msg__MsgErreur * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
size_t get_serialized_size_key_shuttles__msg__MsgErreur(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
size_t max_serialized_size_key_shuttles__msg__MsgErreur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shuttles
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shuttles, msg, MsgErreur)();

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
