# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:roundtrip_msg__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:roundtrip_msg__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:roundtrip_msg__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:roundtrip_msg__rosidl_typesupport_c;__rosidl_generator_cpp:roundtrip_msg__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:roundtrip_msg__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:roundtrip_msg__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:roundtrip_msg__rosidl_typesupport_cpp;__rosidl_generator_py:roundtrip_msg__rosidl_generator_py")

# populate roundtrip_msg_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "roundtrip_msg::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'roundtrip_msg' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND roundtrip_msg_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
