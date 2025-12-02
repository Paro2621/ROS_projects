// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_interfaces/msg/comando.hpp"


#ifndef RT1_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
#define RT1_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rt1_interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rt1_interfaces
{

namespace msg
{

namespace builder
{

class Init_Comando_velocity
{
public:
  explicit Init_Comando_velocity(::rt1_interfaces::msg::Comando & msg)
  : msg_(msg)
  {}
  ::rt1_interfaces::msg::Comando velocity(::rt1_interfaces::msg::Comando::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt1_interfaces::msg::Comando msg_;
};

class Init_Comando_target
{
public:
  Init_Comando_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Comando_velocity target(::rt1_interfaces::msg::Comando::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Comando_velocity(msg_);
  }

private:
  ::rt1_interfaces::msg::Comando msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt1_interfaces::msg::Comando>()
{
  return rt1_interfaces::msg::builder::Init_Comando_target();
}

}  // namespace rt1_interfaces

#endif  // RT1_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
