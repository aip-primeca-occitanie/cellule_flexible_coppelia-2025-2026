// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice
#include "shuttles/msg/detail/msg_shuttle_change__rosidl_typesupport_fastrtps_cpp.hpp"
#include "shuttles/msg/detail/msg_shuttle_change__functions.h"
#include "shuttles/msg/detail/msg_shuttle_change__struct.hpp"

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

namespace shuttles
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_serialize(
  const shuttles::msg::MsgShuttleChange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: handle
  cdr << ros_message.handle;

  // Member: argument
  cdr << ros_message.argument;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  shuttles::msg::MsgShuttleChange & ros_message)
{
  // Member: handle
  cdr >> ros_message.handle;

  // Member: argument
  cdr >> ros_message.argument;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
get_serialized_size(
  const shuttles::msg::MsgShuttleChange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: handle
  {
    size_t item_size = sizeof(ros_message.handle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: argument
  {
    size_t item_size = sizeof(ros_message.argument);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
max_serialized_size_MsgShuttleChange(
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

  // Member: handle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: argument
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
    using DataType = shuttles::msg::MsgShuttleChange;
    is_plain =
      (
      offsetof(DataType, argument) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
cdr_serialize_key(
  const shuttles::msg::MsgShuttleChange & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: handle
  cdr << ros_message.handle;

  // Member: argument
  cdr << ros_message.argument;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
get_serialized_size_key(
  const shuttles::msg::MsgShuttleChange & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: handle
  {
    size_t item_size = sizeof(ros_message.handle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: argument
  {
    size_t item_size = sizeof(ros_message.argument);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shuttles
max_serialized_size_key_MsgShuttleChange(
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

  // Member: handle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: argument
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
    using DataType = shuttles::msg::MsgShuttleChange;
    is_plain =
      (
      offsetof(DataType, argument) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MsgShuttleChange__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const shuttles::msg::MsgShuttleChange *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MsgShuttleChange__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<shuttles::msg::MsgShuttleChange *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MsgShuttleChange__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const shuttles::msg::MsgShuttleChange *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MsgShuttleChange__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MsgShuttleChange(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MsgShuttleChange__callbacks = {
  "shuttles::msg",
  "MsgShuttleChange",
  _MsgShuttleChange__cdr_serialize,
  _MsgShuttleChange__cdr_deserialize,
  _MsgShuttleChange__get_serialized_size,
  _MsgShuttleChange__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MsgShuttleChange__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MsgShuttleChange__callbacks,
  get_message_typesupport_handle_function,
  &shuttles__msg__MsgShuttleChange__get_type_hash,
  &shuttles__msg__MsgShuttleChange__get_type_description,
  &shuttles__msg__MsgShuttleChange__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace shuttles

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_shuttles
const rosidl_message_type_support_t *
get_message_type_support_handle<shuttles::msg::MsgShuttleChange>()
{
  return &shuttles::msg::typesupport_fastrtps_cpp::_MsgShuttleChange__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, msg, MsgShuttleChange)() {
  return &shuttles::msg::typesupport_fastrtps_cpp::_MsgShuttleChange__handle;
}

#ifdef __cplusplus
}
#endif
