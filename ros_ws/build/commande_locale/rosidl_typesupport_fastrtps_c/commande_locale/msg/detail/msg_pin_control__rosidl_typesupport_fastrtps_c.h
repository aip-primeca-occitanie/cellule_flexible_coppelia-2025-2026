// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice
#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "commande_locale/msg/detail/msg_pin_control__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_commande_locale__msg__MsgPinControl(
  const commande_locale__msg__MsgPinControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_deserialize_commande_locale__msg__MsgPinControl(
  eprosima::fastcdr::Cdr &,
  commande_locale__msg__MsgPinControl * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_commande_locale__msg__MsgPinControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_commande_locale__msg__MsgPinControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_key_commande_locale__msg__MsgPinControl(
  const commande_locale__msg__MsgPinControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_key_commande_locale__msg__MsgPinControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_key_commande_locale__msg__MsgPinControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, msg, MsgPinControl)();

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_PIN_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
