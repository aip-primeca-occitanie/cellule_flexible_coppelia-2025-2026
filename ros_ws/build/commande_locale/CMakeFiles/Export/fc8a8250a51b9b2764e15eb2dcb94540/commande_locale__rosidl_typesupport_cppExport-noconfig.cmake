#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "commande_locale::commande_locale__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET commande_locale::commande_locale__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(commande_locale::commande_locale__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcommande_locale__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libcommande_locale__rosidl_typesupport_cpp.so"
  )

list(APPEND _cmake_import_check_targets commande_locale::commande_locale__rosidl_typesupport_cpp )
list(APPEND _cmake_import_check_files_for_commande_locale::commande_locale__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libcommande_locale__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
