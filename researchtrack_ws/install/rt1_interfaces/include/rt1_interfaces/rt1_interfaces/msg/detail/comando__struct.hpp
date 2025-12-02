// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rt1_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_interfaces/msg/comando.hpp"


#ifndef RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_
#define RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rt1_interfaces__msg__Comando __attribute__((deprecated))
#else
# define DEPRECATED__rt1_interfaces__msg__Comando __declspec(deprecated)
#endif

namespace rt1_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Comando_
{
  using Type = Comando_<ContainerAllocator>;

  explicit Comando_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0ll;
    }
  }

  explicit Comando_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target = 0ll;
    }
  }

  // field types and members
  using _target_type =
    int64_t;
  _target_type target;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__target(
    const int64_t & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rt1_interfaces::msg::Comando_<ContainerAllocator> *;
  using ConstRawPtr =
    const rt1_interfaces::msg::Comando_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rt1_interfaces::msg::Comando_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rt1_interfaces::msg::Comando_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rt1_interfaces__msg__Comando
    std::shared_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rt1_interfaces__msg__Comando
    std::shared_ptr<rt1_interfaces::msg::Comando_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Comando_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Comando_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Comando_

// alias to use template instance with default allocator
using Comando =
  rt1_interfaces::msg::Comando_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rt1_interfaces

#endif  // RT1_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_
