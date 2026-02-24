// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shuttles:srv/ShuttleId.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shuttles/srv/detail/shuttle_id__rosidl_typesupport_introspection_c.h"
#include "shuttles/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shuttles/srv/detail/shuttle_id__functions.h"
#include "shuttles/srv/detail/shuttle_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shuttles__srv__ShuttleId_Request__init(message_memory);
}

void shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_fini_function(void * message_memory)
{
  shuttles__srv__ShuttleId_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_member_array[2] = {
  {
    "robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Request, robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_members = {
  "shuttles__srv",  // message namespace
  "ShuttleId_Request",  // message name
  2,  // number of fields
  sizeof(shuttles__srv__ShuttleId_Request),
  false,  // has_any_key_member_
  shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_member_array,  // message members
  shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle = {
  0,
  &shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_members,
  get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Request__get_type_hash,
  &shuttles__srv__ShuttleId_Request__get_type_description,
  &shuttles__srv__ShuttleId_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shuttles
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Request)() {
  if (!shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle.typesupport_identifier) {
    shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "shuttles/srv/detail/shuttle_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "shuttles/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__functions.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shuttles__srv__ShuttleId_Response__init(message_memory);
}

void shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_fini_function(void * message_memory)
{
  shuttles__srv__ShuttleId_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_member_array[1] = {
  {
    "id_shuttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Response, id_shuttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_members = {
  "shuttles__srv",  // message namespace
  "ShuttleId_Response",  // message name
  1,  // number of fields
  sizeof(shuttles__srv__ShuttleId_Response),
  false,  // has_any_key_member_
  shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_member_array,  // message members
  shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle = {
  0,
  &shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_members,
  get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Response__get_type_hash,
  &shuttles__srv__ShuttleId_Response__get_type_description,
  &shuttles__srv__ShuttleId_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shuttles
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Response)() {
  if (!shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle.typesupport_identifier) {
    shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "shuttles/srv/detail/shuttle_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "shuttles/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__functions.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "shuttles/srv/shuttle_id.h"
// Member `request`
// Member `response`
// already included above
// #include "shuttles/srv/detail/shuttle_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shuttles__srv__ShuttleId_Event__init(message_memory);
}

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_fini_function(void * message_memory)
{
  shuttles__srv__ShuttleId_Event__fini(message_memory);
}

size_t shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__size_function__ShuttleId_Event__request(
  const void * untyped_member)
{
  const shuttles__srv__ShuttleId_Request__Sequence * member =
    (const shuttles__srv__ShuttleId_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__request(
  const void * untyped_member, size_t index)
{
  const shuttles__srv__ShuttleId_Request__Sequence * member =
    (const shuttles__srv__ShuttleId_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__request(
  void * untyped_member, size_t index)
{
  shuttles__srv__ShuttleId_Request__Sequence * member =
    (shuttles__srv__ShuttleId_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__fetch_function__ShuttleId_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shuttles__srv__ShuttleId_Request * item =
    ((const shuttles__srv__ShuttleId_Request *)
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__request(untyped_member, index));
  shuttles__srv__ShuttleId_Request * value =
    (shuttles__srv__ShuttleId_Request *)(untyped_value);
  *value = *item;
}

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__assign_function__ShuttleId_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shuttles__srv__ShuttleId_Request * item =
    ((shuttles__srv__ShuttleId_Request *)
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__request(untyped_member, index));
  const shuttles__srv__ShuttleId_Request * value =
    (const shuttles__srv__ShuttleId_Request *)(untyped_value);
  *item = *value;
}

bool shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__resize_function__ShuttleId_Event__request(
  void * untyped_member, size_t size)
{
  shuttles__srv__ShuttleId_Request__Sequence * member =
    (shuttles__srv__ShuttleId_Request__Sequence *)(untyped_member);
  shuttles__srv__ShuttleId_Request__Sequence__fini(member);
  return shuttles__srv__ShuttleId_Request__Sequence__init(member, size);
}

size_t shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__size_function__ShuttleId_Event__response(
  const void * untyped_member)
{
  const shuttles__srv__ShuttleId_Response__Sequence * member =
    (const shuttles__srv__ShuttleId_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__response(
  const void * untyped_member, size_t index)
{
  const shuttles__srv__ShuttleId_Response__Sequence * member =
    (const shuttles__srv__ShuttleId_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__response(
  void * untyped_member, size_t index)
{
  shuttles__srv__ShuttleId_Response__Sequence * member =
    (shuttles__srv__ShuttleId_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__fetch_function__ShuttleId_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shuttles__srv__ShuttleId_Response * item =
    ((const shuttles__srv__ShuttleId_Response *)
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__response(untyped_member, index));
  shuttles__srv__ShuttleId_Response * value =
    (shuttles__srv__ShuttleId_Response *)(untyped_value);
  *value = *item;
}

void shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__assign_function__ShuttleId_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shuttles__srv__ShuttleId_Response * item =
    ((shuttles__srv__ShuttleId_Response *)
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__response(untyped_member, index));
  const shuttles__srv__ShuttleId_Response * value =
    (const shuttles__srv__ShuttleId_Response *)(untyped_value);
  *item = *value;
}

bool shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__resize_function__ShuttleId_Event__response(
  void * untyped_member, size_t size)
{
  shuttles__srv__ShuttleId_Response__Sequence * member =
    (shuttles__srv__ShuttleId_Response__Sequence *)(untyped_member);
  shuttles__srv__ShuttleId_Response__Sequence__fini(member);
  return shuttles__srv__ShuttleId_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Event, request),  // bytes offset in struct
    NULL,  // default value
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__size_function__ShuttleId_Event__request,  // size() function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__request,  // get_const(index) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__request,  // get(index) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__fetch_function__ShuttleId_Event__request,  // fetch(index, &value) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__assign_function__ShuttleId_Event__request,  // assign(index, value) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__resize_function__ShuttleId_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(shuttles__srv__ShuttleId_Event, response),  // bytes offset in struct
    NULL,  // default value
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__size_function__ShuttleId_Event__response,  // size() function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_const_function__ShuttleId_Event__response,  // get_const(index) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__get_function__ShuttleId_Event__response,  // get(index) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__fetch_function__ShuttleId_Event__response,  // fetch(index, &value) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__assign_function__ShuttleId_Event__response,  // assign(index, value) function pointer
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__resize_function__ShuttleId_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_members = {
  "shuttles__srv",  // message namespace
  "ShuttleId_Event",  // message name
  3,  // number of fields
  sizeof(shuttles__srv__ShuttleId_Event),
  false,  // has_any_key_member_
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_member_array,  // message members
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_type_support_handle = {
  0,
  &shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_members,
  get_message_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Event__get_type_hash,
  &shuttles__srv__ShuttleId_Event__get_type_description,
  &shuttles__srv__ShuttleId_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shuttles
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Event)() {
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Request)();
  shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Response)();
  if (!shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_type_support_handle.typesupport_identifier) {
    shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "shuttles/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "shuttles/srv/detail/shuttle_id__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_members = {
  "shuttles__srv",  // service namespace
  "ShuttleId",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle,
  NULL,  // response message
  // shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle
  NULL  // event_message
  // shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle
};


static rosidl_service_type_support_t shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_type_support_handle = {
  0,
  &shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_members,
  get_service_typesupport_handle_function,
  &shuttles__srv__ShuttleId_Request__rosidl_typesupport_introspection_c__ShuttleId_Request_message_type_support_handle,
  &shuttles__srv__ShuttleId_Response__rosidl_typesupport_introspection_c__ShuttleId_Response_message_type_support_handle,
  &shuttles__srv__ShuttleId_Event__rosidl_typesupport_introspection_c__ShuttleId_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    shuttles,
    srv,
    ShuttleId
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    shuttles,
    srv,
    ShuttleId
  ),
  &shuttles__srv__ShuttleId__get_type_hash,
  &shuttles__srv__ShuttleId__get_type_description,
  &shuttles__srv__ShuttleId__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shuttles
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId)(void) {
  if (!shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_type_support_handle.typesupport_identifier) {
    shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shuttles, srv, ShuttleId_Event)()->data;
  }

  return &shuttles__srv__detail__shuttle_id__rosidl_typesupport_introspection_c__ShuttleId_service_type_support_handle;
}
