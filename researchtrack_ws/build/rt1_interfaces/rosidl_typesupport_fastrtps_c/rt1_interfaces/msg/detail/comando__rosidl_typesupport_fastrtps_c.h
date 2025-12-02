// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice
#ifndef RT1_INTERFACES__MSG__DETAIL__COMANDO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RT1_INTERFACES__MSG__DETAIL__COMANDO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rt1_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rt1_interfaces/msg/detail/comando__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
bool cdr_serialize_rt1_interfaces__msg__Comando(
  const rt1_interfaces__msg__Comando * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
bool cdr_deserialize_rt1_interfaces__msg__Comando(
  eprosima::fastcdr::Cdr &,
  rt1_interfaces__msg__Comando * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
size_t get_serialized_size_rt1_interfaces__msg__Comando(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
size_t max_serialized_size_rt1_interfaces__msg__Comando(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
bool cdr_serialize_key_rt1_interfaces__msg__Comando(
  const rt1_interfaces__msg__Comando * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
size_t get_serialized_size_key_rt1_interfaces__msg__Comando(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
size_t max_serialized_size_key_rt1_interfaces__msg__Comando(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rt1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rt1_interfaces, msg, Comando)();

#ifdef __cplusplus
}
#endif

#endif  // RT1_INTERFACES__MSG__DETAIL__COMANDO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
