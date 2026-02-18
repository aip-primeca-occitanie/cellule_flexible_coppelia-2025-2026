// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aiguillages:msg/Capteurs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/capteurs.h"


#ifndef AIGUILLAGES__MSG__DETAIL__CAPTEURS__FUNCTIONS_H_
#define AIGUILLAGES__MSG__DETAIL__CAPTEURS__FUNCTIONS_H_

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
#include "aiguillages/msg/rosidl_generator_c__visibility_control.h"

#include "aiguillages/msg/detail/capteurs__struct.h"

/// Initialize msg/Capteurs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aiguillages__msg__Capteurs
 * )) before or use
 * aiguillages__msg__Capteurs__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__init(aiguillages__msg__Capteurs * msg);

/// Finalize msg/Capteurs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
void
aiguillages__msg__Capteurs__fini(aiguillages__msg__Capteurs * msg);

/// Create msg/Capteurs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aiguillages__msg__Capteurs__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
aiguillages__msg__Capteurs *
aiguillages__msg__Capteurs__create(void);

/// Destroy msg/Capteurs message.
/**
 * It calls
 * aiguillages__msg__Capteurs__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
void
aiguillages__msg__Capteurs__destroy(aiguillages__msg__Capteurs * msg);

/// Check for msg/Capteurs message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__are_equal(const aiguillages__msg__Capteurs * lhs, const aiguillages__msg__Capteurs * rhs);

/// Copy a msg/Capteurs message.
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
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__copy(
  const aiguillages__msg__Capteurs * input,
  aiguillages__msg__Capteurs * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_type_hash_t *
aiguillages__msg__Capteurs__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_runtime_c__type_description__TypeDescription *
aiguillages__msg__Capteurs__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_runtime_c__type_description__TypeSource *
aiguillages__msg__Capteurs__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
const rosidl_runtime_c__type_description__TypeSource__Sequence *
aiguillages__msg__Capteurs__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Capteurs messages.
/**
 * It allocates the memory for the number of elements and calls
 * aiguillages__msg__Capteurs__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__Sequence__init(aiguillages__msg__Capteurs__Sequence * array, size_t size);

/// Finalize array of msg/Capteurs messages.
/**
 * It calls
 * aiguillages__msg__Capteurs__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
void
aiguillages__msg__Capteurs__Sequence__fini(aiguillages__msg__Capteurs__Sequence * array);

/// Create array of msg/Capteurs messages.
/**
 * It allocates the memory for the array and calls
 * aiguillages__msg__Capteurs__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
aiguillages__msg__Capteurs__Sequence *
aiguillages__msg__Capteurs__Sequence__create(size_t size);

/// Destroy array of msg/Capteurs messages.
/**
 * It calls
 * aiguillages__msg__Capteurs__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
void
aiguillages__msg__Capteurs__Sequence__destroy(aiguillages__msg__Capteurs__Sequence * array);

/// Check for msg/Capteurs message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__Sequence__are_equal(const aiguillages__msg__Capteurs__Sequence * lhs, const aiguillages__msg__Capteurs__Sequence * rhs);

/// Copy an array of msg/Capteurs messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aiguillages
bool
aiguillages__msg__Capteurs__Sequence__copy(
  const aiguillages__msg__Capteurs__Sequence * input,
  aiguillages__msg__Capteurs__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AIGUILLAGES__MSG__DETAIL__CAPTEURS__FUNCTIONS_H_
