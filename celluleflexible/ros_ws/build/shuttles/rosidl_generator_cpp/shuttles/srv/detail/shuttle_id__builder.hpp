// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shuttles:srv/ShuttleId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "shuttles/srv/shuttle_id.hpp"


#ifndef SHUTTLES__SRV__DETAIL__SHUTTLE_ID__BUILDER_HPP_
#define SHUTTLES__SRV__DETAIL__SHUTTLE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shuttles/srv/detail/shuttle_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shuttles
{

namespace srv
{

namespace builder
{

class Init_ShuttleId_Request_position
{
public:
  explicit Init_ShuttleId_Request_position(::shuttles::srv::ShuttleId_Request & msg)
  : msg_(msg)
  {}
  ::shuttles::srv::ShuttleId_Request position(::shuttles::srv::ShuttleId_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Request msg_;
};

class Init_ShuttleId_Request_robot
{
public:
  Init_ShuttleId_Request_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShuttleId_Request_position robot(::shuttles::srv::ShuttleId_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_ShuttleId_Request_position(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::srv::ShuttleId_Request>()
{
  return shuttles::srv::builder::Init_ShuttleId_Request_robot();
}

}  // namespace shuttles


namespace shuttles
{

namespace srv
{

namespace builder
{

class Init_ShuttleId_Response_id_shuttle
{
public:
  Init_ShuttleId_Response_id_shuttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::shuttles::srv::ShuttleId_Response id_shuttle(::shuttles::srv::ShuttleId_Response::_id_shuttle_type arg)
  {
    msg_.id_shuttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::srv::ShuttleId_Response>()
{
  return shuttles::srv::builder::Init_ShuttleId_Response_id_shuttle();
}

}  // namespace shuttles


namespace shuttles
{

namespace srv
{

namespace builder
{

class Init_ShuttleId_Event_response
{
public:
  explicit Init_ShuttleId_Event_response(::shuttles::srv::ShuttleId_Event & msg)
  : msg_(msg)
  {}
  ::shuttles::srv::ShuttleId_Event response(::shuttles::srv::ShuttleId_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Event msg_;
};

class Init_ShuttleId_Event_request
{
public:
  explicit Init_ShuttleId_Event_request(::shuttles::srv::ShuttleId_Event & msg)
  : msg_(msg)
  {}
  Init_ShuttleId_Event_response request(::shuttles::srv::ShuttleId_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ShuttleId_Event_response(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Event msg_;
};

class Init_ShuttleId_Event_info
{
public:
  Init_ShuttleId_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShuttleId_Event_request info(::shuttles::srv::ShuttleId_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ShuttleId_Event_request(msg_);
  }

private:
  ::shuttles::srv::ShuttleId_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shuttles::srv::ShuttleId_Event>()
{
  return shuttles::srv::builder::Init_ShuttleId_Event_info();
}

}  // namespace shuttles

#endif  // SHUTTLES__SRV__DETAIL__SHUTTLE_ID__BUILDER_HPP_
