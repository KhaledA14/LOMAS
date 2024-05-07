// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgfolder:msg/WateringCommand.idl
// generated code does not contain a copyright notice

#ifndef MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__TRAITS_HPP_
#define MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msgfolder/msg/detail/watering_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msgfolder
{

namespace msg
{

inline void to_flow_style_yaml(
  const WateringCommand & msg,
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
  const WateringCommand & msg,
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

inline std::string to_yaml(const WateringCommand & msg, bool use_flow_style = false)
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
  const msgfolder::msg::WateringCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  msgfolder::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msgfolder::msg::to_yaml() instead")]]
inline std::string to_yaml(const msgfolder::msg::WateringCommand & msg)
{
  return msgfolder::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msgfolder::msg::WateringCommand>()
{
  return "msgfolder::msg::WateringCommand";
}

template<>
inline const char * name<msgfolder::msg::WateringCommand>()
{
  return "msgfolder/msg/WateringCommand";
}

template<>
struct has_fixed_size<msgfolder::msg::WateringCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgfolder::msg::WateringCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgfolder::msg::WateringCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSGFOLDER__MSG__DETAIL__WATERING_COMMAND__TRAITS_HPP_
