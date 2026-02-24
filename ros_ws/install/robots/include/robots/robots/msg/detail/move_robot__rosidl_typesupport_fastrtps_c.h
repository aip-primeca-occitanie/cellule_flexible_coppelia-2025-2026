// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice
#ifndef ROBOTS__MSG__DETAIL__MOVE_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOTS__MSG__DETAIL__MOVE_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robots/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robots/msg/detail/move_robot__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
bool cdr_serialize_robots__msg__MoveRobot(
  const robots__msg__MoveRobot * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
bool cdr_deserialize_robots__msg__MoveRobot(
  eprosima::fastcdr::Cdr &,
  robots__msg__MoveRobot * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
size_t get_serialized_size_robots__msg__MoveRobot(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
size_t max_serialized_size_robots__msg__MoveRobot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
bool cdr_serialize_key_robots__msg__MoveRobot(
  const robots__msg__MoveRobot * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
size_t get_serialized_size_key_robots__msg__MoveRobot(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
size_t max_serialized_size_key_robots__msg__MoveRobot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robots
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robots, msg, MoveRobot)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTS__MSG__DETAIL__MOVE_ROBOT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
