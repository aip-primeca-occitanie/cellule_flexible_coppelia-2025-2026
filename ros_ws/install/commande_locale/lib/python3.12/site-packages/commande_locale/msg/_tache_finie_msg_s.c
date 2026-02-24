// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from commande_locale:msg/TacheFinieMsg.idl
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
#include "commande_locale/msg/detail/tache_finie_msg__struct.h"
#include "commande_locale/msg/detail/tache_finie_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool commande_locale__msg__tache_finie_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("commande_locale.msg._tache_finie_msg.TacheFinieMsg", full_classname_dest, 50) == 0);
  }
  commande_locale__msg__TacheFinieMsg * ros_message = _ros_message;
  {  // num_poste
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_poste");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_poste = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_produit
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_produit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_produit = (int32_t)PyLong_AsLong(field);
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
PyObject * commande_locale__msg__tache_finie_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TacheFinieMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("commande_locale.msg._tache_finie_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TacheFinieMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  commande_locale__msg__TacheFinieMsg * ros_message = (commande_locale__msg__TacheFinieMsg *)raw_ros_message;
  {  // num_poste
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_poste);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_poste", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_produit
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_produit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_produit", field);
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
