// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from commande_locale:srv/SrvAddProductPushBack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/srv/srv_add_product_push_back.h"


#ifndef COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__STRUCT_H_
#define COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SrvAddProductPushBack in the package commande_locale.
typedef struct commande_locale__srv__SrvAddProductPushBack_Request
{
  int32_t poste;
  int32_t produit;
} commande_locale__srv__SrvAddProductPushBack_Request;

// Struct for a sequence of commande_locale__srv__SrvAddProductPushBack_Request.
typedef struct commande_locale__srv__SrvAddProductPushBack_Request__Sequence
{
  commande_locale__srv__SrvAddProductPushBack_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__srv__SrvAddProductPushBack_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SrvAddProductPushBack in the package commande_locale.
typedef struct commande_locale__srv__SrvAddProductPushBack_Response
{
  bool success;
} commande_locale__srv__SrvAddProductPushBack_Response;

// Struct for a sequence of commande_locale__srv__SrvAddProductPushBack_Response.
typedef struct commande_locale__srv__SrvAddProductPushBack_Response__Sequence
{
  commande_locale__srv__SrvAddProductPushBack_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__srv__SrvAddProductPushBack_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  commande_locale__srv__SrvAddProductPushBack_Event__request__MAX_SIZE = 1
};
// response
enum
{
  commande_locale__srv__SrvAddProductPushBack_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SrvAddProductPushBack in the package commande_locale.
typedef struct commande_locale__srv__SrvAddProductPushBack_Event
{
  service_msgs__msg__ServiceEventInfo info;
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence request;
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence response;
} commande_locale__srv__SrvAddProductPushBack_Event;

// Struct for a sequence of commande_locale__srv__SrvAddProductPushBack_Event.
typedef struct commande_locale__srv__SrvAddProductPushBack_Event__Sequence
{
  commande_locale__srv__SrvAddProductPushBack_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} commande_locale__srv__SrvAddProductPushBack_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__STRUCT_H_
