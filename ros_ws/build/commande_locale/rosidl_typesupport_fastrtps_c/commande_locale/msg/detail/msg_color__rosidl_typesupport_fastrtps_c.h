// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from commande_locale:msg/MsgColor.idl
// generated code does not contain a copyright notice
#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "commande_locale/msg/detail/msg_color__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_commande_locale__msg__MsgColor(
  const commande_locale__msg__MsgColor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_deserialize_commande_locale__msg__MsgColor(
  eprosima::fastcdr::Cdr &,
  commande_locale__msg__MsgColor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_commande_locale__msg__MsgColor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_commande_locale__msg__MsgColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_key_commande_locale__msg__MsgColor(
  const commande_locale__msg__MsgColor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_key_commande_locale__msg__MsgColor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_key_commande_locale__msg__MsgColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, msg, MsgColor)();

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_COLOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
