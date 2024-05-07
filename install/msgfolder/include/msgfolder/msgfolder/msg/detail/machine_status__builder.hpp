// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgfolder:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
#define MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgfolder/msg/detail/machine_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgfolder
{

namespace msg
{

namespace builder
{

class Init_MachineStatus_finished_time
{
public:
  explicit Init_MachineStatus_finished_time(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  ::msgfolder::msg::MachineStatus finished_time(::msgfolder::msg::MachineStatus::_finished_time_type arg)
  {
    msg_.finished_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_start_time
{
public:
  explicit Init_MachineStatus_start_time(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_finished_time start_time(::msgfolder::msg::MachineStatus::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_MachineStatus_finished_time(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_z
{
public:
  explicit Init_MachineStatus_z(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_start_time z(::msgfolder::msg::MachineStatus::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MachineStatus_start_time(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_y
{
public:
  explicit Init_MachineStatus_y(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_z y(::msgfolder::msg::MachineStatus::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MachineStatus_z(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_x
{
public:
  explicit Init_MachineStatus_x(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_y x(::msgfolder::msg::MachineStatus::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MachineStatus_y(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_interval
{
public:
  explicit Init_MachineStatus_interval(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_x interval(::msgfolder::msg::MachineStatus::_interval_type arg)
  {
    msg_.interval = std::move(arg);
    return Init_MachineStatus_x(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_error_nr
{
public:
  explicit Init_MachineStatus_error_nr(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_interval error_nr(::msgfolder::msg::MachineStatus::_error_nr_type arg)
  {
    msg_.error_nr = std::move(arg);
    return Init_MachineStatus_interval(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_sequense_nr
{
public:
  explicit Init_MachineStatus_sequense_nr(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_error_nr sequense_nr(::msgfolder::msg::MachineStatus::_sequense_nr_type arg)
  {
    msg_.sequense_nr = std::move(arg);
    return Init_MachineStatus_error_nr(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_machine_moving
{
public:
  explicit Init_MachineStatus_machine_moving(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_sequense_nr machine_moving(::msgfolder::msg::MachineStatus::_machine_moving_type arg)
  {
    msg_.machine_moving = std::move(arg);
    return Init_MachineStatus_sequense_nr(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_sequense_started
{
public:
  explicit Init_MachineStatus_sequense_started(::msgfolder::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_machine_moving sequense_started(::msgfolder::msg::MachineStatus::_sequense_started_type arg)
  {
    msg_.sequense_started = std::move(arg);
    return Init_MachineStatus_machine_moving(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

class Init_MachineStatus_is_synced
{
public:
  Init_MachineStatus_is_synced()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineStatus_sequense_started is_synced(::msgfolder::msg::MachineStatus::_is_synced_type arg)
  {
    msg_.is_synced = std::move(arg);
    return Init_MachineStatus_sequense_started(msg_);
  }

private:
  ::msgfolder::msg::MachineStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgfolder::msg::MachineStatus>()
{
  return msgfolder::msg::builder::Init_MachineStatus_is_synced();
}

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
