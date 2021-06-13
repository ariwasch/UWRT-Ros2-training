#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros_tut::ros_tut__rosidl_typesupport_c" for configuration ""
set_property(TARGET ros_tut::ros_tut__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ros_tut::ros_tut__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libros_tut__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libros_tut__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ros_tut::ros_tut__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_ros_tut::ros_tut__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libros_tut__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
