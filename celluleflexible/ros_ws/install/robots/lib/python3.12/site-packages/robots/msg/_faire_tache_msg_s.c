// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robots:msg/FaireTacheMsg.idl
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
#include "robots/msg/detail/faire_tache_msg__struct.h"
#include "robots/msg/detail/faire_tache_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robots__msg__faire_tache_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("robots.msg._faire_tache_msg.FaireTacheMsg", full_classname_dest, 41) == 0);
  }
  robots__msg__FaireTacheMsg * ros_message = _ros_message;
  {  // num_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_robot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_robot = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // duree
    PyObject * field = PyObject_GetAttrString(_pymsg, "duree");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duree = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robots__msg__faire_tache_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FaireTacheMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robots.msg._faire_tache_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FaireTacheMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robots__msg__FaireTacheMsg * ros_message = (robots__msg__FaireTacheMsg *)raw_ros_message;
  {  // num_robot
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_robot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duree
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->duree);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
