// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roundtrip_msg/msg/detail/roundtrip__rosidl_typesupport_introspection_c.h"
#include "roundtrip_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roundtrip_msg/msg/detail/roundtrip__functions.h"
#include "roundtrip_msg/msg/detail/roundtrip__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roundtrip_msg__msg__Roundtrip__init(message_memory);
}

void roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_fini_function(void * message_memory)
{
  roundtrip_msg__msg__Roundtrip__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_member_array[2] = {
  {
    "tpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roundtrip_msg__msg__Roundtrip, tpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgcnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roundtrip_msg__msg__Roundtrip, msgcnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_members = {
  "roundtrip_msg__msg",  // message namespace
  "Roundtrip",  // message name
  2,  // number of fields
  sizeof(roundtrip_msg__msg__Roundtrip),
  roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_member_array,  // message members
  roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_init_function,  // function to initialize message memory (memory has to be allocated)
  roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_type_support_handle = {
  0,
  &roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roundtrip_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roundtrip_msg, msg, Roundtrip)() {
  if (!roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_type_support_handle.typesupport_identifier) {
    roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roundtrip_msg__msg__Roundtrip__rosidl_typesupport_introspection_c__Roundtrip_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
