// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shuttles:msg/MsgErreur.idl
// generated code does not contain a copyright notice
#include "shuttles/msg/detail/msg_erreur__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
shuttles__msg__MsgErreur__init(shuttles__msg__MsgErreur * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // n_poste
  return true;
}

void
shuttles__msg__MsgErreur__fini(shuttles__msg__MsgErreur * msg)
{
  if (!msg) {
    return;
  }
  // code
  // n_poste
}

bool
shuttles__msg__MsgErreur__are_equal(const shuttles__msg__MsgErreur * lhs, const shuttles__msg__MsgErreur * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // n_poste
  if (lhs->n_poste != rhs->n_poste) {
    return false;
  }
  return true;
}

bool
shuttles__msg__MsgErreur__copy(
  const shuttles__msg__MsgErreur * input,
  shuttles__msg__MsgErreur * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // n_poste
  output->n_poste = input->n_poste;
  return true;
}

shuttles__msg__MsgErreur *
shuttles__msg__MsgErreur__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgErreur * msg = (shuttles__msg__MsgErreur *)allocator.allocate(sizeof(shuttles__msg__MsgErreur), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shuttles__msg__MsgErreur));
  bool success = shuttles__msg__MsgErreur__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shuttles__msg__MsgErreur__destroy(shuttles__msg__MsgErreur * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shuttles__msg__MsgErreur__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shuttles__msg__MsgErreur__Sequence__init(shuttles__msg__MsgErreur__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgErreur * data = NULL;

  if (size) {
    data = (shuttles__msg__MsgErreur *)allocator.zero_allocate(size, sizeof(shuttles__msg__MsgErreur), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shuttles__msg__MsgErreur__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shuttles__msg__MsgErreur__fini(&data[i - 1]);
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
shuttles__msg__MsgErreur__Sequence__fini(shuttles__msg__MsgErreur__Sequence * array)
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
      shuttles__msg__MsgErreur__fini(&array->data[i]);
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

shuttles__msg__MsgErreur__Sequence *
shuttles__msg__MsgErreur__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shuttles__msg__MsgErreur__Sequence * array = (shuttles__msg__MsgErreur__Sequence *)allocator.allocate(sizeof(shuttles__msg__MsgErreur__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shuttles__msg__MsgErreur__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shuttles__msg__MsgErreur__Sequence__destroy(shuttles__msg__MsgErreur__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shuttles__msg__MsgErreur__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shuttles__msg__MsgErreur__Sequence__are_equal(const shuttles__msg__MsgErreur__Sequence * lhs, const shuttles__msg__MsgErreur__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shuttles__msg__MsgErreur__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shuttles__msg__MsgErreur__Sequence__copy(
  const shuttles__msg__MsgErreur__Sequence * input,
  shuttles__msg__MsgErreur__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shuttles__msg__MsgErreur);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shuttles__msg__MsgErreur * data =
      (shuttles__msg__MsgErreur *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shuttles__msg__MsgErreur__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shuttles__msg__MsgErreur__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shuttles__msg__MsgErreur__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
