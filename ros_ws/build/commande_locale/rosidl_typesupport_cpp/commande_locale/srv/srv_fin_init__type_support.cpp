// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from commande_locale:srv/SrvFinInit.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "commande_locale/srv/detail/srv_fin_init__functions.h"
#include "commande_locale/srv/detail/srv_fin_init__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvFinInit_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvFinInit_Request_type_support_ids_t;

static const _SrvFinInit_Request_type_support_ids_t _SrvFinInit_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvFinInit_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvFinInit_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvFinInit_Request_type_support_symbol_names_t _SrvFinInit_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, srv, SrvFinInit_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, srv, SrvFinInit_Request)),
  }
};

typedef struct _SrvFinInit_Request_type_support_data_t
{
  void * data[2];
} _SrvFinInit_Request_type_support_data_t;

static _SrvFinInit_Request_type_support_data_t _SrvFinInit_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvFinInit_Request_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvFinInit_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SrvFinInit_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SrvFinInit_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvFinInit_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvFinInit_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &commande_locale__srv__SrvFinInit_Request__get_type_hash,
  &commande_locale__srv__SrvFinInit_Request__get_type_description,
  &commande_locale__srv__SrvFinInit_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::srv::SrvFinInit_Request>()
{
  return &::commande_locale::srv::rosidl_typesupport_cpp::SrvFinInit_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, commande_locale, srv, SrvFinInit_Request)() {
  return get_message_type_support_handle<commande_locale::srv::SrvFinInit_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_fin_init__functions.h"
// already included above
// #include "commande_locale/srv/detail/srv_fin_init__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvFinInit_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvFinInit_Response_type_support_ids_t;

static const _SrvFinInit_Response_type_support_ids_t _SrvFinInit_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvFinInit_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvFinInit_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvFinInit_Response_type_support_symbol_names_t _SrvFinInit_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, srv, SrvFinInit_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, srv, SrvFinInit_Response)),
  }
};

typedef struct _SrvFinInit_Response_type_support_data_t
{
  void * data[2];
} _SrvFinInit_Response_type_support_data_t;

static _SrvFinInit_Response_type_support_data_t _SrvFinInit_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvFinInit_Response_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvFinInit_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SrvFinInit_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SrvFinInit_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvFinInit_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvFinInit_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &commande_locale__srv__SrvFinInit_Response__get_type_hash,
  &commande_locale__srv__SrvFinInit_Response__get_type_description,
  &commande_locale__srv__SrvFinInit_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::srv::SrvFinInit_Response>()
{
  return &::commande_locale::srv::rosidl_typesupport_cpp::SrvFinInit_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, commande_locale, srv, SrvFinInit_Response)() {
  return get_message_type_support_handle<commande_locale::srv::SrvFinInit_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "commande_locale/srv/detail/srv_fin_init__functions.h"
// already included above
// #include "commande_locale/srv/detail/srv_fin_init__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvFinInit_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvFinInit_Event_type_support_ids_t;

static const _SrvFinInit_Event_type_support_ids_t _SrvFinInit_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvFinInit_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvFinInit_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvFinInit_Event_type_support_symbol_names_t _SrvFinInit_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, srv, SrvFinInit_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, srv, SrvFinInit_Event)),
  }
};

typedef struct _SrvFinInit_Event_type_support_data_t
{
  void * data[2];
} _SrvFinInit_Event_type_support_data_t;

static _SrvFinInit_Event_type_support_data_t _SrvFinInit_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvFinInit_Event_message_typesupport_map = {
  2,
  "commande_locale",
  &_SrvFinInit_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SrvFinInit_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SrvFinInit_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SrvFinInit_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvFinInit_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &commande_locale__srv__SrvFinInit_Event__get_type_hash,
  &commande_locale__srv__SrvFinInit_Event__get_type_description,
  &commande_locale__srv__SrvFinInit_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<commande_locale::srv::SrvFinInit_Event>()
{
  return &::commande_locale::srv::rosidl_typesupport_cpp::SrvFinInit_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, commande_locale, srv, SrvFinInit_Event)() {
  return get_message_type_support_handle<commande_locale::srv::SrvFinInit_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "commande_locale/srv/detail/srv_fin_init__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace commande_locale
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SrvFinInit_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SrvFinInit_type_support_ids_t;

static const _SrvFinInit_type_support_ids_t _SrvFinInit_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SrvFinInit_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SrvFinInit_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SrvFinInit_type_support_symbol_names_t _SrvFinInit_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, commande_locale, srv, SrvFinInit)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, commande_locale, srv, SrvFinInit)),
  }
};

typedef struct _SrvFinInit_type_support_data_t
{
  void * data[2];
} _SrvFinInit_type_support_data_t;

static _SrvFinInit_type_support_data_t _SrvFinInit_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SrvFinInit_service_typesupport_map = {
  2,
  "commande_locale",
  &_SrvFinInit_service_typesupport_ids.typesupport_identifier[0],
  &_SrvFinInit_service_typesupport_symbol_names.symbol_name[0],
  &_SrvFinInit_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SrvFinInit_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SrvFinInit_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<commande_locale::srv::SrvFinInit_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<commande_locale::srv::SrvFinInit_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<commande_locale::srv::SrvFinInit_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<commande_locale::srv::SrvFinInit>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<commande_locale::srv::SrvFinInit>,
  &commande_locale__srv__SrvFinInit__get_type_hash,
  &commande_locale__srv__SrvFinInit__get_type_description,
  &commande_locale__srv__SrvFinInit__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<commande_locale::srv::SrvFinInit>()
{
  return &::commande_locale::srv::rosidl_typesupport_cpp::SrvFinInit_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, commande_locale, srv, SrvFinInit)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<commande_locale::srv::SrvFinInit>();
}

#ifdef __cplusplus
}
#endif
