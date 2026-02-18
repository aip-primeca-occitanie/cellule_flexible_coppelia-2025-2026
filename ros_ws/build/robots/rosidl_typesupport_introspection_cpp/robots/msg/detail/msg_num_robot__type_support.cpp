// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robots:msg/MsgNumRobot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robots/msg/detail/msg_num_robot__functions.h"
#include "robots/msg/detail/msg_num_robot__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robots
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MsgNumRobot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robots::msg::MsgNumRobot(_init);
}

void MsgNumRobot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robots::msg::MsgNumRobot *>(message_memory);
  typed_message->~MsgNumRobot();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgNumRobot_message_member_array[2] = {
  {
    "num_robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robots::msg::MsgNumRobot, num_robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robots::msg::MsgNumRobot, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgNumRobot_message_members = {
  "robots::msg",  // message namespace
  "MsgNumRobot",  // message name
  2,  // number of fields
  sizeof(robots::msg::MsgNumRobot),
  false,  // has_any_key_member_
  MsgNumRobot_message_member_array,  // message members
  MsgNumRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgNumRobot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgNumRobot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgNumRobot_message_members,
  get_message_typesupport_handle_function,
  &robots__msg__MsgNumRobot__get_type_hash,
  &robots__msg__MsgNumRobot__get_type_description,
  &robots__msg__MsgNumRobot__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robots


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robots::msg::MsgNumRobot>()
{
  return &::robots::msg::rosidl_typesupport_introspection_cpp::MsgNumRobot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robots, msg, MsgNumRobot)() {
  return &::robots::msg::rosidl_typesupport_introspection_cpp::MsgNumRobot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
