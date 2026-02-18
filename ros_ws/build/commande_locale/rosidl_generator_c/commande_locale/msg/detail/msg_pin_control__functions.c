// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from commande_locale:msg/MsgPinControl.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/msg_pin_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
commande_locale__msg__MsgPinControl__init(commande_locale__msg__MsgPinControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    commande_locale__msg__MsgPinControl__fini(msg);
    return false;
  }
  // pinon
  // pinoff
  return true;
}

void
commande_locale__msg__MsgPinControl__fini(commande_locale__msg__MsgPinControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pinon
  // pinoff
}

bool
commande_locale__msg__MsgPinControl__are_equal(const commande_locale__msg__MsgPinControl * lhs, const commande_locale__msg__MsgPinControl * rhs)
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
  // pinon
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->pinon[i] != rhs->pinon[i]) {
      return false;
    }
  }
  // pinoff
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->pinoff[i] != rhs->pinoff[i]) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__msg__MsgPinControl__copy(
  const commande_locale__msg__MsgPinControl * input,
  commande_locale__msg__MsgPinControl * output)
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
  // pinon
  for (size_t i = 0; i < 9; ++i) {
    output->pinon[i] = input->pinon[i];
  }
  // pinoff
  for (size_t i = 0; i < 9; ++i) {
    output->pinoff[i] = input->pinoff[i];
  }
  return true;
}

commande_locale__msg__MsgPinControl *
commande_locale__msg__MsgPinControl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgPinControl * msg = (commande_locale__msg__MsgPinControl *)allocator.allocate(sizeof(commande_locale__msg__MsgPinControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__msg__MsgPinControl));
  bool success = commande_locale__msg__MsgPinControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__msg__MsgPinControl__destroy(commande_locale__msg__MsgPinControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__msg__MsgPinControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__msg__MsgPinControl__Sequence__init(commande_locale__msg__MsgPinControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgPinControl * data = NULL;

  if (size) {
    data = (commande_locale__msg__MsgPinControl *)allocator.zero_allocate(size, sizeof(commande_locale__msg__MsgPinControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__msg__MsgPinControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__msg__MsgPinControl__fini(&data[i - 1]);
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
commande_locale__msg__MsgPinControl__Sequence__fini(commande_locale__msg__MsgPinControl__Sequence * array)
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
      commande_locale__msg__MsgPinControl__fini(&array->data[i]);
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

commande_locale__msg__MsgPinControl__Sequence *
commande_locale__msg__MsgPinControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgPinControl__Sequence * array = (commande_locale__msg__MsgPinControl__Sequence *)allocator.allocate(sizeof(commande_locale__msg__MsgPinControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__msg__MsgPinControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__msg__MsgPinControl__Sequence__destroy(commande_locale__msg__MsgPinControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__msg__MsgPinControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__msg__MsgPinControl__Sequence__are_equal(const commande_locale__msg__MsgPinControl__Sequence * lhs, const commande_locale__msg__MsgPinControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__msg__MsgPinControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__msg__MsgPinControl__Sequence__copy(
  const commande_locale__msg__MsgPinControl__Sequence * input,
  commande_locale__msg__MsgPinControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__msg__MsgPinControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__msg__MsgPinControl * data =
      (commande_locale__msg__MsgPinControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__msg__MsgPinControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__msg__MsgPinControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__msg__MsgPinControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
