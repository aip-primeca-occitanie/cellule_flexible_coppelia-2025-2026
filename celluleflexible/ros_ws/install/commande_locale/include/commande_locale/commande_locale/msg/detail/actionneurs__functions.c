// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from commande_locale:msg/Actionneurs.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/actionneurs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
commande_locale__msg__Actionneurs__init(commande_locale__msg__Actionneurs * msg)
{
  if (!msg) {
    return false;
  }
  // actionneurs
  return true;
}

void
commande_locale__msg__Actionneurs__fini(commande_locale__msg__Actionneurs * msg)
{
  if (!msg) {
    return;
  }
  // actionneurs
}

bool
commande_locale__msg__Actionneurs__are_equal(const commande_locale__msg__Actionneurs * lhs, const commande_locale__msg__Actionneurs * rhs)
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
commande_locale__msg__Actionneurs__copy(
  const commande_locale__msg__Actionneurs * input,
  commande_locale__msg__Actionneurs * output)
{
  if (!input || !output) {
    return false;
  }
  // actionneurs
  output->actionneurs = input->actionneurs;
  return true;
}

commande_locale__msg__Actionneurs *
commande_locale__msg__Actionneurs__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__Actionneurs * msg = (commande_locale__msg__Actionneurs *)allocator.allocate(sizeof(commande_locale__msg__Actionneurs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__msg__Actionneurs));
  bool success = commande_locale__msg__Actionneurs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__msg__Actionneurs__destroy(commande_locale__msg__Actionneurs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__msg__Actionneurs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__msg__Actionneurs__Sequence__init(commande_locale__msg__Actionneurs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__Actionneurs * data = NULL;

  if (size) {
    data = (commande_locale__msg__Actionneurs *)allocator.zero_allocate(size, sizeof(commande_locale__msg__Actionneurs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__msg__Actionneurs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__msg__Actionneurs__fini(&data[i - 1]);
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
commande_locale__msg__Actionneurs__Sequence__fini(commande_locale__msg__Actionneurs__Sequence * array)
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
      commande_locale__msg__Actionneurs__fini(&array->data[i]);
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

commande_locale__msg__Actionneurs__Sequence *
commande_locale__msg__Actionneurs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__Actionneurs__Sequence * array = (commande_locale__msg__Actionneurs__Sequence *)allocator.allocate(sizeof(commande_locale__msg__Actionneurs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__msg__Actionneurs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__msg__Actionneurs__Sequence__destroy(commande_locale__msg__Actionneurs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__msg__Actionneurs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__msg__Actionneurs__Sequence__are_equal(const commande_locale__msg__Actionneurs__Sequence * lhs, const commande_locale__msg__Actionneurs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__msg__Actionneurs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__msg__Actionneurs__Sequence__copy(
  const commande_locale__msg__Actionneurs__Sequence * input,
  commande_locale__msg__Actionneurs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__msg__Actionneurs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__msg__Actionneurs * data =
      (commande_locale__msg__Actionneurs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__msg__Actionneurs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__msg__Actionneurs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__msg__Actionneurs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
