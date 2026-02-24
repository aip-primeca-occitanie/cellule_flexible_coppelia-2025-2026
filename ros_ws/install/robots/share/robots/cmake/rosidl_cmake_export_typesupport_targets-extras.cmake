# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:robots__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:robots__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:robots__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:robots__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:robots__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:robots__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:robots__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:robots__rosidl_typesupport_cpp;:robots__rosidl_generator_py")

# populate robots_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "robots::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'robots' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND robots_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
