// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rt1_interfaces/msg/detail/comando__functions.h"
#include "rt1_interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rt1_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Comando_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rt1_interfaces::msg::Comando(_init);
}

void Comando_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rt1_interfaces::msg::Comando *>(message_memory);
  typed_message->~Comando();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Comando_message_member_array[2] = {
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_interfaces::msg::Comando, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rt1_interfaces::msg::Comando, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Comando_message_members = {
  "rt1_interfaces::msg",  // message namespace
  "Comando",  // message name
  2,  // number of fields
  sizeof(rt1_interfaces::msg::Comando),
  false,  // has_any_key_member_
  Comando_message_member_array,  // message members
  Comando_init_function,  // function to initialize message memory (memory has to be allocated)
  Comando_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Comando_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Comando_message_members,
  get_message_typesupport_handle_function,
  &rt1_interfaces__msg__Comando__get_type_hash,
  &rt1_interfaces__msg__Comando__get_type_description,
  &rt1_interfaces__msg__Comando__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rt1_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rt1_interfaces::msg::Comando>()
{
  return &::rt1_interfaces::msg::rosidl_typesupport_introspection_cpp::Comando_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rt1_interfaces, msg, Comando)() {
  return &::rt1_interfaces::msg::rosidl_typesupport_introspection_cpp::Comando_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
