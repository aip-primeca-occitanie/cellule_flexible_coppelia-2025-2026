// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice
#include "aiguillages/msg/detail/capteurs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aiguillages__msg__Capteurs__init(aiguillages__msg__Capteurs * msg)
{
  if (!msg) {
    return false;
  }
  // capteurs
  return true;
}

void
aiguillages__msg__Capteurs__fini(aiguillages__msg__Capteurs * msg)
{
  if (!msg) {
    return;
  }
  // capteurs
}

bool
aiguillages__msg__Capteurs__are_equal(const aiguillages__msg__Capteurs * lhs, const aiguillages__msg__Capteurs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // capteurs
  if (lhs->capteurs != rhs->capteurs) {
    return false;
  }
  return true;
}

bool
aiguillages__msg__Capteurs__copy(
  const aiguillages__msg__Capteurs * input,
  aiguillages__msg__Capteurs * output)
{
  if (!input || !output) {
    return false;
  }
  // capteurs
  output->capteurs = input->capteurs;
  return true;
}

aiguillages__msg__Capteurs *
aiguillages__msg__Capteurs__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Capteurs * msg = (aiguillages__msg__Capteurs *)allocator.allocate(sizeof(aiguillages__msg__Capteurs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aiguillages__msg__Capteurs));
  bool success = aiguillages__msg__Capteurs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aiguillages__msg__Capteurs__destroy(aiguillages__msg__Capteurs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aiguillages__msg__Capteurs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aiguillages__msg__Capteurs__Sequence__init(aiguillages__msg__Capteurs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Capteurs * data = NULL;

  if (size) {
    data = (aiguillages__msg__Capteurs *)allocator.zero_allocate(size, sizeof(aiguillages__msg__Capteurs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aiguillages__msg__Capteurs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aiguillages__msg__Capteurs__fini(&data[i - 1]);
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
aiguillages__msg__Capteurs__Sequence__fini(aiguillages__msg__Capteurs__Sequence * array)
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
      aiguillages__msg__Capteurs__fini(&array->data[i]);
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

aiguillages__msg__Capteurs__Sequence *
aiguillages__msg__Capteurs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aiguillages__msg__Capteurs__Sequence * array = (aiguillages__msg__Capteurs__Sequence *)allocator.allocate(sizeof(aiguillages__msg__Capteurs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aiguillages__msg__Capteurs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aiguillages__msg__Capteurs__Sequence__destroy(aiguillages__msg__Capteurs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aiguillages__msg__Capteurs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aiguillages__msg__Capteurs__Sequence__are_equal(const aiguillages__msg__Capteurs__Sequence * lhs, const aiguillages__msg__Capteurs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aiguillages__msg__Capteurs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aiguillages__msg__Capteurs__Sequence__copy(
  const aiguillages__msg__Capteurs__Sequence * input,
  aiguillages__msg__Capteurs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aiguillages__msg__Capteurs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aiguillages__msg__Capteurs * data =
      (aiguillages__msg__Capteurs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aiguillages__msg__Capteurs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aiguillages__msg__Capteurs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aiguillages__msg__Capteurs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
