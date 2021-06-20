// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice
#include "ros_tut/srv/detail/success__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ros_tut__srv__Success_Request__init(ros_tut__srv__Success_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ros_tut__srv__Success_Request__fini(ros_tut__srv__Success_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

ros_tut__srv__Success_Request *
ros_tut__srv__Success_Request__create()
{
  ros_tut__srv__Success_Request * msg = (ros_tut__srv__Success_Request *)malloc(sizeof(ros_tut__srv__Success_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_tut__srv__Success_Request));
  bool success = ros_tut__srv__Success_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_tut__srv__Success_Request__destroy(ros_tut__srv__Success_Request * msg)
{
  if (msg) {
    ros_tut__srv__Success_Request__fini(msg);
  }
  free(msg);
}


bool
ros_tut__srv__Success_Request__Sequence__init(ros_tut__srv__Success_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_tut__srv__Success_Request * data = NULL;
  if (size) {
    data = (ros_tut__srv__Success_Request *)calloc(size, sizeof(ros_tut__srv__Success_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_tut__srv__Success_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_tut__srv__Success_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_tut__srv__Success_Request__Sequence__fini(ros_tut__srv__Success_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_tut__srv__Success_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_tut__srv__Success_Request__Sequence *
ros_tut__srv__Success_Request__Sequence__create(size_t size)
{
  ros_tut__srv__Success_Request__Sequence * array = (ros_tut__srv__Success_Request__Sequence *)malloc(sizeof(ros_tut__srv__Success_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_tut__srv__Success_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_tut__srv__Success_Request__Sequence__destroy(ros_tut__srv__Success_Request__Sequence * array)
{
  if (array) {
    ros_tut__srv__Success_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ros_tut__srv__Success_Response__init(ros_tut__srv__Success_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
ros_tut__srv__Success_Response__fini(ros_tut__srv__Success_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

ros_tut__srv__Success_Response *
ros_tut__srv__Success_Response__create()
{
  ros_tut__srv__Success_Response * msg = (ros_tut__srv__Success_Response *)malloc(sizeof(ros_tut__srv__Success_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_tut__srv__Success_Response));
  bool success = ros_tut__srv__Success_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros_tut__srv__Success_Response__destroy(ros_tut__srv__Success_Response * msg)
{
  if (msg) {
    ros_tut__srv__Success_Response__fini(msg);
  }
  free(msg);
}


bool
ros_tut__srv__Success_Response__Sequence__init(ros_tut__srv__Success_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros_tut__srv__Success_Response * data = NULL;
  if (size) {
    data = (ros_tut__srv__Success_Response *)calloc(size, sizeof(ros_tut__srv__Success_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_tut__srv__Success_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_tut__srv__Success_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_tut__srv__Success_Response__Sequence__fini(ros_tut__srv__Success_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_tut__srv__Success_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_tut__srv__Success_Response__Sequence *
ros_tut__srv__Success_Response__Sequence__create(size_t size)
{
  ros_tut__srv__Success_Response__Sequence * array = (ros_tut__srv__Success_Response__Sequence *)malloc(sizeof(ros_tut__srv__Success_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros_tut__srv__Success_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros_tut__srv__Success_Response__Sequence__destroy(ros_tut__srv__Success_Response__Sequence * array)
{
  if (array) {
    ros_tut__srv__Success_Response__Sequence__fini(array);
  }
  free(array);
}
