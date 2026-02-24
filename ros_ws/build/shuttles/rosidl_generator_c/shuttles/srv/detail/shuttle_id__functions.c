// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shuttles:srv/ShuttleId.idl
// generated code does not contain a copyright notice
#include "shuttles/srv/detail/shuttle_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
shuttles__srv__ShuttleId_Request__init(shuttles__srv__ShuttleId_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot
  // position
  return true;
}

void
shuttles__srv__ShuttleId_Request__fini(shuttles__srv__ShuttleId_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot
  // position
}

bool
shuttles__srv__ShuttleId_Request__are_equal(const shuttles__srv__ShuttleId_Request * lhs, const shuttles__srv__ShuttleId_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot
  if (lhs->robot != rhs->robot) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Request__copy(
  const shuttles__srv__ShuttleId_Request * input,
  shuttles__srv__ShuttleId_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot
  output->robot = input->robot;
  // position
  output->position = input->position;
  return true;
}

shuttles__srv__ShuttleId_Request *
shuttles__srv__ShuttleId_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Request * msg = (shuttles__srv__ShuttleId_Request *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__srv__ShuttleId_Request));
  bool success = shuttles__srv__ShuttleId_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__srv__ShuttleId_Request__destroy(shuttles__srv__ShuttleId_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__srv__ShuttleId_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__srv__ShuttleId_Request__Sequence__init(shuttles__srv__ShuttleId_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Request * data = NULL;

  if (size) {
    data = (shuttles__srv__ShuttleId_Request *)allocator.zero_allocate(size, sizeof(shuttles__srv__ShuttleId_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__srv__ShuttleId_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__srv__ShuttleId_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shuttles__srv__ShuttleId_Request__Sequence__fini(shuttles__srv__ShuttleId_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shuttles__srv__ShuttleId_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shuttles__srv__ShuttleId_Request__Sequence *
shuttles__srv__ShuttleId_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Request__Sequence * array = (shuttles__srv__ShuttleId_Request__Sequence *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__srv__ShuttleId_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__srv__ShuttleId_Request__Sequence__destroy(shuttles__srv__ShuttleId_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__srv__ShuttleId_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__srv__ShuttleId_Request__Sequence__are_equal(const shuttles__srv__ShuttleId_Request__Sequence * lhs, const shuttles__srv__ShuttleId_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__srv__ShuttleId_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Request__Sequence__copy(
  const shuttles__srv__ShuttleId_Request__Sequence * input,
  shuttles__srv__ShuttleId_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__srv__ShuttleId_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__srv__ShuttleId_Request * data =
      (shuttles__srv__ShuttleId_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__srv__ShuttleId_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__srv__ShuttleId_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__srv__ShuttleId_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
shuttles__srv__ShuttleId_Response__init(shuttles__srv__ShuttleId_Response * msg)
{
  if (!msg) {
    return false;
  }
  // id_shuttle
  return true;
}

void
shuttles__srv__ShuttleId_Response__fini(shuttles__srv__ShuttleId_Response * msg)
{
  if (!msg) {
    return;
  }
  // id_shuttle
}

bool
shuttles__srv__ShuttleId_Response__are_equal(const shuttles__srv__ShuttleId_Response * lhs, const shuttles__srv__ShuttleId_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id_shuttle
  if (lhs->id_shuttle != rhs->id_shuttle) {
    return false;
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Response__copy(
  const shuttles__srv__ShuttleId_Response * input,
  shuttles__srv__ShuttleId_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // id_shuttle
  output->id_shuttle = input->id_shuttle;
  return true;
}

shuttles__srv__ShuttleId_Response *
shuttles__srv__ShuttleId_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Response * msg = (shuttles__srv__ShuttleId_Response *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__srv__ShuttleId_Response));
  bool success = shuttles__srv__ShuttleId_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__srv__ShuttleId_Response__destroy(shuttles__srv__ShuttleId_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__srv__ShuttleId_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__srv__ShuttleId_Response__Sequence__init(shuttles__srv__ShuttleId_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Response * data = NULL;

  if (size) {
    data = (shuttles__srv__ShuttleId_Response *)allocator.zero_allocate(size, sizeof(shuttles__srv__ShuttleId_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__srv__ShuttleId_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__srv__ShuttleId_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shuttles__srv__ShuttleId_Response__Sequence__fini(shuttles__srv__ShuttleId_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shuttles__srv__ShuttleId_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shuttles__srv__ShuttleId_Response__Sequence *
shuttles__srv__ShuttleId_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Response__Sequence * array = (shuttles__srv__ShuttleId_Response__Sequence *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__srv__ShuttleId_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__srv__ShuttleId_Response__Sequence__destroy(shuttles__srv__ShuttleId_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__srv__ShuttleId_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__srv__ShuttleId_Response__Sequence__are_equal(const shuttles__srv__ShuttleId_Response__Sequence * lhs, const shuttles__srv__ShuttleId_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__srv__ShuttleId_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Response__Sequence__copy(
  const shuttles__srv__ShuttleId_Response__Sequence * input,
  shuttles__srv__ShuttleId_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__srv__ShuttleId_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__srv__ShuttleId_Response * data =
      (shuttles__srv__ShuttleId_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__srv__ShuttleId_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__srv__ShuttleId_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__srv__ShuttleId_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "shuttles/srv/detail/shuttle_id__functions.h"

bool
shuttles__srv__ShuttleId_Event__init(shuttles__srv__ShuttleId_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    shuttles__srv__ShuttleId_Event__fini(msg);
    return false;
  }
  // request
  if (!shuttles__srv__ShuttleId_Request__Sequence__init(&msg->request, 0)) {
    shuttles__srv__ShuttleId_Event__fini(msg);
    return false;
  }
  // response
  if (!shuttles__srv__ShuttleId_Response__Sequence__init(&msg->response, 0)) {
    shuttles__srv__ShuttleId_Event__fini(msg);
    return false;
  }
  return true;
}

void
shuttles__srv__ShuttleId_Event__fini(shuttles__srv__ShuttleId_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  shuttles__srv__ShuttleId_Request__Sequence__fini(&msg->request);
  // response
  shuttles__srv__ShuttleId_Response__Sequence__fini(&msg->response);
}

bool
shuttles__srv__ShuttleId_Event__are_equal(const shuttles__srv__ShuttleId_Event * lhs, const shuttles__srv__ShuttleId_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!shuttles__srv__ShuttleId_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!shuttles__srv__ShuttleId_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Event__copy(
  const shuttles__srv__ShuttleId_Event * input,
  shuttles__srv__ShuttleId_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!shuttles__srv__ShuttleId_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!shuttles__srv__ShuttleId_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

shuttles__srv__ShuttleId_Event *
shuttles__srv__ShuttleId_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Event * msg = (shuttles__srv__ShuttleId_Event *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__srv__ShuttleId_Event));
  bool success = shuttles__srv__ShuttleId_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__srv__ShuttleId_Event__destroy(shuttles__srv__ShuttleId_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__srv__ShuttleId_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__srv__ShuttleId_Event__Sequence__init(shuttles__srv__ShuttleId_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Event * data = NULL;

  if (size) {
    data = (shuttles__srv__ShuttleId_Event *)allocator.zero_allocate(size, sizeof(shuttles__srv__ShuttleId_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__srv__ShuttleId_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__srv__ShuttleId_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shuttles__srv__ShuttleId_Event__Sequence__fini(shuttles__srv__ShuttleId_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shuttles__srv__ShuttleId_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shuttles__srv__ShuttleId_Event__Sequence *
shuttles__srv__ShuttleId_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__srv__ShuttleId_Event__Sequence * array = (shuttles__srv__ShuttleId_Event__Sequence *)allocator.allocate(sizeof(shuttles__srv__ShuttleId_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__srv__ShuttleId_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__srv__ShuttleId_Event__Sequence__destroy(shuttles__srv__ShuttleId_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__srv__ShuttleId_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__srv__ShuttleId_Event__Sequence__are_equal(const shuttles__srv__ShuttleId_Event__Sequence * lhs, const shuttles__srv__ShuttleId_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__srv__ShuttleId_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__srv__ShuttleId_Event__Sequence__copy(
  const shuttles__srv__ShuttleId_Event__Sequence * input,
  shuttles__srv__ShuttleId_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__srv__ShuttleId_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__srv__ShuttleId_Event * data =
      (shuttles__srv__ShuttleId_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__srv__ShuttleId_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__srv__ShuttleId_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__srv__ShuttleId_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
