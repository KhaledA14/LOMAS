// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgfolder:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_HPP_
#define MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msgfolder__msg__MachineCommand __attribute__((deprecated))
#else
# define DEPRECATED__msgfolder__msg__MachineCommand __declspec(deprecated)
#endif

namespace msgfolder
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachineCommand_
{
  using Type = MachineCommand_<ContainerAllocator>;

  explicit MachineCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit MachineCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgfolder::msg::MachineCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgfolder::msg::MachineCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::MachineCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::MachineCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgfolder__msg__MachineCommand
    std::shared_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgfolder__msg__MachineCommand
    std::shared_ptr<msgfolder::msg::MachineCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachineCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachineCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachineCommand_

// alias to use template instance with default allocator
using MachineCommand =
  msgfolder::msg::MachineCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__STRUCT_HPP_
