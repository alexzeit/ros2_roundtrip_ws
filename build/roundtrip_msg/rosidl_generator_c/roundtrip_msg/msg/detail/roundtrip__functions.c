// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roundtrip_msg:msg/Roundtrip.idl
// generated code does not contain a copyright notice
#include "roundtrip_msg/msg/detail/roundtrip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roundtrip_msg__msg__Roundtrip__init(roundtrip_msg__msg__Roundtrip * msg)
{
  if (!msg) {
    return false;
  }
  // tpoint
  // msgcnt
  return true;
}

void
roundtrip_msg__msg__Roundtrip__fini(roundtrip_msg__msg__Roundtrip * msg)
{
  if (!msg) {
    return;
  }
  // tpoint
  // msgcnt
}

bool
roundtrip_msg__msg__Roundtrip__are_equal(const roundtrip_msg__msg__Roundtrip * lhs, const roundtrip_msg__msg__Roundtrip * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tpoint
  if (lhs->tpoint != rhs->tpoint) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  return true;
}

bool
roundtrip_msg__msg__Roundtrip__copy(
  const roundtrip_msg__msg__Roundtrip * input,
  roundtrip_msg__msg__Roundtrip * output)
{
  if (!input || !output) {
    return false;
  }
  // tpoint
  output->tpoint = input->tpoint;
  // msgcnt
  output->msgcnt = input->msgcnt;
  return true;
}

roundtrip_msg__msg__Roundtrip *
roundtrip_msg__msg__Roundtrip__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roundtrip_msg__msg__Roundtrip * msg = (roundtrip_msg__msg__Roundtrip *)allocator.allocate(sizeof(roundtrip_msg__msg__Roundtrip), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roundtrip_msg__msg__Roundtrip));
  bool success = roundtrip_msg__msg__Roundtrip__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roundtrip_msg__msg__Roundtrip__destroy(roundtrip_msg__msg__Roundtrip * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roundtrip_msg__msg__Roundtrip__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roundtrip_msg__msg__Roundtrip__Sequence__init(roundtrip_msg__msg__Roundtrip__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roundtrip_msg__msg__Roundtrip * data = NULL;

  if (size) {
    data = (roundtrip_msg__msg__Roundtrip *)allocator.zero_allocate(size, sizeof(roundtrip_msg__msg__Roundtrip), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roundtrip_msg__msg__Roundtrip__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roundtrip_msg__msg__Roundtrip__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roundtrip_msg__msg__Roundtrip__Sequence__fini(roundtrip_msg__msg__Roundtrip__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roundtrip_msg__msg__Roundtrip__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roundtrip_msg__msg__Roundtrip__Sequence *
roundtrip_msg__msg__Roundtrip__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roundtrip_msg__msg__Roundtrip__Sequence * array = (roundtrip_msg__msg__Roundtrip__Sequence *)allocator.allocate(sizeof(roundtrip_msg__msg__Roundtrip__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roundtrip_msg__msg__Roundtrip__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roundtrip_msg__msg__Roundtrip__Sequence__destroy(roundtrip_msg__msg__Roundtrip__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roundtrip_msg__msg__Roundtrip__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roundtrip_msg__msg__Roundtrip__Sequence__are_equal(const roundtrip_msg__msg__Roundtrip__Sequence * lhs, const roundtrip_msg__msg__Roundtrip__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roundtrip_msg__msg__Roundtrip__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roundtrip_msg__msg__Roundtrip__Sequence__copy(
  const roundtrip_msg__msg__Roundtrip__Sequence * input,
  roundtrip_msg__msg__Roundtrip__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roundtrip_msg__msg__Roundtrip);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roundtrip_msg__msg__Roundtrip * data =
      (roundtrip_msg__msg__Roundtrip *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roundtrip_msg__msg__Roundtrip__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roundtrip_msg__msg__Roundtrip__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roundtrip_msg__msg__Roundtrip__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
