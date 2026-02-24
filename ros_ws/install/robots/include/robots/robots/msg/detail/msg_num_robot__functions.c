// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice
#include "robots/msg/detail/msg_num_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robots__msg__MsgNumRobot__init(robots__msg__MsgNumRobot * msg)
{
  if (!msg) {
    return false;
  }
  // num_robot
  // data
  return true;
}

void
robots__msg__MsgNumRobot__fini(robots__msg__MsgNumRobot * msg)
{
  if (!msg) {
    return;
  }
  // num_robot
  // data
}

bool
robots__msg__MsgNumRobot__are_equal(const robots__msg__MsgNumRobot * lhs, const robots__msg__MsgNumRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_robot
  if (lhs->num_robot != rhs->num_robot) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
robots__msg__MsgNumRobot__copy(
  const robots__msg__MsgNumRobot * input,
  robots__msg__MsgNumRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // num_robot
  output->num_robot = input->num_robot;
  // data
  output->data = input->data;
  return true;
}

robots__msg__MsgNumRobot *
robots__msg__MsgNumRobot__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MsgNumRobot * msg = (robots__msg__MsgNumRobot *)allocator.allocate(sizeof(robots__msg__MsgNumRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robots__msg__MsgNumRobot));
  bool success = robots__msg__MsgNumRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robots__msg__MsgNumRobot__destroy(robots__msg__MsgNumRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robots__msg__MsgNumRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robots__msg__MsgNumRobot__Sequence__init(robots__msg__MsgNumRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MsgNumRobot * data = NULL;

  if (size) {
    data = (robots__msg__MsgNumRobot *)allocator.zero_allocate(size, sizeof(robots__msg__MsgNumRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robots__msg__MsgNumRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robots__msg__MsgNumRobot__fini(&data[i - 1]);
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
robots__msg__MsgNumRobot__Sequence__fini(robots__msg__MsgNumRobot__Sequence * array)
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
      robots__msg__MsgNumRobot__fini(&array->data[i]);
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

robots__msg__MsgNumRobot__Sequence *
robots__msg__MsgNumRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MsgNumRobot__Sequence * array = (robots__msg__MsgNumRobot__Sequence *)allocator.allocate(sizeof(robots__msg__MsgNumRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robots__msg__MsgNumRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robots__msg__MsgNumRobot__Sequence__destroy(robots__msg__MsgNumRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robots__msg__MsgNumRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robots__msg__MsgNumRobot__Sequence__are_equal(const robots__msg__MsgNumRobot__Sequence * lhs, const robots__msg__MsgNumRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robots__msg__MsgNumRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robots__msg__MsgNumRobot__Sequence__copy(
  const robots__msg__MsgNumRobot__Sequence * input,
  robots__msg__MsgNumRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robots__msg__MsgNumRobot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robots__msg__MsgNumRobot * data =
      (robots__msg__MsgNumRobot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robots__msg__MsgNumRobot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robots__msg__MsgNumRobot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robots__msg__MsgNumRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
