// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from commande_locale:srv/SrvAddProductPushBack.idl
// generated code does not contain a copyright notice
#include "commande_locale/srv/detail/srv_add_product_push_back__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
commande_locale__srv__SrvAddProductPushBack_Request__init(commande_locale__srv__SrvAddProductPushBack_Request * msg)
{
  if (!msg) {
    return false;
  }
  // poste
  // produit
  return true;
}

void
commande_locale__srv__SrvAddProductPushBack_Request__fini(commande_locale__srv__SrvAddProductPushBack_Request * msg)
{
  if (!msg) {
    return;
  }
  // poste
  // produit
}

bool
commande_locale__srv__SrvAddProductPushBack_Request__are_equal(const commande_locale__srv__SrvAddProductPushBack_Request * lhs, const commande_locale__srv__SrvAddProductPushBack_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poste
  if (lhs->poste != rhs->poste) {
    return false;
  }
  // produit
  if (lhs->produit != rhs->produit) {
    return false;
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Request__copy(
  const commande_locale__srv__SrvAddProductPushBack_Request * input,
  commande_locale__srv__SrvAddProductPushBack_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // poste
  output->poste = input->poste;
  // produit
  output->produit = input->produit;
  return true;
}

commande_locale__srv__SrvAddProductPushBack_Request *
commande_locale__srv__SrvAddProductPushBack_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Request * msg = (commande_locale__srv__SrvAddProductPushBack_Request *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__srv__SrvAddProductPushBack_Request));
  bool success = commande_locale__srv__SrvAddProductPushBack_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__srv__SrvAddProductPushBack_Request__destroy(commande_locale__srv__SrvAddProductPushBack_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__srv__SrvAddProductPushBack_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__init(commande_locale__srv__SrvAddProductPushBack_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Request * data = NULL;

  if (size) {
    data = (commande_locale__srv__SrvAddProductPushBack_Request *)allocator.zero_allocate(size, sizeof(commande_locale__srv__SrvAddProductPushBack_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__srv__SrvAddProductPushBack_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__srv__SrvAddProductPushBack_Request__fini(&data[i - 1]);
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
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__fini(commande_locale__srv__SrvAddProductPushBack_Request__Sequence * array)
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
      commande_locale__srv__SrvAddProductPushBack_Request__fini(&array->data[i]);
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

commande_locale__srv__SrvAddProductPushBack_Request__Sequence *
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence * array = (commande_locale__srv__SrvAddProductPushBack_Request__Sequence *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__srv__SrvAddProductPushBack_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__destroy(commande_locale__srv__SrvAddProductPushBack_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__srv__SrvAddProductPushBack_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__are_equal(const commande_locale__srv__SrvAddProductPushBack_Request__Sequence * lhs, const commande_locale__srv__SrvAddProductPushBack_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Request__Sequence__copy(
  const commande_locale__srv__SrvAddProductPushBack_Request__Sequence * input,
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__srv__SrvAddProductPushBack_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__srv__SrvAddProductPushBack_Request * data =
      (commande_locale__srv__SrvAddProductPushBack_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__srv__SrvAddProductPushBack_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__srv__SrvAddProductPushBack_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
commande_locale__srv__SrvAddProductPushBack_Response__init(commande_locale__srv__SrvAddProductPushBack_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
commande_locale__srv__SrvAddProductPushBack_Response__fini(commande_locale__srv__SrvAddProductPushBack_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
commande_locale__srv__SrvAddProductPushBack_Response__are_equal(const commande_locale__srv__SrvAddProductPushBack_Response * lhs, const commande_locale__srv__SrvAddProductPushBack_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Response__copy(
  const commande_locale__srv__SrvAddProductPushBack_Response * input,
  commande_locale__srv__SrvAddProductPushBack_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

commande_locale__srv__SrvAddProductPushBack_Response *
commande_locale__srv__SrvAddProductPushBack_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Response * msg = (commande_locale__srv__SrvAddProductPushBack_Response *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__srv__SrvAddProductPushBack_Response));
  bool success = commande_locale__srv__SrvAddProductPushBack_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__srv__SrvAddProductPushBack_Response__destroy(commande_locale__srv__SrvAddProductPushBack_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__srv__SrvAddProductPushBack_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__init(commande_locale__srv__SrvAddProductPushBack_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Response * data = NULL;

  if (size) {
    data = (commande_locale__srv__SrvAddProductPushBack_Response *)allocator.zero_allocate(size, sizeof(commande_locale__srv__SrvAddProductPushBack_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__srv__SrvAddProductPushBack_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__srv__SrvAddProductPushBack_Response__fini(&data[i - 1]);
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
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__fini(commande_locale__srv__SrvAddProductPushBack_Response__Sequence * array)
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
      commande_locale__srv__SrvAddProductPushBack_Response__fini(&array->data[i]);
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

commande_locale__srv__SrvAddProductPushBack_Response__Sequence *
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence * array = (commande_locale__srv__SrvAddProductPushBack_Response__Sequence *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__srv__SrvAddProductPushBack_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__destroy(commande_locale__srv__SrvAddProductPushBack_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__srv__SrvAddProductPushBack_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__are_equal(const commande_locale__srv__SrvAddProductPushBack_Response__Sequence * lhs, const commande_locale__srv__SrvAddProductPushBack_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Response__Sequence__copy(
  const commande_locale__srv__SrvAddProductPushBack_Response__Sequence * input,
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__srv__SrvAddProductPushBack_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__srv__SrvAddProductPushBack_Response * data =
      (commande_locale__srv__SrvAddProductPushBack_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__srv__SrvAddProductPushBack_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__srv__SrvAddProductPushBack_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "commande_locale/srv/detail/srv_add_product_push_back__functions.h"

bool
commande_locale__srv__SrvAddProductPushBack_Event__init(commande_locale__srv__SrvAddProductPushBack_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    commande_locale__srv__SrvAddProductPushBack_Event__fini(msg);
    return false;
  }
  // request
  if (!commande_locale__srv__SrvAddProductPushBack_Request__Sequence__init(&msg->request, 0)) {
    commande_locale__srv__SrvAddProductPushBack_Event__fini(msg);
    return false;
  }
  // response
  if (!commande_locale__srv__SrvAddProductPushBack_Response__Sequence__init(&msg->response, 0)) {
    commande_locale__srv__SrvAddProductPushBack_Event__fini(msg);
    return false;
  }
  return true;
}

void
commande_locale__srv__SrvAddProductPushBack_Event__fini(commande_locale__srv__SrvAddProductPushBack_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  commande_locale__srv__SrvAddProductPushBack_Request__Sequence__fini(&msg->request);
  // response
  commande_locale__srv__SrvAddProductPushBack_Response__Sequence__fini(&msg->response);
}

bool
commande_locale__srv__SrvAddProductPushBack_Event__are_equal(const commande_locale__srv__SrvAddProductPushBack_Event * lhs, const commande_locale__srv__SrvAddProductPushBack_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!commande_locale__srv__SrvAddProductPushBack_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!commande_locale__srv__SrvAddProductPushBack_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Event__copy(
  const commande_locale__srv__SrvAddProductPushBack_Event * input,
  commande_locale__srv__SrvAddProductPushBack_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!commande_locale__srv__SrvAddProductPushBack_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!commande_locale__srv__SrvAddProductPushBack_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

commande_locale__srv__SrvAddProductPushBack_Event *
commande_locale__srv__SrvAddProductPushBack_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Event * msg = (commande_locale__srv__SrvAddProductPushBack_Event *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__srv__SrvAddProductPushBack_Event));
  bool success = commande_locale__srv__SrvAddProductPushBack_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__srv__SrvAddProductPushBack_Event__destroy(commande_locale__srv__SrvAddProductPushBack_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__srv__SrvAddProductPushBack_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__init(commande_locale__srv__SrvAddProductPushBack_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Event * data = NULL;

  if (size) {
    data = (commande_locale__srv__SrvAddProductPushBack_Event *)allocator.zero_allocate(size, sizeof(commande_locale__srv__SrvAddProductPushBack_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__srv__SrvAddProductPushBack_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__srv__SrvAddProductPushBack_Event__fini(&data[i - 1]);
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
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__fini(commande_locale__srv__SrvAddProductPushBack_Event__Sequence * array)
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
      commande_locale__srv__SrvAddProductPushBack_Event__fini(&array->data[i]);
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

commande_locale__srv__SrvAddProductPushBack_Event__Sequence *
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__srv__SrvAddProductPushBack_Event__Sequence * array = (commande_locale__srv__SrvAddProductPushBack_Event__Sequence *)allocator.allocate(sizeof(commande_locale__srv__SrvAddProductPushBack_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__srv__SrvAddProductPushBack_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__destroy(commande_locale__srv__SrvAddProductPushBack_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__srv__SrvAddProductPushBack_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__are_equal(const commande_locale__srv__SrvAddProductPushBack_Event__Sequence * lhs, const commande_locale__srv__SrvAddProductPushBack_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__srv__SrvAddProductPushBack_Event__Sequence__copy(
  const commande_locale__srv__SrvAddProductPushBack_Event__Sequence * input,
  commande_locale__srv__SrvAddProductPushBack_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__srv__SrvAddProductPushBack_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__srv__SrvAddProductPushBack_Event * data =
      (commande_locale__srv__SrvAddProductPushBack_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__srv__SrvAddProductPushBack_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__srv__SrvAddProductPushBack_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__srv__SrvAddProductPushBack_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
