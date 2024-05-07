// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgfolder:msg/WateringCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__STRUCT_HPP_
#define MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msgfolder__msg__WateringCommand __attribute__((deprecated))
#else
# define DEPRECATED__msgfolder__msg__WateringCommand __declspec(deprecated)
#endif

namespace msgfolder
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WateringCommand_
{
  using Type = WateringCommand_<ContainerAllocator>;

  explicit WateringCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit WateringCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    msgfolder::msg::WateringCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgfolder::msg::WateringCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::WateringCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::WateringCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgfolder__msg__WateringCommand
    std::shared_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgfolder__msg__WateringCommand
    std::shared_ptr<msgfolder::msg::WateringCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WateringCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const WateringCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WateringCommand_

// alias to use template instance with default allocator
using WateringCommand =
  msgfolder::msg::WateringCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__STRUCT_HPP_
