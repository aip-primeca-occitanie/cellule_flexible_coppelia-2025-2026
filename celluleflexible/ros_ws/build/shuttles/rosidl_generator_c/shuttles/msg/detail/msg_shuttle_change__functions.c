// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shuttles:msg/MsgShuttleChange.idl
// generated code does not contain a copyright notice
#include "shuttles/msg/detail/msg_shuttle_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
shuttles__msg__MsgShuttleChange__init(shuttles__msg__MsgShuttleChange * msg)
{
  if (!msg) {
    return false;
  }
  // handle
  // argument
  return true;
}

void
shuttles__msg__MsgShuttleChange__fini(shuttles__msg__MsgShuttleChange * msg)
{
  if (!msg) {
    return;
  }
  // handle
  // argument
}

bool
shuttles__msg__MsgShuttleChange__are_equal(const shuttles__msg__MsgShuttleChange * lhs, const shuttles__msg__MsgShuttleChange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // handle
  if (lhs->handle != rhs->handle) {
    return false;
  }
  // argument
  if (lhs->argument != rhs->argument) {
    return false;
  }
  return true;
}

bool
shuttles__msg__MsgShuttleChange__copy(
  const shuttles__msg__MsgShuttleChange * input,
  shuttles__msg__MsgShuttleChange * output)
{
  if (!input || !output) {
    return false;
  }
  // handle
  output->handle = input->handle;
  // argument
  output->argument = input->argument;
  return true;
}

shuttles__msg__MsgShuttleChange *
shuttles__msg__MsgShuttleChange__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleChange * msg = (shuttles__msg__MsgShuttleChange *)allocator.allocate(sizeof(shuttles__msg__MsgShuttleChange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__msg__MsgShuttleChange));
  bool success = shuttles__msg__MsgShuttleChange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__msg__MsgShuttleChange__destroy(shuttles__msg__MsgShuttleChange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__msg__MsgShuttleChange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__msg__MsgShuttleChange__Sequence__init(shuttles__msg__MsgShuttleChange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleChange * data = NULL;

  if (size) {
    data = (shuttles__msg__MsgShuttleChange *)allocator.zero_allocate(size, sizeof(shuttles__msg__MsgShuttleChange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__msg__MsgShuttleChange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__msg__MsgShuttleChange__fini(&data[i - 1]);
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
shuttles__msg__MsgShuttleChange__Sequence__fini(shuttles__msg__MsgShuttleChange__Sequence * array)
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
      shuttles__msg__MsgShuttleChange__fini(&array->data[i]);
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

shuttles__msg__MsgShuttleChange__Sequence *
shuttles__msg__MsgShuttleChange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgShuttleChange__Sequence * array = (shuttles__msg__MsgShuttleChange__Sequence *)allocator.allocate(sizeof(shuttles__msg__MsgShuttleChange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__msg__MsgShuttleChange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__msg__MsgShuttleChange__Sequence__destroy(shuttles__msg__MsgShuttleChange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__msg__MsgShuttleChange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__msg__MsgShuttleChange__Sequence__are_equal(const shuttles__msg__MsgShuttleChange__Sequence * lhs, const shuttles__msg__MsgShuttleChange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__msg__MsgShuttleChange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__msg__MsgShuttleChange__Sequence__copy(
  const shuttles__msg__MsgShuttleChange__Sequence * input,
  shuttles__msg__MsgShuttleChange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__msg__MsgShuttleChange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__msg__MsgShuttleChange * data =
      (shuttles__msg__MsgShuttleChange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__msg__MsgShuttleChange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__msg__MsgShuttleChange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__msg__MsgShuttleChange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
