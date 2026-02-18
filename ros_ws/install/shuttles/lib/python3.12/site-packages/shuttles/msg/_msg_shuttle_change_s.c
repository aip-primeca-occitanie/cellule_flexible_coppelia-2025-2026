// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from shuttles:msg/MsgShuttleChange.idl
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
#include "shuttles/msg/detail/msg_shuttle_change__struct.h"
#include "shuttles/msg/detail/msg_shuttle_change__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool shuttles__msg__msg_shuttle_change__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("shuttles.msg._msg_shuttle_change.MsgShuttleChange", full_classname_dest, 49) == 0);
  }
  shuttles__msg__MsgShuttleChange * ros_message = _ros_message;
  {  // handle
    PyObject * field = PyObject_GetAttrString(_pymsg, "handle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->handle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // argument
    PyObject * field = PyObject_GetAttrString(_pymsg, "argument");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->argument = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * shuttles__msg__msg_shuttle_change__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MsgShuttleChange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("shuttles.msg._msg_shuttle_change");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MsgShuttleChange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  shuttles__msg__MsgShuttleChange * ros_message = (shuttles__msg__MsgShuttleChange *)raw_ros_message;
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
  {  // argument
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->argument);
    {
      int rc = PyObject_SetAttrString(_pymessage, "argument", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
