// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice

#ifndef ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__STRUCT_H_
#define ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Roundtrip in the package roundtrip_msg.
typedef struct roundtrip_msg__msg__Roundtrip
{
  uint64_t tpoint;
  int32_t msgcnt;
} roundtrip_msg__msg__Roundtrip;

// Struct for a sequence of roundtrip_msg__msg__Roundtrip.
typedef struct roundtrip_msg__msg__Roundtrip__Sequence
{
  roundtrip_msg__msg__Roundtrip * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roundtrip_msg__msg__Roundtrip__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROUNDTRIP_MSG__MSG__DETAIL__ROUNDTRIP__STRUCT_H_
