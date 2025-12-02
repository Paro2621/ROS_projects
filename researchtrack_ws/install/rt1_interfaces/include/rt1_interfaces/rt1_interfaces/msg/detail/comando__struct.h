// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_interfaces/msg/comando.h"


#ifndef RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_
#define RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/Comando in the package rt1_interfaces.
typedef struct rt1_interfaces__msg__Comando
{
  int64_t target;
  geometry_msgs__msg__Twist velocity;
} rt1_interfaces__msg__Comando;

// Struct for a sequence of rt1_interfaces__msg__Comando.
typedef struct rt1_interfaces__msg__Comando__Sequence
{
  rt1_interfaces__msg__Comando * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt1_interfaces__msg__Comando__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_
