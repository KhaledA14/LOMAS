// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgfolder:msg/WateringStatus.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__WATERING_STATUS__BUILDER_HPP_
#define MSGFOLDER__MSG__DETAIL__WATERING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgfolder/msg/detail/watering_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgfolder
{

namespace msg
{

namespace builder
{

class Init_WateringStatus_finished_time
{
public:
  explicit Init_WateringStatus_finished_time(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  ::msgfolder::msg::WateringStatus finished_time(::msgfolder::msg::WateringStatus::_finished_time_type arg)
  {
    msg_.finished_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_start_time
{
public:
  explicit Init_WateringStatus_start_time(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  Init_WateringStatus_finished_time start_time(::msgfolder::msg::WateringStatus::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_WateringStatus_finished_time(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_error_nr
{
public:
  explicit Init_WateringStatus_error_nr(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  Init_WateringStatus_start_time error_nr(::msgfolder::msg::WateringStatus::_error_nr_type arg)
  {
    msg_.error_nr = std::move(arg);
    return Init_WateringStatus_start_time(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_zones
{
public:
  explicit Init_WateringStatus_zones(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  Init_WateringStatus_error_nr zones(::msgfolder::msg::WateringStatus::_zones_type arg)
  {
    msg_.zones = std::move(arg);
    return Init_WateringStatus_error_nr(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_duration
{
public:
  explicit Init_WateringStatus_duration(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  Init_WateringStatus_zones duration(::msgfolder::msg::WateringStatus::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_WateringStatus_zones(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_interval
{
public:
  explicit Init_WateringStatus_interval(::msgfolder::msg::WateringStatus & msg)
  : msg_(msg)
  {}
  Init_WateringStatus_duration interval(::msgfolder::msg::WateringStatus::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return Init_WateringStatus_duration(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

class Init_WateringStatus_watering
{
public:
  Init_WateringStatus_watering()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WateringStatus_interval watering(::msgfolder::msg::WateringStatus::_watering_type arg)
  {
    msg_.watering = std::move(arg);
    return Init_WateringStatus_interval(msg_);
  }

private:
  ::msgfolder::msg::WateringStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgfolder::msg::WateringStatus>()
{
  return msgfolder::msg::builder::Init_WateringStatus_watering();
}

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__WATERING_STATUS__BUILDER_HPP_
