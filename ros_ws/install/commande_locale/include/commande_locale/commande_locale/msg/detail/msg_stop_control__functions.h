// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from commande_locale:msg/MsgStopControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/msg/msg_stop_control.h"


#ifndef COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__FUNCTIONS_H_
#define COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "commande_locale/msg/rosidl_generator_c__visibility_control.h"

#include "commande_locale/msg/detail/msg_stop_control__struct.h"

/// Initialize msg/MsgStopControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * commande_locale__msg__MsgStopControl
 * )) before or use
 * commande_locale__msg__MsgStopControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__init(commande_locale__msg__MsgStopControl * msg);

/// Finalize msg/MsgStopControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
void
commande_locale__msg__MsgStopControl__fini(commande_locale__msg__MsgStopControl * msg);

/// Create msg/MsgStopControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * commande_locale__msg__MsgStopControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
commande_locale__msg__MsgStopControl *
commande_locale__msg__MsgStopControl__create(void);

/// Destroy msg/MsgStopControl message.
/**
 * It calls
 * commande_locale__msg__MsgStopControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
void
commande_locale__msg__MsgStopControl__destroy(commande_locale__msg__MsgStopControl * msg);

/// Check for msg/MsgStopControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__are_equal(const commande_locale__msg__MsgStopControl * lhs, const commande_locale__msg__MsgStopControl * rhs);

/// Copy a msg/MsgStopControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__copy(
  const commande_locale__msg__MsgStopControl * input,
  commande_locale__msg__MsgStopControl * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_type_hash_t *
commande_locale__msg__MsgStopControl__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_runtime_c__type_description__TypeDescription *
commande_locale__msg__MsgStopControl__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_runtime_c__type_description__TypeSource *
commande_locale__msg__MsgStopControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
const rosidl_runtime_c__type_description__TypeSource__Sequence *
commande_locale__msg__MsgStopControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MsgStopControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * commande_locale__msg__MsgStopControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__Sequence__init(commande_locale__msg__MsgStopControl__Sequence * array, size_t size);

/// Finalize array of msg/MsgStopControl messages.
/**
 * It calls
 * commande_locale__msg__MsgStopControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
void
commande_locale__msg__MsgStopControl__Sequence__fini(commande_locale__msg__MsgStopControl__Sequence * array);

/// Create array of msg/MsgStopControl messages.
/**
 * It allocates the memory for the array and calls
 * commande_locale__msg__MsgStopControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
commande_locale__msg__MsgStopControl__Sequence *
commande_locale__msg__MsgStopControl__Sequence__create(size_t size);

/// Destroy array of msg/MsgStopControl messages.
/**
 * It calls
 * commande_locale__msg__MsgStopControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
void
commande_locale__msg__MsgStopControl__Sequence__destroy(commande_locale__msg__MsgStopControl__Sequence * array);

/// Check for msg/MsgStopControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__Sequence__are_equal(const commande_locale__msg__MsgStopControl__Sequence * lhs, const commande_locale__msg__MsgStopControl__Sequence * rhs);

/// Copy an array of msg/MsgStopControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_commande_locale
bool
commande_locale__msg__MsgStopControl__Sequence__copy(
  const commande_locale__msg__MsgStopControl__Sequence * input,
  commande_locale__msg__MsgStopControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMANDE_LOCALE__MSG__DETAIL__MSG_STOP_CONTROL__FUNCTIONS_H_
