// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from commande_locale:srv/SrvAddProductPushBack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "commande_locale/srv/srv_add_product_push_back.hpp"


#ifndef COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__TRAITS_HPP_
#define COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "commande_locale/srv/detail/srv_add_product_push_back__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace commande_locale
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvAddProductPushBack_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: poste
  {
    out << "poste: ";
    rosidl_generator_traits::value_to_yaml(msg.poste, out);
    out << ", ";
  }

  // member: produit
  {
    out << "produit: ";
    rosidl_generator_traits::value_to_yaml(msg.produit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvAddProductPushBack_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poste
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poste: ";
    rosidl_generator_traits::value_to_yaml(msg.poste, out);
    out << "\n";
  }

  // member: produit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "produit: ";
    rosidl_generator_traits::value_to_yaml(msg.produit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvAddProductPushBack_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_generator_traits
{

[[deprecated("use commande_locale::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const commande_locale::srv::SrvAddProductPushBack_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::srv::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::srv::SrvAddProductPushBack_Request & msg)
{
  return commande_locale::srv::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::srv::SrvAddProductPushBack_Request>()
{
  return "commande_locale::srv::SrvAddProductPushBack_Request";
}

template<>
inline const char * name<commande_locale::srv::SrvAddProductPushBack_Request>()
{
  return "commande_locale/srv/SrvAddProductPushBack_Request";
}

template<>
struct has_fixed_size<commande_locale::srv::SrvAddProductPushBack_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::srv::SrvAddProductPushBack_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace commande_locale
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvAddProductPushBack_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrvAddProductPushBack_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvAddProductPushBack_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_generator_traits
{

[[deprecated("use commande_locale::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const commande_locale::srv::SrvAddProductPushBack_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::srv::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::srv::SrvAddProductPushBack_Response & msg)
{
  return commande_locale::srv::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::srv::SrvAddProductPushBack_Response>()
{
  return "commande_locale::srv::SrvAddProductPushBack_Response";
}

template<>
inline const char * name<commande_locale::srv::SrvAddProductPushBack_Response>()
{
  return "commande_locale/srv/SrvAddProductPushBack_Response";
}

template<>
struct has_fixed_size<commande_locale::srv::SrvAddProductPushBack_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<commande_locale::srv::SrvAddProductPushBack_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace commande_locale
{

namespace srv
{

inline void to_flow_style_yaml(
  const SrvAddProductPushBack_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SrvAddProductPushBack_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrvAddProductPushBack_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace commande_locale

namespace rosidl_generator_traits
{

[[deprecated("use commande_locale::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const commande_locale::srv::SrvAddProductPushBack_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  commande_locale::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use commande_locale::srv::to_yaml() instead")]]
inline std::string to_yaml(const commande_locale::srv::SrvAddProductPushBack_Event & msg)
{
  return commande_locale::srv::to_yaml(msg);
}

template<>
inline const char * data_type<commande_locale::srv::SrvAddProductPushBack_Event>()
{
  return "commande_locale::srv::SrvAddProductPushBack_Event";
}

template<>
inline const char * name<commande_locale::srv::SrvAddProductPushBack_Event>()
{
  return "commande_locale/srv/SrvAddProductPushBack_Event";
}

template<>
struct has_fixed_size<commande_locale::srv::SrvAddProductPushBack_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Event>
  : std::integral_constant<bool, has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Request>::value && has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<commande_locale::srv::SrvAddProductPushBack_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<commande_locale::srv::SrvAddProductPushBack>()
{
  return "commande_locale::srv::SrvAddProductPushBack";
}

template<>
inline const char * name<commande_locale::srv::SrvAddProductPushBack>()
{
  return "commande_locale/srv/SrvAddProductPushBack";
}

template<>
struct has_fixed_size<commande_locale::srv::SrvAddProductPushBack>
  : std::integral_constant<
    bool,
    has_fixed_size<commande_locale::srv::SrvAddProductPushBack_Request>::value &&
    has_fixed_size<commande_locale::srv::SrvAddProductPushBack_Response>::value
  >
{
};

template<>
struct has_bounded_size<commande_locale::srv::SrvAddProductPushBack>
  : std::integral_constant<
    bool,
    has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Request>::value &&
    has_bounded_size<commande_locale::srv::SrvAddProductPushBack_Response>::value
  >
{
};

template<>
struct is_service<commande_locale::srv::SrvAddProductPushBack>
  : std::true_type
{
};

template<>
struct is_service_request<commande_locale::srv::SrvAddProductPushBack_Request>
  : std::true_type
{
};

template<>
struct is_service_response<commande_locale::srv::SrvAddProductPushBack_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMANDE_LOCALE__SRV__DETAIL__SRV_ADD_PRODUCT_PUSH_BACK__TRAITS_HPP_
