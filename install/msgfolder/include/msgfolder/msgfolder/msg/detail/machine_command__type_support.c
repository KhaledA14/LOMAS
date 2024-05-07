// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgfolder:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgfolder/msg/detail/machine_command__rosidl_typesupport_introspection_c.h"
#include "msgfolder/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgfolder/msg/detail/machine_command__functions.h"
#include "msgfolder/msg/detail/machine_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgfolder__msg__MachineCommand__init(message_memory);
}

void msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_fini_function(void * message_memory)
{
  msgfolder__msg__MachineCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgfolder__msg__MachineCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_members = {
  "msgfolder__msg",  // message namespace
  "MachineCommand",  // message name
  1,  // number of fields
  sizeof(msgfolder__msg__MachineCommand),
  msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_member_array,  // message members
  msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_type_support_handle = {
  0,
  &msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgfolder
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgfolder, msg, MachineCommand)() {
  if (!msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_type_support_handle.typesupport_identifier) {
    msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msgfolder__msg__MachineCommand__rosidl_typesupport_introspection_c__MachineCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
