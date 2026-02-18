// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/deplacer_piece_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "commande_locale/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "commande_locale/msg/detail/deplacer_piece_msg__struct.h"
#include "commande_locale/msg/detail/deplacer_piece_msg__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DeplacerPieceMsg__ros_msg_type = commande_locale__msg__DeplacerPieceMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_commande_locale__msg__DeplacerPieceMsg(
  const commande_locale__msg__DeplacerPieceMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: num_robot
  {
    cdr << ros_message->num_robot;
  }

  // Field name: positiona
  {
    cdr << ros_message->positiona;
  }

  // Field name: positionb
  {
    cdr << ros_message->positionb;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_deserialize_commande_locale__msg__DeplacerPieceMsg(
  eprosima::fastcdr::Cdr & cdr,
  commande_locale__msg__DeplacerPieceMsg * ros_message)
{
  // Field name: num_robot
  {
    cdr >> ros_message->num_robot;
  }

  // Field name: positiona
  {
    cdr >> ros_message->positiona;
  }

  // Field name: positionb
  {
    cdr >> ros_message->positionb;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_commande_locale__msg__DeplacerPieceMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeplacerPieceMsg__ros_msg_type * ros_message = static_cast<const _DeplacerPieceMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: num_robot
  {
    size_t item_size = sizeof(ros_message->num_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positiona
  {
    size_t item_size = sizeof(ros_message->positiona);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positionb
  {
    size_t item_size = sizeof(ros_message->positionb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_commande_locale__msg__DeplacerPieceMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: num_robot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: positiona
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: positionb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = commande_locale__msg__DeplacerPieceMsg;
    is_plain =
      (
      offsetof(DataType, positionb) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
bool cdr_serialize_key_commande_locale__msg__DeplacerPieceMsg(
  const commande_locale__msg__DeplacerPieceMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: num_robot
  {
    cdr << ros_message->num_robot;
  }

  // Field name: positiona
  {
    cdr << ros_message->positiona;
  }

  // Field name: positionb
  {
    cdr << ros_message->positionb;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t get_serialized_size_key_commande_locale__msg__DeplacerPieceMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeplacerPieceMsg__ros_msg_type * ros_message = static_cast<const _DeplacerPieceMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: num_robot
  {
    size_t item_size = sizeof(ros_message->num_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positiona
  {
    size_t item_size = sizeof(ros_message->positiona);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: positionb
  {
    size_t item_size = sizeof(ros_message->positionb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_commande_locale
size_t max_serialized_size_key_commande_locale__msg__DeplacerPieceMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: num_robot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: positiona
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: positionb
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = commande_locale__msg__DeplacerPieceMsg;
    is_plain =
      (
      offsetof(DataType, positionb) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DeplacerPieceMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const commande_locale__msg__DeplacerPieceMsg * ros_message = static_cast<const commande_locale__msg__DeplacerPieceMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_commande_locale__msg__DeplacerPieceMsg(ros_message, cdr);
}

static bool _DeplacerPieceMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  commande_locale__msg__DeplacerPieceMsg * ros_message = static_cast<commande_locale__msg__DeplacerPieceMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_commande_locale__msg__DeplacerPieceMsg(cdr, ros_message);
}

static uint32_t _DeplacerPieceMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_commande_locale__msg__DeplacerPieceMsg(
      untyped_ros_message, 0));
}

static size_t _DeplacerPieceMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_commande_locale__msg__DeplacerPieceMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DeplacerPieceMsg = {
  "commande_locale::msg",
  "DeplacerPieceMsg",
  _DeplacerPieceMsg__cdr_serialize,
  _DeplacerPieceMsg__cdr_deserialize,
  _DeplacerPieceMsg__get_serialized_size,
  _DeplacerPieceMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DeplacerPieceMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeplacerPieceMsg,
  get_message_typesupport_handle_function,
  &commande_locale__msg__DeplacerPieceMsg__get_type_hash,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, msg, DeplacerPieceMsg)() {
  return &_DeplacerPieceMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
