// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgfolder:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_
#define MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MachineCommand in the package msgfolder.
typedef struct msgfolder__msg__MachineCommand
{
  uint8_t command;
} msgfolder__msg__MachineCommand;

// Struct for a sequence of msgfolder__msg__MachineCommand.
typedef struct msgfolder__msg__MachineCommand__Sequence
{
  msgfolder__msg__MachineCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgfolder__msg__MachineCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_H_
