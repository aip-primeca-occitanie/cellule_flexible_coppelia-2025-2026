// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aiguillages:msg/Actionneurs.idl
// generated code does not contain a copyright notice
#include "aiguillages/msg/detail/actionneurs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aiguillages__msg__Actionneurs__init(aiguillages__msg__Actionneurs * msg)
{
  if (!msg) {
    return false;
  }
  // actionneurs
  return true;
}

void
aiguillages__msg__Actionneurs__fini(aiguillages__msg__Actionneurs * msg)
{
  if (!msg) {
    return;
  }
  // actionneurs
}

bool
aiguillages__msg__Actionneurs__are_equal(const aiguillages__msg__Actionneurs * lhs, const aiguillages__msg__Actionneurs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actionneurs
  if (lhs->actionneurs != rhs->actionneurs) {
    return false;
  }
  return true;
}

bool
aiguillages__msg__Actionneurs__copy(
  const aiguillages__msg__Actionneurs * input,
  aiguillages__msg__Actionneurs * output)
{
  if (!input || !output) {
    return false;
  }
  // actionneurs
  output->actionneurs = input->actionneurs;
  return true;
}

aiguillages__msg__Actionneurs *
aiguillages__msg__Actionneurs__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Actionneurs * msg = (aiguillages__msg__Actionneurs *)allocator.allocate(sizeof(aiguillages__msg__Actionneurs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aiguillages__msg__Actionneurs));
  bool success = aiguillages__msg__Actionneurs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aiguillages__msg__Actionneurs__destroy(aiguillages__msg__Actionneurs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aiguillages__msg__Actionneurs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aiguillages__msg__Actionneurs__Sequence__init(aiguillages__msg__Actionneurs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Actionneurs * data = NULL;

  if (size) {
    data = (aiguillages__msg__Actionneurs *)allocator.zero_allocate(size, sizeof(aiguillages__msg__Actionneurs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aiguillages__msg__Actionneurs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aiguillages__msg__Actionneurs__fini(&data[i - 1]);
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
aiguillages__msg__Actionneurs__Sequence__fini(aiguillages__msg__Actionneurs__Sequence * array)
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
      aiguillages__msg__Actionneurs__fini(&array->data[i]);
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

aiguillages__msg__Actionneurs__Sequence *
aiguillages__msg__Actionneurs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Actionneurs__Sequence * array = (aiguillages__msg__Actionneurs__Sequence *)allocator.allocate(sizeof(aiguillages__msg__Actionneurs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aiguillages__msg__Actionneurs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aiguillages__msg__Actionneurs__Sequence__destroy(aiguillages__msg__Actionneurs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aiguillages__msg__Actionneurs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aiguillages__msg__Actionneurs__Sequence__are_equal(const aiguillages__msg__Actionneurs__Sequence * lhs, const aiguillages__msg__Actionneurs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aiguillages__msg__Actionneurs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aiguillages__msg__Actionneurs__Sequence__copy(
  const aiguillages__msg__Actionneurs__Sequence * input,
  aiguillages__msg__Actionneurs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aiguillages__msg__Actionneurs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aiguillages__msg__Actionneurs * data =
      (aiguillages__msg__Actionneurs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aiguillages__msg__Actionneurs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aiguillages__msg__Actionneurs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aiguillages__msg__Actionneurs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
