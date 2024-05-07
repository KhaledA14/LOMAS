// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgfolder:msg/MachineCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_
#define MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgfolder/msg/detail/machine_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msgfolder
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachineCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachineCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachineCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msgfolder

namespace rosidl_generator_traits
{

[[deprecated("use msgfolder::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msgfolder::msg::MachineCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgfolder::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgfolder::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgfolder::msg::MachineCommand & msg)
{
  return msgfolder::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgfolder::msg::MachineCommand>()
{
  return "msgfolder::msg::MachineCommand";
}

template<>
inline const char * name<msgfolder::msg::MachineCommand>()
{
  return "msgfolder/msg/MachineCommand";
}

template<>
struct has_fixed_size<msgfolder::msg::MachineCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgfolder::msg::MachineCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgfolder::msg::MachineCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGFOLDER__MSG__DETAIL__MACHINE_COMMAND__TRAITS_HPP_
