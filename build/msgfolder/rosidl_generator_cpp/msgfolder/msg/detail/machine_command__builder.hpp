// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgfolder:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_
#define MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgfolder/msg/detail/machine_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgfolder
{

namespace msg
{

namespace builder
{

class Init_MachineCommand_command
{
public:
  Init_MachineCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgfolder::msg::MachineCommand command(::msgfolder::msg::MachineCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgfolder::msg::MachineCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgfolder::msg::MachineCommand>()
{
  return msgfolder::msg::builder::Init_MachineCommand_command();
}

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__BUILDER_HPP_
