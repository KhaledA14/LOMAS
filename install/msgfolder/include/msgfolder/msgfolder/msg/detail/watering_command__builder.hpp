// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgfolder:msg/WateringCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__BUILDER_HPP_
#define MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msgfolder/msg/detail/watering_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msgfolder
{

namespace msg
{

namespace builder
{

class Init_WateringCommand_command
{
public:
  Init_WateringCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgfolder::msg::WateringCommand command(::msgfolder::msg::WateringCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgfolder::msg::WateringCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgfolder::msg::WateringCommand>()
{
  return msgfolder::msg::builder::Init_WateringCommand_command();
}

}  // namespace msgfolder

#endif  // MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__BUILDER_HPP_
