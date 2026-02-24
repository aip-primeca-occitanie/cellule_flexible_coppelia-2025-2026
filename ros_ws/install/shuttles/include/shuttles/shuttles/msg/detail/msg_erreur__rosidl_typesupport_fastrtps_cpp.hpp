// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice

#ifndef SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "shuttles/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "shuttles/msg/detail/msg_erreur__struct.hpp"

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

namespace shuttles
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_serialize(
  const shuttles::msg::MsgErreur & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  shuttles::msg::MsgErreur & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
get_serialized_size(
  const shuttles::msg::MsgErreur & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
max_serialized_size_MsgErreur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_serialize_key(
  const shuttles::msg::MsgErreur & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
get_serialized_size_key(
  const shuttles::msg::MsgErreur & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
max_serialized_size_key_MsgErreur(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace shuttles

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, msg, MsgErreur)();

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__MSG__DETAIL__MSG_ERREUR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
