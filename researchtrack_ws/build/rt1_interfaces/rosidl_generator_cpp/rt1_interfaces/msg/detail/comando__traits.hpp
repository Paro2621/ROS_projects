// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_interfaces/msg/comando.hpp"


#ifndef RT1_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_
#define RT1_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rt1_interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rt1_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Comando & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Comando & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Comando & msg, bool use_flow_style = false)
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

}  // namespace rt1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rt1_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt1_interfaces::msg::Comando & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt1_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt1_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rt1_interfaces::msg::Comando & msg)
{
  return rt1_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rt1_interfaces::msg::Comando>()
{
  return "rt1_interfaces::msg::Comando";
}

template<>
inline const char * name<rt1_interfaces::msg::Comando>()
{
  return "rt1_interfaces/msg/Comando";
}

template<>
struct has_fixed_size<rt1_interfaces::msg::Comando>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<rt1_interfaces::msg::Comando>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<rt1_interfaces::msg::Comando>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RT1_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_
