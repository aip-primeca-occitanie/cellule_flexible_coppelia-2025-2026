// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shuttles:srv/ShuttleId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/srv/shuttle_id.h"


#ifndef SHUTTLES__SRV__DETAIL__SHUTTLE_ID__STRUCT_H_
#define SHUTTLES__SRV__DETAIL__SHUTTLE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ShuttleId in the package shuttles.
typedef struct shuttles__srv__ShuttleId_Request
{
  int32_t robot;
  int32_t position;
} shuttles__srv__ShuttleId_Request;

// Struct for a sequence of shuttles__srv__ShuttleId_Request.
typedef struct shuttles__srv__ShuttleId_Request__Sequence
{
  shuttles__srv__ShuttleId_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__srv__ShuttleId_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ShuttleId in the package shuttles.
typedef struct shuttles__srv__ShuttleId_Response
{
  int32_t id_shuttle;
} shuttles__srv__ShuttleId_Response;

// Struct for a sequence of shuttles__srv__ShuttleId_Response.
typedef struct shuttles__srv__ShuttleId_Response__Sequence
{
  shuttles__srv__ShuttleId_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__srv__ShuttleId_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  shuttles__srv__ShuttleId_Event__request__MAX_SIZE = 1
};
// response
enum
{
  shuttles__srv__ShuttleId_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ShuttleId in the package shuttles.
typedef struct shuttles__srv__ShuttleId_Event
{
  service_msgs__msg__ServiceEventInfo info;
  shuttles__srv__ShuttleId_Request__Sequence request;
  shuttles__srv__ShuttleId_Response__Sequence response;
} shuttles__srv__ShuttleId_Event;

// Struct for a sequence of shuttles__srv__ShuttleId_Event.
typedef struct shuttles__srv__ShuttleId_Event__Sequence
{
  shuttles__srv__ShuttleId_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shuttles__srv__ShuttleId_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHUTTLES__SRV__DETAIL__SHUTTLE_ID__STRUCT_H_
