// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice
#include "shuttles/msg/detail/msg_shuttle_create__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
shuttles__msg__MsgShuttleCreate__init(shuttles__msg__MsgShuttleCreate * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    shuttles__msg__MsgShuttleCreate__fini(msg);
    return false;
  }
  // destination
  // product
  // handle
  // handle_platform
  // zone
  return true;
}

void
shuttles__msg__MsgShuttleCreate__fini(shuttles__msg__MsgShuttleCreate * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // destination
  // product
  // handle
  // handle_platform
  // zone
}

bool
shuttles__msg__MsgShuttleCreate__are_equal(const shuttles__msg__MsgShuttleCreate * lhs, const shuttles__msg__MsgShuttleCreate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // destination
  if (lhs->destination != rhs->destination) {
    return false;
  }
  // product
  if (lhs->product != rhs->product) {
    return false;
  }
  // handle
  if (lhs->handle != rhs->handle) {
    return false;
  }
  // handle_platform
  if (lhs->handle_platform != rhs->handle_platform) {
    return false;
  }
  // zone
  if (lhs->zone != rhs->zone) {
    return false;
  }
  return true;
}

bool
shuttles__msg__MsgShuttleCreate__copy(
  const shuttles__msg__MsgShuttleCreate * input,
  shuttles__msg__MsgShuttleCreate * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // destination
  output->destination = input->destination;
  // product
  output->product = input->product;
  // handle
  output->handle = input->handle;
  // handle_platform
  output->handle_platform = input->handle_platform;
  // zone
  output->zone = input->zone;
  return true;
}

shuttles__msg__MsgShuttleCreate *
shuttles__msg__MsgShuttleCreate__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleCreate * msg = (shuttles__msg__MsgShuttleCreate *)allocator.allocate(sizeof(shuttles__msg__MsgShuttleCreate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__msg__MsgShuttleCreate));
  bool success = shuttles__msg__MsgShuttleCreate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__msg__MsgShuttleCreate__destroy(shuttles__msg__MsgShuttleCreate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__msg__MsgShuttleCreate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__msg__MsgShuttleCreate__Sequence__init(shuttles__msg__MsgShuttleCreate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleCreate * data = NULL;

  if (size) {
    data = (shuttles__msg__MsgShuttleCreate *)allocator.zero_allocate(size, sizeof(shuttles__msg__MsgShuttleCreate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__msg__MsgShuttleCreate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__msg__MsgShuttleCreate__fini(&data[i - 1]);
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
shuttles__msg__MsgShuttleCreate__Sequence__fini(shuttles__msg__MsgShuttleCreate__Sequence * array)
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
      shuttles__msg__MsgShuttleCreate__fini(&array->data[i]);
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

shuttles__msg__MsgShuttleCreate__Sequence *
shuttles__msg__MsgShuttleCreate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleCreate__Sequence * array = (shuttles__msg__MsgShuttleCreate__Sequence *)allocator.allocate(sizeof(shuttles__msg__MsgShuttleCreate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__msg__MsgShuttleCreate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__msg__MsgShuttleCreate__Sequence__destroy(shuttles__msg__MsgShuttleCreate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__msg__MsgShuttleCreate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__msg__MsgShuttleCreate__Sequence__are_equal(const shuttles__msg__MsgShuttleCreate__Sequence * lhs, const shuttles__msg__MsgShuttleCreate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__msg__MsgShuttleCreate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__msg__MsgShuttleCreate__Sequence__copy(
  const shuttles__msg__MsgShuttleCreate__Sequence * input,
  shuttles__msg__MsgShuttleCreate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__msg__MsgShuttleCreate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__msg__MsgShuttleCreate * data =
      (shuttles__msg__MsgShuttleCreate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__msg__MsgShuttleCreate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__msg__MsgShuttleCreate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__msg__MsgShuttleCreate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
