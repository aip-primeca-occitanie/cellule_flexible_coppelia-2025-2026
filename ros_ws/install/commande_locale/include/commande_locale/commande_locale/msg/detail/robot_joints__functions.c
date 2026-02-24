// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from commande_locale:msg/RobotJoints.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/robot_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
commande_locale__msg__RobotJoints__init(commande_locale__msg__RobotJoints * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
  // num_robot
  return true;
}

void
commande_locale__msg__RobotJoints__fini(commande_locale__msg__RobotJoints * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
  // num_robot
}

bool
commande_locale__msg__RobotJoints__are_equal(const commande_locale__msg__RobotJoints * lhs, const commande_locale__msg__RobotJoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // joint5
  if (lhs->joint5 != rhs->joint5) {
    return false;
  }
  // joint6
  if (lhs->joint6 != rhs->joint6) {
    return false;
  }
  // joint7
  if (lhs->joint7 != rhs->joint7) {
    return false;
  }
  // num_robot
  if (lhs->num_robot != rhs->num_robot) {
    return false;
  }
  return true;
}

bool
commande_locale__msg__RobotJoints__copy(
  const commande_locale__msg__RobotJoints * input,
  commande_locale__msg__RobotJoints * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // joint5
  output->joint5 = input->joint5;
  // joint6
  output->joint6 = input->joint6;
  // joint7
  output->joint7 = input->joint7;
  // num_robot
  output->num_robot = input->num_robot;
  return true;
}

commande_locale__msg__RobotJoints *
commande_locale__msg__RobotJoints__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__RobotJoints * msg = (commande_locale__msg__RobotJoints *)allocator.allocate(sizeof(commande_locale__msg__RobotJoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__msg__RobotJoints));
  bool success = commande_locale__msg__RobotJoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__msg__RobotJoints__destroy(commande_locale__msg__RobotJoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__msg__RobotJoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__msg__RobotJoints__Sequence__init(commande_locale__msg__RobotJoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__RobotJoints * data = NULL;

  if (size) {
    data = (commande_locale__msg__RobotJoints *)allocator.zero_allocate(size, sizeof(commande_locale__msg__RobotJoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__msg__RobotJoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__msg__RobotJoints__fini(&data[i - 1]);
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
commande_locale__msg__RobotJoints__Sequence__fini(commande_locale__msg__RobotJoints__Sequence * array)
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
      commande_locale__msg__RobotJoints__fini(&array->data[i]);
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

commande_locale__msg__RobotJoints__Sequence *
commande_locale__msg__RobotJoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__RobotJoints__Sequence * array = (commande_locale__msg__RobotJoints__Sequence *)allocator.allocate(sizeof(commande_locale__msg__RobotJoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__msg__RobotJoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__msg__RobotJoints__Sequence__destroy(commande_locale__msg__RobotJoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__msg__RobotJoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__msg__RobotJoints__Sequence__are_equal(const commande_locale__msg__RobotJoints__Sequence * lhs, const commande_locale__msg__RobotJoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__msg__RobotJoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__msg__RobotJoints__Sequence__copy(
  const commande_locale__msg__RobotJoints__Sequence * input,
  commande_locale__msg__RobotJoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__msg__RobotJoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__msg__RobotJoints * data =
      (commande_locale__msg__RobotJoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__msg__RobotJoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__msg__RobotJoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__msg__RobotJoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
