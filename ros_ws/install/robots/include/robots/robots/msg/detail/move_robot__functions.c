// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robots:msg/MoveRobot.idl
// generated code does not contain a copyright notice
#include "robots/msg/detail/move_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robots__msg__MoveRobot__init(robots__msg__MoveRobot * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // bras
  // pince
  // num_robot
  return true;
}

void
robots__msg__MoveRobot__fini(robots__msg__MoveRobot * msg)
{
  if (!msg) {
    return;
  }
  // position
  // bras
  // pince
  // num_robot
}

bool
robots__msg__MoveRobot__are_equal(const robots__msg__MoveRobot * lhs, const robots__msg__MoveRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // bras
  if (lhs->bras != rhs->bras) {
    return false;
  }
  // pince
  if (lhs->pince != rhs->pince) {
    return false;
  }
  // num_robot
  if (lhs->num_robot != rhs->num_robot) {
    return false;
  }
  return true;
}

bool
robots__msg__MoveRobot__copy(
  const robots__msg__MoveRobot * input,
  robots__msg__MoveRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // bras
  output->bras = input->bras;
  // pince
  output->pince = input->pince;
  // num_robot
  output->num_robot = input->num_robot;
  return true;
}

robots__msg__MoveRobot *
robots__msg__MoveRobot__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MoveRobot * msg = (robots__msg__MoveRobot *)allocator.allocate(sizeof(robots__msg__MoveRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robots__msg__MoveRobot));
  bool success = robots__msg__MoveRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robots__msg__MoveRobot__destroy(robots__msg__MoveRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robots__msg__MoveRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robots__msg__MoveRobot__Sequence__init(robots__msg__MoveRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MoveRobot * data = NULL;

  if (size) {
    data = (robots__msg__MoveRobot *)allocator.zero_allocate(size, sizeof(robots__msg__MoveRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robots__msg__MoveRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robots__msg__MoveRobot__fini(&data[i - 1]);
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
robots__msg__MoveRobot__Sequence__fini(robots__msg__MoveRobot__Sequence * array)
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
      robots__msg__MoveRobot__fini(&array->data[i]);
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

robots__msg__MoveRobot__Sequence *
robots__msg__MoveRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robots__msg__MoveRobot__Sequence * array = (robots__msg__MoveRobot__Sequence *)allocator.allocate(sizeof(robots__msg__MoveRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robots__msg__MoveRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robots__msg__MoveRobot__Sequence__destroy(robots__msg__MoveRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robots__msg__MoveRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robots__msg__MoveRobot__Sequence__are_equal(const robots__msg__MoveRobot__Sequence * lhs, const robots__msg__MoveRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robots__msg__MoveRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robots__msg__MoveRobot__Sequence__copy(
  const robots__msg__MoveRobot__Sequence * input,
  robots__msg__MoveRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robots__msg__MoveRobot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robots__msg__MoveRobot * data =
      (robots__msg__MoveRobot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robots__msg__MoveRobot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robots__msg__MoveRobot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robots__msg__MoveRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
