// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgfolder:msg/WateringStatus.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__WATERING_STATUS__STRUCT_HPP_
#define MSGFOLDER__MSG__DETAIL__WATERING_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_time'
// Member 'finished_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msgfolder__msg__WateringStatus __attribute__((deprecated))
#else
# define DEPRECATED__msgfolder__msg__WateringStatus __declspec(deprecated)
#endif

namespace msgfolder
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WateringStatus_
{
  using Type = WateringStatus_<ContainerAllocator>;

  explicit WateringStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    finished_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->watering = false;
      this->interval = 0;
      this->duration = 0;
      this->zones = 0;
      this->error_nr = 0;
    }
  }

  explicit WateringStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_alloc, _init),
    finished_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->watering = false;
      this->interval = 0;
      this->duration = 0;
      this->zones = 0;
      this->error_nr = 0;
    }
  }

  // field types and members
  using _watering_type =
    bool;
  _watering_type watering;
  using _interval_type =
    uint8_t;
  _interval_type interval;
  using _duration_type =
    uint8_t;
  _duration_type duration;
  using _zones_type =
    uint8_t;
  _zones_type zones;
  using _error_nr_type =
    uint8_t;
  _error_nr_type error_nr;
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _finished_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _finished_time_type finished_time;

  // setters for named parameter idiom
  Type & set__watering(
    const bool & _arg)
  {
    this->watering = _arg;
    return *this;
  }
  Type & set__interval(
    const uint8_t & _arg)
  {
    this->interval = _arg;
    return *this;
  }
  Type & set__duration(
    const uint8_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__zones(
    const uint8_t & _arg)
  {
    this->zones = _arg;
    return *this;
  }
  Type & set__error_nr(
    const uint8_t & _arg)
  {
    this->error_nr = _arg;
    return *this;
  }
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__finished_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->finished_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgfolder::msg::WateringStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgfolder::msg::WateringStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::WateringStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgfolder::msg::WateringStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgfolder__msg__WateringStatus
    std::shared_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgfolder__msg__WateringStatus
    std::shared_ptr<msgfolder::msg::WateringStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WateringStatus_ & other) const
  {
    if (this->watering != other.watering) {
      return false;
    }
    if (this->interval != other.interval) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->zones != other.zones) {
      return false;
    }
    if (this->error_nr != other.error_nr) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->finished_time != other.finished_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const WateringStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WateringStatus_

// alias to use template instance with default allocator
using WateringStatus =
  msgfolder::msg::WateringStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__WATERING_STATUS__STRUCT_HPP_
