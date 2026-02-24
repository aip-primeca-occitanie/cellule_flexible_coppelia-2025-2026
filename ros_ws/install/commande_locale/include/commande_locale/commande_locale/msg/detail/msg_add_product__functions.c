// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from commande_locale:msg/MsgAddProduct.idl
// generated code does not contain a copyright notice
#include "commande_locale/msg/detail/msg_add_product__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
commande_locale__msg__MsgAddProduct__init(commande_locale__msg__MsgAddProduct * msg)
{
  if (!msg) {
    return false;
  }
  // num_poste
  // num_produit
  return true;
}

void
commande_locale__msg__MsgAddProduct__fini(commande_locale__msg__MsgAddProduct * msg)
{
  if (!msg) {
    return;
  }
  // num_poste
  // num_produit
}

bool
commande_locale__msg__MsgAddProduct__are_equal(const commande_locale__msg__MsgAddProduct * lhs, const commande_locale__msg__MsgAddProduct * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_poste
  if (lhs->num_poste != rhs->num_poste) {
    return false;
  }
  // num_produit
  if (lhs->num_produit != rhs->num_produit) {
    return false;
  }
  return true;
}

bool
commande_locale__msg__MsgAddProduct__copy(
  const commande_locale__msg__MsgAddProduct * input,
  commande_locale__msg__MsgAddProduct * output)
{
  if (!input || !output) {
    return false;
  }
  // num_poste
  output->num_poste = input->num_poste;
  // num_produit
  output->num_produit = input->num_produit;
  return true;
}

commande_locale__msg__MsgAddProduct *
commande_locale__msg__MsgAddProduct__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgAddProduct * msg = (commande_locale__msg__MsgAddProduct *)allocator.allocate(sizeof(commande_locale__msg__MsgAddProduct), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(commande_locale__msg__MsgAddProduct));
  bool success = commande_locale__msg__MsgAddProduct__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
commande_locale__msg__MsgAddProduct__destroy(commande_locale__msg__MsgAddProduct * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    commande_locale__msg__MsgAddProduct__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
commande_locale__msg__MsgAddProduct__Sequence__init(commande_locale__msg__MsgAddProduct__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgAddProduct * data = NULL;

  if (size) {
    data = (commande_locale__msg__MsgAddProduct *)allocator.zero_allocate(size, sizeof(commande_locale__msg__MsgAddProduct), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = commande_locale__msg__MsgAddProduct__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        commande_locale__msg__MsgAddProduct__fini(&data[i - 1]);
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
commande_locale__msg__MsgAddProduct__Sequence__fini(commande_locale__msg__MsgAddProduct__Sequence * array)
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
      commande_locale__msg__MsgAddProduct__fini(&array->data[i]);
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

commande_locale__msg__MsgAddProduct__Sequence *
commande_locale__msg__MsgAddProduct__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  commande_locale__msg__MsgAddProduct__Sequence * array = (commande_locale__msg__MsgAddProduct__Sequence *)allocator.allocate(sizeof(commande_locale__msg__MsgAddProduct__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = commande_locale__msg__MsgAddProduct__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
commande_locale__msg__MsgAddProduct__Sequence__destroy(commande_locale__msg__MsgAddProduct__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    commande_locale__msg__MsgAddProduct__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
commande_locale__msg__MsgAddProduct__Sequence__are_equal(const commande_locale__msg__MsgAddProduct__Sequence * lhs, const commande_locale__msg__MsgAddProduct__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!commande_locale__msg__MsgAddProduct__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
commande_locale__msg__MsgAddProduct__Sequence__copy(
  const commande_locale__msg__MsgAddProduct__Sequence * input,
  commande_locale__msg__MsgAddProduct__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(commande_locale__msg__MsgAddProduct);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    commande_locale__msg__MsgAddProduct * data =
      (commande_locale__msg__MsgAddProduct *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!commande_locale__msg__MsgAddProduct__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          commande_locale__msg__MsgAddProduct__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!commande_locale__msg__MsgAddProduct__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
