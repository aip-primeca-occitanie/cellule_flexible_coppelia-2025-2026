// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from commande_locale:msg/Capteurs.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "commande_locale/msg/detail/capteurs__struct.h"
#include "commande_locale/msg/detail/capteurs__type_support.h"
#include "commande_locale/msg/detail/capteurs__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Capteurs_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Capteurs_type_support_ids_t;

static const _Capteurs_type_support_ids_t _Capteurs_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Capteurs_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Capteurs_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Capteurs_type_support_symbol_names_t _Capteurs_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, msg, Capteurs)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, msg, Capteurs)),
  }
};

typedef struct _Capteurs_type_support_data_t
{
  void * data[2];
} _Capteurs_type_support_data_t;

static _Capteurs_type_support_data_t _Capteurs_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Capteurs_message_typesupport_map = {
  2,
  "commande_locale",
  &_Capteurs_message_typesupport_ids.typesupport_identifier[0],
  &_Capteurs_message_typesupport_symbol_names.symbol_name[0],
  &_Capteurs_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Capteurs_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Capteurs_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &commande_locale__msg__Capteurs__get_type_hash,
  &commande_locale__msg__Capteurs__get_type_description,
  &commande_locale__msg__Capteurs__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, commande_locale, msg, Capteurs)() {
  return &::commande_locale::msg::rosidl_typesupport_c::Capteurs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
