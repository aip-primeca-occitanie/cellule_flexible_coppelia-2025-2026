// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/DeplacerPieceMsg.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/deplacer_piece_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "commande_locale/msg/detail/deplacer_piece_msg__functions.h"
#include "commande_locale/msg/detail/deplacer_piece_msg__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace commande_locale
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_serialize(
  const commande_locale::msg::DeplacerPieceMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_robot
  cdr << ros_message.num_robot;

  // Member: positiona
  cdr << ros_message.positiona;

  // Member: positionb
  cdr << ros_message.positionb;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  commande_locale::msg::DeplacerPieceMsg & ros_message)
{
  // Member: num_robot
  cdr >> ros_message.num_robot;

  // Member: positiona
  cdr >> ros_message.positiona;

  // Member: positionb
  cdr >> ros_message.positionb;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
get_serialized_size(
  const commande_locale::msg::DeplacerPieceMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_robot
  {
    size_t item_size = sizeof(ros_message.num_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: positiona
  {
    size_t item_size = sizeof(ros_message.positiona);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: positionb
  {
    size_t item_size = sizeof(ros_message.positionb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
max_serialized_size_DeplacerPieceMsg(
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

  // Member: num_robot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: positiona
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: positionb
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
    using DataType = commande_locale::msg::DeplacerPieceMsg;
    is_plain =
      (
      offsetof(DataType, positionb) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
cdr_serialize_key(
  const commande_locale::msg::DeplacerPieceMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_robot
  cdr << ros_message.num_robot;

  // Member: positiona
  cdr << ros_message.positiona;

  // Member: positionb
  cdr << ros_message.positionb;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
get_serialized_size_key(
  const commande_locale::msg::DeplacerPieceMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_robot
  {
    size_t item_size = sizeof(ros_message.num_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: positiona
  {
    size_t item_size = sizeof(ros_message.positiona);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: positionb
  {
    size_t item_size = sizeof(ros_message.positionb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_commande_locale
max_serialized_size_key_DeplacerPieceMsg(
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

  // Member: num_robot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: positiona
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: positionb
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
    using DataType = commande_locale::msg::DeplacerPieceMsg;
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
  auto typed_message =
    static_cast<const commande_locale::msg::DeplacerPieceMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DeplacerPieceMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<commande_locale::msg::DeplacerPieceMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DeplacerPieceMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const commande_locale::msg::DeplacerPieceMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DeplacerPieceMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DeplacerPieceMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DeplacerPieceMsg__callbacks = {
  "commande_locale::msg",
  "DeplacerPieceMsg",
  _DeplacerPieceMsg__cdr_serialize,
  _DeplacerPieceMsg__cdr_deserialize,
  _DeplacerPieceMsg__get_serialized_size,
  _DeplacerPieceMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DeplacerPieceMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DeplacerPieceMsg__callbacks,
  get_message_typesupport_handle_function,
  &commande_locale__msg__DeplacerPieceMsg__get_type_hash,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description,
  &commande_locale__msg__DeplacerPieceMsg__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace commande_locale

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_commande_locale
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::DeplacerPieceMsg>()
{
  return &commande_locale::msg::typesupport_fastrtps_cpp::_DeplacerPieceMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, msg, DeplacerPieceMsg)() {
  return &commande_locale::msg::typesupport_fastrtps_cpp::_DeplacerPieceMsg__handle;
}

#ifdef __cplusplus
}
#endif
