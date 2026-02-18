// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from shuttles:srv/ShuttleId.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "shuttles/srv/detail/shuttle_id__functions.h"
#include "shuttles/srv/detail/shuttle_id__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace shuttles
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ShuttleId_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ShuttleId_Request_type_support_ids_t;

static const _ShuttleId_Request_type_support_ids_t _ShuttleId_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ShuttleId_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ShuttleId_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ShuttleId_Request_type_support_symbol_names_t _ShuttleId_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, srv, ShuttleId_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shuttles, srv, ShuttleId_Request)),
  }
};

typedef struct _ShuttleId_Request_type_support_data_t
{
  void * data[2];
} _ShuttleId_Request_type_support_data_t;

static _ShuttleId_Request_type_support_data_t _ShuttleId_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ShuttleId_Request_message_typesupport_map = {
  2,
  "shuttles",
  &_ShuttleId_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ShuttleId_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ShuttleId_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ShuttleId_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ShuttleId_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Request__get_type_hash,
  &shuttles__srv__ShuttleId_Request__get_type_description,
  &shuttles__srv__ShuttleId_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace shuttles

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shuttles::srv::ShuttleId_Request>()
{
  return &::shuttles::srv::rosidl_typesupport_cpp::ShuttleId_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, shuttles, srv, ShuttleId_Request)() {
  return get_message_type_support_handle<shuttles::srv::ShuttleId_Request>();
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
// #include "shuttles/srv/detail/shuttle_id__functions.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__struct.hpp"
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

namespace shuttles
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ShuttleId_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ShuttleId_Response_type_support_ids_t;

static const _ShuttleId_Response_type_support_ids_t _ShuttleId_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ShuttleId_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ShuttleId_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ShuttleId_Response_type_support_symbol_names_t _ShuttleId_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, srv, ShuttleId_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shuttles, srv, ShuttleId_Response)),
  }
};

typedef struct _ShuttleId_Response_type_support_data_t
{
  void * data[2];
} _ShuttleId_Response_type_support_data_t;

static _ShuttleId_Response_type_support_data_t _ShuttleId_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ShuttleId_Response_message_typesupport_map = {
  2,
  "shuttles",
  &_ShuttleId_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ShuttleId_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ShuttleId_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ShuttleId_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ShuttleId_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Response__get_type_hash,
  &shuttles__srv__ShuttleId_Response__get_type_description,
  &shuttles__srv__ShuttleId_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace shuttles

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shuttles::srv::ShuttleId_Response>()
{
  return &::shuttles::srv::rosidl_typesupport_cpp::ShuttleId_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, shuttles, srv, ShuttleId_Response)() {
  return get_message_type_support_handle<shuttles::srv::ShuttleId_Response>();
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
// #include "shuttles/srv/detail/shuttle_id__functions.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__struct.hpp"
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

namespace shuttles
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ShuttleId_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ShuttleId_Event_type_support_ids_t;

static const _ShuttleId_Event_type_support_ids_t _ShuttleId_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ShuttleId_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ShuttleId_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ShuttleId_Event_type_support_symbol_names_t _ShuttleId_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, srv, ShuttleId_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shuttles, srv, ShuttleId_Event)),
  }
};

typedef struct _ShuttleId_Event_type_support_data_t
{
  void * data[2];
} _ShuttleId_Event_type_support_data_t;

static _ShuttleId_Event_type_support_data_t _ShuttleId_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ShuttleId_Event_message_typesupport_map = {
  2,
  "shuttles",
  &_ShuttleId_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ShuttleId_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ShuttleId_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ShuttleId_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ShuttleId_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Event__get_type_hash,
  &shuttles__srv__ShuttleId_Event__get_type_description,
  &shuttles__srv__ShuttleId_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace shuttles

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<shuttles::srv::ShuttleId_Event>()
{
  return &::shuttles::srv::rosidl_typesupport_cpp::ShuttleId_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, shuttles, srv, ShuttleId_Event)() {
  return get_message_type_support_handle<shuttles::srv::ShuttleId_Event>();
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
// #include "shuttles/srv/detail/shuttle_id__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace shuttles
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ShuttleId_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ShuttleId_type_support_ids_t;

static const _ShuttleId_type_support_ids_t _ShuttleId_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ShuttleId_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ShuttleId_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ShuttleId_type_support_symbol_names_t _ShuttleId_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shuttles, srv, ShuttleId)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, shuttles, srv, ShuttleId)),
  }
};

typedef struct _ShuttleId_type_support_data_t
{
  void * data[2];
} _ShuttleId_type_support_data_t;

static _ShuttleId_type_support_data_t _ShuttleId_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ShuttleId_service_typesupport_map = {
  2,
  "shuttles",
  &_ShuttleId_service_typesupport_ids.typesupport_identifier[0],
  &_ShuttleId_service_typesupport_symbol_names.symbol_name[0],
  &_ShuttleId_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ShuttleId_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ShuttleId_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<shuttles::srv::ShuttleId_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<shuttles::srv::ShuttleId_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<shuttles::srv::ShuttleId_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<shuttles::srv::ShuttleId>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<shuttles::srv::ShuttleId>,
  &shuttles__srv__ShuttleId__get_type_hash,
  &shuttles__srv__ShuttleId__get_type_description,
  &shuttles__srv__ShuttleId__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace shuttles

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<shuttles::srv::ShuttleId>()
{
  return &::shuttles::srv::rosidl_typesupport_cpp::ShuttleId_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, shuttles, srv, ShuttleId)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<shuttles::srv::ShuttleId>();
}

#ifdef __cplusplus
}
#endif
