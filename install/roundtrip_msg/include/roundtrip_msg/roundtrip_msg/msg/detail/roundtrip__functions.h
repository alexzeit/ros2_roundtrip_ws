// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice

#ifndef ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__FUNCTIONS_H_
#define ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roundtrip_msg/msg/rosidl_generator_c__visibility_control.h"

#include "roundtrip_msg/msg/detail/roundtrip__struct.h"

/// Initialize msg/Roundtrip message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roundtrip_msg__msg__Roundtrip
 * )) before or use
 * roundtrip_msg__msg__Roundtrip__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__init(roundtrip_msg__msg__Roundtrip * msg);

/// Finalize msg/Roundtrip message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
void
roundtrip_msg__msg__Roundtrip__fini(roundtrip_msg__msg__Roundtrip * msg);

/// Create msg/Roundtrip message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roundtrip_msg__msg__Roundtrip__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
roundtrip_msg__msg__Roundtrip *
roundtrip_msg__msg__Roundtrip__create();

/// Destroy msg/Roundtrip message.
/**
 * It calls
 * roundtrip_msg__msg__Roundtrip__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
void
roundtrip_msg__msg__Roundtrip__destroy(roundtrip_msg__msg__Roundtrip * msg);

/// Check for msg/Roundtrip message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__are_equal(const roundtrip_msg__msg__Roundtrip * lhs, const roundtrip_msg__msg__Roundtrip * rhs);

/// Copy a msg/Roundtrip message.
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
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__copy(
  const roundtrip_msg__msg__Roundtrip * input,
  roundtrip_msg__msg__Roundtrip * output);

/// Initialize array of msg/Roundtrip messages.
/**
 * It allocates the memory for the number of elements and calls
 * roundtrip_msg__msg__Roundtrip__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__Sequence__init(roundtrip_msg__msg__Roundtrip__Sequence * array, size_t size);

/// Finalize array of msg/Roundtrip messages.
/**
 * It calls
 * roundtrip_msg__msg__Roundtrip__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
void
roundtrip_msg__msg__Roundtrip__Sequence__fini(roundtrip_msg__msg__Roundtrip__Sequence * array);

/// Create array of msg/Roundtrip messages.
/**
 * It allocates the memory for the array and calls
 * roundtrip_msg__msg__Roundtrip__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
roundtrip_msg__msg__Roundtrip__Sequence *
roundtrip_msg__msg__Roundtrip__Sequence__create(size_t size);

/// Destroy array of msg/Roundtrip messages.
/**
 * It calls
 * roundtrip_msg__msg__Roundtrip__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
void
roundtrip_msg__msg__Roundtrip__Sequence__destroy(roundtrip_msg__msg__Roundtrip__Sequence * array);

/// Check for msg/Roundtrip message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__Sequence__are_equal(const roundtrip_msg__msg__Roundtrip__Sequence * lhs, const roundtrip_msg__msg__Roundtrip__Sequence * rhs);

/// Copy an array of msg/Roundtrip messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roundtrip_msg
bool
roundtrip_msg__msg__Roundtrip__Sequence__copy(
  const roundtrip_msg__msg__Roundtrip__Sequence * input,
  roundtrip_msg__msg__Roundtrip__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__FUNCTIONS_H_
