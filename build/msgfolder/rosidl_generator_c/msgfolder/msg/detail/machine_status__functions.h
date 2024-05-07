// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgfolder:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__FUNCTIONS_H_
#define MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgfolder/msg/rosidl_generator_c__visibility_control.h"

#include "msgfolder/msg/detail/machine_status__struct.h"

/// Initialize msg/MachineStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgfolder__msg__MachineStatus
 * )) before or use
 * msgfolder__msg__MachineStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__init(msgfolder__msg__MachineStatus * msg);

/// Finalize msg/MachineStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
void
msgfolder__msg__MachineStatus__fini(msgfolder__msg__MachineStatus * msg);

/// Create msg/MachineStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgfolder__msg__MachineStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
msgfolder__msg__MachineStatus *
msgfolder__msg__MachineStatus__create();

/// Destroy msg/MachineStatus message.
/**
 * It calls
 * msgfolder__msg__MachineStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
void
msgfolder__msg__MachineStatus__destroy(msgfolder__msg__MachineStatus * msg);

/// Check for msg/MachineStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__are_equal(const msgfolder__msg__MachineStatus * lhs, const msgfolder__msg__MachineStatus * rhs);

/// Copy a msg/MachineStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__copy(
  const msgfolder__msg__MachineStatus * input,
  msgfolder__msg__MachineStatus * output);

/// Initialize array of msg/MachineStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgfolder__msg__MachineStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__Sequence__init(msgfolder__msg__MachineStatus__Sequence * array, size_t size);

/// Finalize array of msg/MachineStatus messages.
/**
 * It calls
 * msgfolder__msg__MachineStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
void
msgfolder__msg__MachineStatus__Sequence__fini(msgfolder__msg__MachineStatus__Sequence * array);

/// Create array of msg/MachineStatus messages.
/**
 * It allocates the memory for the array and calls
 * msgfolder__msg__MachineStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
msgfolder__msg__MachineStatus__Sequence *
msgfolder__msg__MachineStatus__Sequence__create(size_t size);

/// Destroy array of msg/MachineStatus messages.
/**
 * It calls
 * msgfolder__msg__MachineStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
void
msgfolder__msg__MachineStatus__Sequence__destroy(msgfolder__msg__MachineStatus__Sequence * array);

/// Check for msg/MachineStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__Sequence__are_equal(const msgfolder__msg__MachineStatus__Sequence * lhs, const msgfolder__msg__MachineStatus__Sequence * rhs);

/// Copy an array of msg/MachineStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_msgfolder
bool
msgfolder__msg__MachineStatus__Sequence__copy(
  const msgfolder__msg__MachineStatus__Sequence * input,
  msgfolder__msg__MachineStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__FUNCTIONS_H_
