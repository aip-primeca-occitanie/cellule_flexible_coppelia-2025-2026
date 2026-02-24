// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice

#ifndef COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "commande_locale/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "commande_locale/msg/detail/robot_joints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace commande_locale
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_serialize(
  const commande_locale::msg::RobotJoints & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  commande_locale::msg::RobotJoints & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
get_serialized_size(
  const commande_locale::msg::RobotJoints & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
max_serialized_size_RobotJoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_serialize_key(
  const commande_locale::msg::RobotJoints & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
get_serialized_size_key(
  const commande_locale::msg::RobotJoints & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
max_serialized_size_key_RobotJoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, msg, RobotJoints)();

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__ROBOT_JOINTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
