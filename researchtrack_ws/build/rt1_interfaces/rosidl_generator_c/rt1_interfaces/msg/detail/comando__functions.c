// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice
#include "rt1_interfaces/msg/detail/comando__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
rt1_interfaces__msg__Comando__init(rt1_interfaces__msg__Comando * msg)
{
  if (!msg) {
    return false;
  }
  // target
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    rt1_interfaces__msg__Comando__fini(msg);
    return false;
  }
  return true;
}

void
rt1_interfaces__msg__Comando__fini(rt1_interfaces__msg__Comando * msg)
{
  if (!msg) {
    return;
  }
  // target
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
}

bool
rt1_interfaces__msg__Comando__are_equal(const rt1_interfaces__msg__Comando * lhs, const rt1_interfaces__msg__Comando * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
rt1_interfaces__msg__Comando__copy(
  const rt1_interfaces__msg__Comando * input,
  rt1_interfaces__msg__Comando * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  output->target = input->target;
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

rt1_interfaces__msg__Comando *
rt1_interfaces__msg__Comando__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_interfaces__msg__Comando * msg = (rt1_interfaces__msg__Comando *)allocator.allocate(sizeof(rt1_interfaces__msg__Comando), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rt1_interfaces__msg__Comando));
  bool success = rt1_interfaces__msg__Comando__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rt1_interfaces__msg__Comando__destroy(rt1_interfaces__msg__Comando * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rt1_interfaces__msg__Comando__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rt1_interfaces__msg__Comando__Sequence__init(rt1_interfaces__msg__Comando__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_interfaces__msg__Comando * data = NULL;

  if (size) {
    data = (rt1_interfaces__msg__Comando *)allocator.zero_allocate(size, sizeof(rt1_interfaces__msg__Comando), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rt1_interfaces__msg__Comando__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rt1_interfaces__msg__Comando__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rt1_interfaces__msg__Comando__Sequence__fini(rt1_interfaces__msg__Comando__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rt1_interfaces__msg__Comando__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rt1_interfaces__msg__Comando__Sequence *
rt1_interfaces__msg__Comando__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rt1_interfaces__msg__Comando__Sequence * array = (rt1_interfaces__msg__Comando__Sequence *)allocator.allocate(sizeof(rt1_interfaces__msg__Comando__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rt1_interfaces__msg__Comando__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rt1_interfaces__msg__Comando__Sequence__destroy(rt1_interfaces__msg__Comando__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rt1_interfaces__msg__Comando__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rt1_interfaces__msg__Comando__Sequence__are_equal(const rt1_interfaces__msg__Comando__Sequence * lhs, const rt1_interfaces__msg__Comando__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rt1_interfaces__msg__Comando__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rt1_interfaces__msg__Comando__Sequence__copy(
  const rt1_interfaces__msg__Comando__Sequence * input,
  rt1_interfaces__msg__Comando__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rt1_interfaces__msg__Comando);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rt1_interfaces__msg__Comando * data =
      (rt1_interfaces__msg__Comando *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rt1_interfaces__msg__Comando__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rt1_interfaces__msg__Comando__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rt1_interfaces__msg__Comando__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
