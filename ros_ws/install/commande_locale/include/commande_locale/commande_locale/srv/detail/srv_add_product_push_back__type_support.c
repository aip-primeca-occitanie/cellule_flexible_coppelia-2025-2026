// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from commande_locale:srv/SrvAddProductPushBack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "commande_locale/srv/detail/srv_add_product_push_back__rosidl_typesupport_introspection_c.h"
#include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "commande_locale/srv/detail/srv_add_product_push_back__functions.h"
#include "commande_locale/srv/detail/srv_add_product_push_back__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  commande_locale__srv__SrvAddProductPushBack_Request__init(message_memory);
}

void commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_fini_function(void * message_memory)
{
  commande_locale__srv__SrvAddProductPushBack_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_member_array[2] = {
  {
    "poste",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__srv__SrvAddProductPushBack_Request, poste),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "produit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__srv__SrvAddProductPushBack_Request, produit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_members = {
  "commande_locale__srv",  // message namespace
  "SrvAddProductPushBack_Request",  // message name
  2,  // number of fields
  sizeof(commande_locale__srv__SrvAddProductPushBack_Request),
  false,  // has_any_key_member_
  commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_member_array,  // message members
  commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle = {
  0,
  &commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProductPushBack_Request__get_type_hash,
  &commande_locale__srv__SrvAddProductPushBack_Request__get_type_description,
  &commande_locale__srv__SrvAddProductPushBack_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Request)() {
  if (!commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle.typesupport_identifier) {
    commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__rosidl_typesupport_introspection_c.h"
// already included above
// #include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__functions.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  commande_locale__srv__SrvAddProductPushBack_Response__init(message_memory);
}

void commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_fini_function(void * message_memory)
{
  commande_locale__srv__SrvAddProductPushBack_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__srv__SrvAddProductPushBack_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_members = {
  "commande_locale__srv",  // message namespace
  "SrvAddProductPushBack_Response",  // message name
  1,  // number of fields
  sizeof(commande_locale__srv__SrvAddProductPushBack_Response),
  false,  // has_any_key_member_
  commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_member_array,  // message members
  commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle = {
  0,
  &commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProductPushBack_Response__get_type_hash,
  &commande_locale__srv__SrvAddProductPushBack_Response__get_type_description,
  &commande_locale__srv__SrvAddProductPushBack_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Response)() {
  if (!commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle.typesupport_identifier) {
    commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__rosidl_typesupport_introspection_c.h"
// already included above
// #include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__functions.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "commande_locale/srv/srv_add_product_push_back.h"
// Member `request`
// Member `response`
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  commande_locale__srv__SrvAddProductPushBack_Event__init(message_memory);
}

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_fini_function(void * message_memory)
{
  commande_locale__srv__SrvAddProductPushBack_Event__fini(message_memory);
}

size_t commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__size_function__SrvAddProductPushBack_Event__request(
  const void * untyped_member)
{
  const commande_locale__srv__SrvAddProductPushBack_Request__Sequence * member =
    (const commande_locale__srv__SrvAddProductPushBack_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__request(
  const void * untyped_member, size_t index)
{
  const commande_locale__srv__SrvAddProductPushBack_Request__Sequence * member =
    (const commande_locale__srv__SrvAddProductPushBack_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__request(
  void * untyped_member, size_t index)
{
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence * member =
    (commande_locale__srv__SrvAddProductPushBack_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__fetch_function__SrvAddProductPushBack_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const commande_locale__srv__SrvAddProductPushBack_Request * item =
    ((const commande_locale__srv__SrvAddProductPushBack_Request *)
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__request(untyped_member, index));
  commande_locale__srv__SrvAddProductPushBack_Request * value =
    (commande_locale__srv__SrvAddProductPushBack_Request *)(untyped_value);
  *value = *item;
}

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__assign_function__SrvAddProductPushBack_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  commande_locale__srv__SrvAddProductPushBack_Request * item =
    ((commande_locale__srv__SrvAddProductPushBack_Request *)
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__request(untyped_member, index));
  const commande_locale__srv__SrvAddProductPushBack_Request * value =
    (const commande_locale__srv__SrvAddProductPushBack_Request *)(untyped_value);
  *item = *value;
}

bool commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__resize_function__SrvAddProductPushBack_Event__request(
  void * untyped_member, size_t size)
{
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence * member =
    (commande_locale__srv__SrvAddProductPushBack_Request__Sequence *)(untyped_member);
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence__fini(member);
  return commande_locale__srv__SrvAddProductPushBack_Request__Sequence__init(member, size);
}

size_t commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__size_function__SrvAddProductPushBack_Event__response(
  const void * untyped_member)
{
  const commande_locale__srv__SrvAddProductPushBack_Response__Sequence * member =
    (const commande_locale__srv__SrvAddProductPushBack_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__response(
  const void * untyped_member, size_t index)
{
  const commande_locale__srv__SrvAddProductPushBack_Response__Sequence * member =
    (const commande_locale__srv__SrvAddProductPushBack_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__response(
  void * untyped_member, size_t index)
{
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence * member =
    (commande_locale__srv__SrvAddProductPushBack_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__fetch_function__SrvAddProductPushBack_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const commande_locale__srv__SrvAddProductPushBack_Response * item =
    ((const commande_locale__srv__SrvAddProductPushBack_Response *)
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__response(untyped_member, index));
  commande_locale__srv__SrvAddProductPushBack_Response * value =
    (commande_locale__srv__SrvAddProductPushBack_Response *)(untyped_value);
  *value = *item;
}

void commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__assign_function__SrvAddProductPushBack_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  commande_locale__srv__SrvAddProductPushBack_Response * item =
    ((commande_locale__srv__SrvAddProductPushBack_Response *)
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__response(untyped_member, index));
  const commande_locale__srv__SrvAddProductPushBack_Response * value =
    (const commande_locale__srv__SrvAddProductPushBack_Response *)(untyped_value);
  *item = *value;
}

bool commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__resize_function__SrvAddProductPushBack_Event__response(
  void * untyped_member, size_t size)
{
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence * member =
    (commande_locale__srv__SrvAddProductPushBack_Response__Sequence *)(untyped_member);
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence__fini(member);
  return commande_locale__srv__SrvAddProductPushBack_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(commande_locale__srv__SrvAddProductPushBack_Event, info),  // bytes offset in struct
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
    offsetof(commande_locale__srv__SrvAddProductPushBack_Event, request),  // bytes offset in struct
    NULL,  // default value
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__size_function__SrvAddProductPushBack_Event__request,  // size() function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__request,  // get_const(index) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__request,  // get(index) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__fetch_function__SrvAddProductPushBack_Event__request,  // fetch(index, &value) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__assign_function__SrvAddProductPushBack_Event__request,  // assign(index, value) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__resize_function__SrvAddProductPushBack_Event__request  // resize(index) function pointer
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
    offsetof(commande_locale__srv__SrvAddProductPushBack_Event, response),  // bytes offset in struct
    NULL,  // default value
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__size_function__SrvAddProductPushBack_Event__response,  // size() function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_const_function__SrvAddProductPushBack_Event__response,  // get_const(index) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__get_function__SrvAddProductPushBack_Event__response,  // get(index) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__fetch_function__SrvAddProductPushBack_Event__response,  // fetch(index, &value) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__assign_function__SrvAddProductPushBack_Event__response,  // assign(index, value) function pointer
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__resize_function__SrvAddProductPushBack_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_members = {
  "commande_locale__srv",  // message namespace
  "SrvAddProductPushBack_Event",  // message name
  3,  // number of fields
  sizeof(commande_locale__srv__SrvAddProductPushBack_Event),
  false,  // has_any_key_member_
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_member_array,  // message members
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_type_support_handle = {
  0,
  &commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_members,
  get_message_typesupport_handle_function,
  &commande_locale__srv__SrvAddProductPushBack_Event__get_type_hash,
  &commande_locale__srv__SrvAddProductPushBack_Event__get_type_description,
  &commande_locale__srv__SrvAddProductPushBack_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Event)() {
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Request)();
  commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Response)();
  if (!commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_type_support_handle.typesupport_identifier) {
    commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "commande_locale/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_members = {
  "commande_locale__srv",  // service namespace
  "SrvAddProductPushBack",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle,
  NULL,  // response message
  // commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle
  NULL  // event_message
  // commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle
};


static rosidl_service_type_support_t commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_type_support_handle = {
  0,
  &commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_members,
  get_service_typesupport_handle_function,
  &commande_locale__srv__SrvAddProductPushBack_Request__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Request_message_type_support_handle,
  &commande_locale__srv__SrvAddProductPushBack_Response__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Response_message_type_support_handle,
  &commande_locale__srv__SrvAddProductPushBack_Event__rosidl_typesupport_introspection_c__SrvAddProductPushBack_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    commande_locale,
    srv,
    SrvAddProductPushBack
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    commande_locale,
    srv,
    SrvAddProductPushBack
  ),
  &commande_locale__srv__SrvAddProductPushBack__get_type_hash,
  &commande_locale__srv__SrvAddProductPushBack__get_type_description,
  &commande_locale__srv__SrvAddProductPushBack__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_commande_locale
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack)(void) {
  if (!commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_type_support_handle.typesupport_identifier) {
    commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, commande_locale, srv, SrvAddProductPushBack_Event)()->data;
  }

  return &commande_locale__srv__detail__srv_add_product_push_back__rosidl_typesupport_introspection_c__SrvAddProductPushBack_service_type_support_handle;
}
