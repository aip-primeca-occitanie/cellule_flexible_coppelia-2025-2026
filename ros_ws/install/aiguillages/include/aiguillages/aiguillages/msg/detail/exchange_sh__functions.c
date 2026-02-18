// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aiguillages:msg/ExchangeSh.idl
// generated code does not contain a copyright notice
#include "aiguillages/msg/detail/exchange_sh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
aiguillages__msg__ExchangeSh__init(aiguillages__msg__ExchangeSh * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aiguillages__msg__ExchangeSh__fini(msg);
    return false;
  }
  // handle
  return true;
}

void
aiguillages__msg__ExchangeSh__fini(aiguillages__msg__ExchangeSh * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // handle
}

bool
aiguillages__msg__ExchangeSh__are_equal(const aiguillages__msg__ExchangeSh * lhs, const aiguillages__msg__ExchangeSh * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // handle
  if (lhs->handle != rhs->handle) {
    return false;
  }
  return true;
}

bool
aiguillages__msg__ExchangeSh__copy(
  const aiguillages__msg__ExchangeSh * input,
  aiguillages__msg__ExchangeSh * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // handle
  output->handle = input->handle;
  return true;
}

aiguillages__msg__ExchangeSh *
aiguillages__msg__ExchangeSh__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__ExchangeSh * msg = (aiguillages__msg__ExchangeSh *)allocator.allocate(sizeof(aiguillages__msg__ExchangeSh), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aiguillages__msg__ExchangeSh));
  bool success = aiguillages__msg__ExchangeSh__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aiguillages__msg__ExchangeSh__destroy(aiguillages__msg__ExchangeSh * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aiguillages__msg__ExchangeSh__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aiguillages__msg__ExchangeSh__Sequence__init(aiguillages__msg__ExchangeSh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__ExchangeSh * data = NULL;

  if (size) {
    data = (aiguillages__msg__ExchangeSh *)allocator.zero_allocate(size, sizeof(aiguillages__msg__ExchangeSh), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aiguillages__msg__ExchangeSh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aiguillages__msg__ExchangeSh__fini(&data[i - 1]);
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
aiguillages__msg__ExchangeSh__Sequence__fini(aiguillages__msg__ExchangeSh__Sequence * array)
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
      aiguillages__msg__ExchangeSh__fini(&array->data[i]);
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

aiguillages__msg__ExchangeSh__Sequence *
aiguillages__msg__ExchangeSh__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__ExchangeSh__Sequence * array = (aiguillages__msg__ExchangeSh__Sequence *)allocator.allocate(sizeof(aiguillages__msg__ExchangeSh__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aiguillages__msg__ExchangeSh__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aiguillages__msg__ExchangeSh__Sequence__destroy(aiguillages__msg__ExchangeSh__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aiguillages__msg__ExchangeSh__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aiguillages__msg__ExchangeSh__Sequence__are_equal(const aiguillages__msg__ExchangeSh__Sequence * lhs, const aiguillages__msg__ExchangeSh__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aiguillages__msg__ExchangeSh__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aiguillages__msg__ExchangeSh__Sequence__copy(
  const aiguillages__msg__ExchangeSh__Sequence * input,
  aiguillages__msg__ExchangeSh__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aiguillages__msg__ExchangeSh);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aiguillages__msg__ExchangeSh * data =
      (aiguillages__msg__ExchangeSh *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aiguillages__msg__ExchangeSh__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aiguillages__msg__ExchangeSh__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aiguillages__msg__ExchangeSh__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
