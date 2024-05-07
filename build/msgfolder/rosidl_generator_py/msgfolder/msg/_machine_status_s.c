// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msgfolder:msg/MachineStatus.idl
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
#include "msgfolder/msg/detail/machine_status__struct.h"
#include "msgfolder/msg/detail/machine_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msgfolder__msg__machine_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("msgfolder.msg._machine_status.MachineStatus", full_classname_dest, 43) == 0);
  }
  msgfolder__msg__MachineStatus * ros_message = _ros_message;
  {  // is_synced
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_synced");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_synced = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sequense_started
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequense_started");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sequense_started = (Py_True == field);
    Py_DECREF(field);
  }
  {  // machine_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "machine_moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->machine_moving = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sequense_nr
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequense_nr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequense_nr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_nr
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_nr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_nr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "interval");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->interval = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // finished_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "finished_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->finished_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msgfolder__msg__machine_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachineStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msgfolder.msg._machine_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachineStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msgfolder__msg__MachineStatus * ros_message = (msgfolder__msg__MachineStatus *)raw_ros_message;
  {  // is_synced
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_synced ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_synced", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequense_started
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sequense_started ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequense_started", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // machine_moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->machine_moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "machine_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequense_nr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequense_nr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequense_nr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_nr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_nr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_nr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interval
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finished_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->finished_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "finished_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
