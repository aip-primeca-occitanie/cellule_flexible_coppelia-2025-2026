// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/MsgColor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "commande_locale/msg/detail/msg_color__functions.h"
#include "commande_locale/msg/detail/msg_color__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _MsgColor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MsgColor_type_support_ids_t;

static const _MsgColor_type_support_ids_t _MsgColor_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MsgColor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MsgColor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MsgColor_type_support_symbol_names_t _MsgColor_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, msg, MsgColor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, msg, MsgColor)),
  }
};

typedef struct _MsgColor_type_support_data_t
{
  void * data[2];
} _MsgColor_type_support_data_t;

static _MsgColor_type_support_data_t _MsgColor_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MsgColor_message_typesupport_map = {
  2,
  "commande_locale",
  &_MsgColor_message_typesupport_ids.typesupport_identifier[0],
  &_MsgColor_message_typesupport_symbol_names.symbol_name[0],
  &_MsgColor_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MsgColor_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MsgColor_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &commande_locale__msg__MsgColor__get_type_hash,
  &commande_locale__msg__MsgColor__get_type_description,
  &commande_locale__msg__MsgColor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace commande_locale

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::msg::MsgColor>()
{
  return &::commande_locale::msg::rosidl_typesupport_cpp::MsgColor_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, commande_locale, msg, MsgColor)() {
  return get_message_type_support_handle<commande_locale::msg::MsgColor>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
