// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgfolder:msg/WateringCommand.idl
// generated code does not contain a copyright notice
#include "msgfolder/msg/detail/watering_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msgfolder__msg__WateringCommand__init(msgfolder__msg__WateringCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  return true;
}

void
msgfolder__msg__WateringCommand__fini(msgfolder__msg__WateringCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
}

bool
msgfolder__msg__WateringCommand__are_equal(const msgfolder__msg__WateringCommand * lhs, const msgfolder__msg__WateringCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
msgfolder__msg__WateringCommand__copy(
  const msgfolder__msg__WateringCommand * input,
  msgfolder__msg__WateringCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  return true;
}

msgfolder__msg__WateringCommand *
msgfolder__msg__WateringCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgfolder__msg__WateringCommand * msg = (msgfolder__msg__WateringCommand *)allocator.allocate(sizeof(msgfolder__msg__WateringCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgfolder__msg__WateringCommand));
  bool success = msgfolder__msg__WateringCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgfolder__msg__WateringCommand__destroy(msgfolder__msg__WateringCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgfolder__msg__WateringCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgfolder__msg__WateringCommand__Sequence__init(msgfolder__msg__WateringCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgfolder__msg__WateringCommand * data = NULL;

  if (size) {
    data = (msgfolder__msg__WateringCommand *)allocator.zero_allocate(size, sizeof(msgfolder__msg__WateringCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgfolder__msg__WateringCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgfolder__msg__WateringCommand__fini(&data[i - 1]);
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
msgfolder__msg__WateringCommand__Sequence__fini(msgfolder__msg__WateringCommand__Sequence * array)
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
      msgfolder__msg__WateringCommand__fini(&array->data[i]);
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

msgfolder__msg__WateringCommand__Sequence *
msgfolder__msg__WateringCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgfolder__msg__WateringCommand__Sequence * array = (msgfolder__msg__WateringCommand__Sequence *)allocator.allocate(sizeof(msgfolder__msg__WateringCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgfolder__msg__WateringCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgfolder__msg__WateringCommand__Sequence__destroy(msgfolder__msg__WateringCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgfolder__msg__WateringCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgfolder__msg__WateringCommand__Sequence__are_equal(const msgfolder__msg__WateringCommand__Sequence * lhs, const msgfolder__msg__WateringCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgfolder__msg__WateringCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgfolder__msg__WateringCommand__Sequence__copy(
  const msgfolder__msg__WateringCommand__Sequence * input,
  msgfolder__msg__WateringCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgfolder__msg__WateringCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msgfolder__msg__WateringCommand * data =
      (msgfolder__msg__WateringCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgfolder__msg__WateringCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msgfolder__msg__WateringCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgfolder__msg__WateringCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
