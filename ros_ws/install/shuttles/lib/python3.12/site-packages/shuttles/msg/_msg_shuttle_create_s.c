// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from shuttles:msg/MsgShuttleCreate.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "shuttles/msg/detail/msg_shuttle_create__struct.h"
#include "shuttles/msg/detail/msg_shuttle_create__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool shuttles__msg__msg_shuttle_create__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("shuttles.msg._msg_shuttle_create.MsgShuttleCreate", full_classname_dest, 49) == 0);
  }
  shuttles__msg__MsgShuttleCreate * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // destination
    PyObject * field = PyObject_GetAttrString(_pymsg, "destination");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->destination = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // product
    PyObject * field = PyObject_GetAttrString(_pymsg, "product");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->product = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // handle
    PyObject * field = PyObject_GetAttrString(_pymsg, "handle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->handle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // handle_platform
    PyObject * field = PyObject_GetAttrString(_pymsg, "handle_platform");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->handle_platform = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->zone = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * shuttles__msg__msg_shuttle_create__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MsgShuttleCreate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("shuttles.msg._msg_shuttle_create");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MsgShuttleCreate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  shuttles__msg__MsgShuttleCreate * ros_message = (shuttles__msg__MsgShuttleCreate *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // destination
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->destination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "destination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // product
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->product);
    {
      int rc = PyObject_SetAttrString(_pymessage, "product", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // handle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->handle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "handle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // handle_platform
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->handle_platform);
    {
      int rc = PyObject_SetAttrString(_pymessage, "handle_platform", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zone
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
