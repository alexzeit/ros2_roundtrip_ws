# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_roundtrip_pong_cmsg_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED roundtrip_pong_cmsg_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(roundtrip_pong_cmsg_FOUND FALSE)
  elseif(NOT roundtrip_pong_cmsg_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(roundtrip_pong_cmsg_FOUND FALSE)
  endif()
  return()
endif()
set(_roundtrip_pong_cmsg_CONFIG_INCLUDED TRUE)

# output package information
if(NOT roundtrip_pong_cmsg_FIND_QUIETLY)
  message(STATUS "Found roundtrip_pong_cmsg: 0.0.1 (${roundtrip_pong_cmsg_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'roundtrip_pong_cmsg' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${roundtrip_pong_cmsg_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(roundtrip_pong_cmsg_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${roundtrip_pong_cmsg_DIR}/${_extra}")
endforeach()
