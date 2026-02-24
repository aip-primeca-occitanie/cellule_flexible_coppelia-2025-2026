// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from commande_locale:srv/SrvAddProduct.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "commande_locale/srv/detail/srv_add_product__struct.h"
#include "commande_locale/srv/detail/srv_add_product__type_support.h"
#include "commande_locale/srv/detail/srv_add_product__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SrvAddProduct_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvAddProduct_Request_type_support_ids_t;

static const _SrvAddProduct_Request_type_support_ids_t _SrvAddProduct_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvAddProduct_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvAddProduct_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvAddProduct_Request_type_support_symbol_names_t _SrvAddProduct_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, srv, SrvAddProduct_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProduct_Request)),
  }
};

typedef struct _SrvAddProduct_Request_type_support_data_t
{
  void * data[2];
} _SrvAddProduct_Request_type_support_data_t;

static _SrvAddProduct_Request_type_support_data_t _SrvAddProduct_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvAddProduct_Request_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvAddProduct_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SrvAddProduct_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SrvAddProduct_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvAddProduct_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvAddProduct_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProduct_Request__get_type_hash,
  &commande_locale__srv__SrvAddProduct_Request__get_type_description,
  &commande_locale__srv__SrvAddProduct_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, commande_locale, srv, SrvAddProduct_Request)() {
  return &::commande_locale::srv::rosidl_typesupport_c::SrvAddProduct_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__type_support.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SrvAddProduct_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvAddProduct_Response_type_support_ids_t;

static const _SrvAddProduct_Response_type_support_ids_t _SrvAddProduct_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvAddProduct_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvAddProduct_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvAddProduct_Response_type_support_symbol_names_t _SrvAddProduct_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, srv, SrvAddProduct_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProduct_Response)),
  }
};

typedef struct _SrvAddProduct_Response_type_support_data_t
{
  void * data[2];
} _SrvAddProduct_Response_type_support_data_t;

static _SrvAddProduct_Response_type_support_data_t _SrvAddProduct_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvAddProduct_Response_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvAddProduct_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SrvAddProduct_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SrvAddProduct_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvAddProduct_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvAddProduct_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProduct_Response__get_type_hash,
  &commande_locale__srv__SrvAddProduct_Response__get_type_description,
  &commande_locale__srv__SrvAddProduct_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, commande_locale, srv, SrvAddProduct_Response)() {
  return &::commande_locale::srv::rosidl_typesupport_c::SrvAddProduct_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__type_support.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SrvAddProduct_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvAddProduct_Event_type_support_ids_t;

static const _SrvAddProduct_Event_type_support_ids_t _SrvAddProduct_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvAddProduct_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvAddProduct_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvAddProduct_Event_type_support_symbol_names_t _SrvAddProduct_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, srv, SrvAddProduct_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProduct_Event)),
  }
};

typedef struct _SrvAddProduct_Event_type_support_data_t
{
  void * data[2];
} _SrvAddProduct_Event_type_support_data_t;

static _SrvAddProduct_Event_type_support_data_t _SrvAddProduct_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvAddProduct_Event_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvAddProduct_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SrvAddProduct_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SrvAddProduct_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvAddProduct_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvAddProduct_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProduct_Event__get_type_hash,
  &commande_locale__srv__SrvAddProduct_Event__get_type_description,
  &commande_locale__srv__SrvAddProduct_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, commande_locale, srv, SrvAddProduct_Event)() {
  return &::commande_locale::srv::rosidl_typesupport_c::SrvAddProduct_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SrvAddProduct_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvAddProduct_type_support_ids_t;

static const _SrvAddProduct_type_support_ids_t _SrvAddProduct_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SrvAddProduct_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvAddProduct_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvAddProduct_type_support_symbol_names_t _SrvAddProduct_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, commande_locale, srv, SrvAddProduct)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProduct)),
  }
};

typedef struct _SrvAddProduct_type_support_data_t
{
  void * data[2];
} _SrvAddProduct_type_support_data_t;

static _SrvAddProduct_type_support_data_t _SrvAddProduct_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvAddProduct_service_typesupport_map = {
  2,
  "commande_locale",
  &_SrvAddProduct_service_typesupport_ids.typesupport_identifier[0],
  &_SrvAddProduct_service_typesupport_symbol_names.symbol_name[0],
  &_SrvAddProduct_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SrvAddProduct_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvAddProduct_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SrvAddProduct_Request_message_type_support_handle,
  &SrvAddProduct_Response_message_type_support_handle,
  &SrvAddProduct_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    commande_locale,
    srv,
    SrvAddProduct
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    commande_locale,
    srv,
    SrvAddProduct
  ),
  &commande_locale__srv__SrvAddProduct__get_type_hash,
  &commande_locale__srv__SrvAddProduct__get_type_description,
  &commande_locale__srv__SrvAddProduct__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace commande_locale

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, commande_locale, srv, SrvAddProduct)() {
  return &::commande_locale::srv::rosidl_typesupport_c::SrvAddProduct_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
