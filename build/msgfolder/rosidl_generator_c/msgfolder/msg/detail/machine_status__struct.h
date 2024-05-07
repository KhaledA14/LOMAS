// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgfolder:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
#define MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
// Member 'finished_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MachineStatus in the package msgfolder.
typedef struct msgfolder__msg__MachineStatus
{
  bool is_synced;
  bool sequense_started;
  bool machine_moving;
  uint8_t sequense_nr;
  uint8_t error_nr;
  uint16_t interval;
  float x;
  float y;
  float z;
  builtin_interfaces__msg__Time start_time;
  builtin_interfaces__msg__Time finished_time;
} msgfolder__msg__MachineStatus;

// Struct for a sequence of msgfolder__msg__MachineStatus.
typedef struct msgfolder__msg__MachineStatus__Sequence
{
  msgfolder__msg__MachineStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgfolder__msg__MachineStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
