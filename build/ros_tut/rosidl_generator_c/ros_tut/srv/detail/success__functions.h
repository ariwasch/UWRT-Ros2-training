// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_tut:srv/Success.idl
// generated code does not contain a copyright notice

#ifndef ROS_TUT__SRV__DETAIL__SUCCESS__FUNCTIONS_H_
#define ROS_TUT__SRV__DETAIL__SUCCESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_tut/msg/rosidl_generator_c__visibility_control.h"

#include "ros_tut/srv/detail/success__struct.h"

/// Initialize srv/Success message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_tut__srv__Success_Request
 * )) before or use
 * ros_tut__srv__Success_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
bool
ros_tut__srv__Success_Request__init(ros_tut__srv__Success_Request * msg);

/// Finalize srv/Success message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Request__fini(ros_tut__srv__Success_Request * msg);

/// Create srv/Success message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_tut__srv__Success_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
ros_tut__srv__Success_Request *
ros_tut__srv__Success_Request__create();

/// Destroy srv/Success message.
/**
 * It calls
 * ros_tut__srv__Success_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Request__destroy(ros_tut__srv__Success_Request * msg);


/// Initialize array of srv/Success messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_tut__srv__Success_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
bool
ros_tut__srv__Success_Request__Sequence__init(ros_tut__srv__Success_Request__Sequence * array, size_t size);

/// Finalize array of srv/Success messages.
/**
 * It calls
 * ros_tut__srv__Success_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Request__Sequence__fini(ros_tut__srv__Success_Request__Sequence * array);

/// Create array of srv/Success messages.
/**
 * It allocates the memory for the array and calls
 * ros_tut__srv__Success_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
ros_tut__srv__Success_Request__Sequence *
ros_tut__srv__Success_Request__Sequence__create(size_t size);

/// Destroy array of srv/Success messages.
/**
 * It calls
 * ros_tut__srv__Success_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Request__Sequence__destroy(ros_tut__srv__Success_Request__Sequence * array);

/// Initialize srv/Success message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_tut__srv__Success_Response
 * )) before or use
 * ros_tut__srv__Success_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
bool
ros_tut__srv__Success_Response__init(ros_tut__srv__Success_Response * msg);

/// Finalize srv/Success message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Response__fini(ros_tut__srv__Success_Response * msg);

/// Create srv/Success message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_tut__srv__Success_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
ros_tut__srv__Success_Response *
ros_tut__srv__Success_Response__create();

/// Destroy srv/Success message.
/**
 * It calls
 * ros_tut__srv__Success_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Response__destroy(ros_tut__srv__Success_Response * msg);


/// Initialize array of srv/Success messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_tut__srv__Success_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
bool
ros_tut__srv__Success_Response__Sequence__init(ros_tut__srv__Success_Response__Sequence * array, size_t size);

/// Finalize array of srv/Success messages.
/**
 * It calls
 * ros_tut__srv__Success_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Response__Sequence__fini(ros_tut__srv__Success_Response__Sequence * array);

/// Create array of srv/Success messages.
/**
 * It allocates the memory for the array and calls
 * ros_tut__srv__Success_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
ros_tut__srv__Success_Response__Sequence *
ros_tut__srv__Success_Response__Sequence__create(size_t size);

/// Destroy array of srv/Success messages.
/**
 * It calls
 * ros_tut__srv__Success_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tut
void
ros_tut__srv__Success_Response__Sequence__destroy(ros_tut__srv__Success_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS_TUT__SRV__DETAIL__SUCCESS__FUNCTIONS_H_
