// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aiguillages:msg/MsgSensorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aiguillages/msg/msg_sensor_state.hpp"


#ifndef AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__TRAITS_HPP_
#define AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aiguillages/msg/detail/msg_sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace aiguillages
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgSensorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: cpi
  {
    if (msg.cpi.size() == 0) {
      out << "cpi: []";
    } else {
      out << "cpi: [";
      size_t pending_items = msg.cpi.size();
      for (auto item : msg.cpi) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cp
  {
    if (msg.cp.size() == 0) {
      out << "cp: []";
    } else {
      out << "cp: [";
      size_t pending_items = msg.cp.size();
      for (auto item : msg.cp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ps
  {
    if (msg.ps.size() == 0) {
      out << "ps: []";
    } else {
      out << "ps: [";
      size_t pending_items = msg.ps.size();
      for (auto item : msg.ps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dg
  {
    if (msg.dg.size() == 0) {
      out << "dg: []";
    } else {
      out << "dg: [";
      size_t pending_items = msg.dg.size();
      for (auto item : msg.dg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dd
  {
    if (msg.dd.size() == 0) {
      out << "dd: []";
    } else {
      out << "dd: [";
      size_t pending_items = msg.dd.size();
      for (auto item : msg.dd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgSensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: cpi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpi.size() == 0) {
      out << "cpi: []\n";
    } else {
      out << "cpi:\n";
      for (auto item : msg.cpi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cp.size() == 0) {
      out << "cp: []\n";
    } else {
      out << "cp:\n";
      for (auto item : msg.cp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ps.size() == 0) {
      out << "ps: []\n";
    } else {
      out << "ps:\n";
      for (auto item : msg.ps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dg.size() == 0) {
      out << "dg: []\n";
    } else {
      out << "dg:\n";
      for (auto item : msg.dg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dd.size() == 0) {
      out << "dd: []\n";
    } else {
      out << "dd:\n";
      for (auto item : msg.dd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgSensorState & msg, bool use_flow_style = false)
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

}  // namespace aiguillages

namespace rosidl_generator_traits
{

[[deprecated("use aiguillages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aiguillages::msg::MsgSensorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aiguillages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aiguillages::msg::to_yaml() instead")]]
inline std::string to_yaml(const aiguillages::msg::MsgSensorState & msg)
{
  return aiguillages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aiguillages::msg::MsgSensorState>()
{
  return "aiguillages::msg::MsgSensorState";
}

template<>
inline const char * name<aiguillages::msg::MsgSensorState>()
{
  return "aiguillages/msg/MsgSensorState";
}

template<>
struct has_fixed_size<aiguillages::msg::MsgSensorState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<aiguillages::msg::MsgSensorState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<aiguillages::msg::MsgSensorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIGUILLAGES__MSG__DETAIL__MSG_SENSOR_STATE__TRAITS_HPP_
