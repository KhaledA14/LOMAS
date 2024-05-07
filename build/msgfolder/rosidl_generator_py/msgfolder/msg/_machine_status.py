# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msgfolder:msg/MachineStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MachineStatus(type):
    """Metaclass of message 'MachineStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msgfolder')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msgfolder.msg.MachineStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__machine_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__machine_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__machine_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__machine_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__machine_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MachineStatus(metaclass=Metaclass_MachineStatus):
    """Message class 'MachineStatus'."""

    __slots__ = [
        '_is_synced',
        '_sequense_started',
        '_machine_moving',
        '_sequense_nr',
        '_error_nr',
        '_interval',
        '_x',
        '_y',
        '_z',
        '_start_time',
        '_finished_time',
    ]

    _fields_and_field_types = {
        'is_synced': 'boolean',
        'sequense_started': 'boolean',
        'machine_moving': 'boolean',
        'sequense_nr': 'uint8',
        'error_nr': 'uint8',
        'interval': 'uint16',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'start_time': 'builtin_interfaces/Time',
        'finished_time': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_synced = kwargs.get('is_synced', bool())
        self.sequense_started = kwargs.get('sequense_started', bool())
        self.machine_moving = kwargs.get('machine_moving', bool())
        self.sequense_nr = kwargs.get('sequense_nr', int())
        self.error_nr = kwargs.get('error_nr', int())
        self.interval = kwargs.get('interval', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        from builtin_interfaces.msg import Time
        self.finished_time = kwargs.get('finished_time', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.is_synced != other.is_synced:
            return False
        if self.sequense_started != other.sequense_started:
            return False
        if self.machine_moving != other.machine_moving:
            return False
        if self.sequense_nr != other.sequense_nr:
            return False
        if self.error_nr != other.error_nr:
            return False
        if self.interval != other.interval:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.start_time != other.start_time:
            return False
        if self.finished_time != other.finished_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_synced(self):
        """Message field 'is_synced'."""
        return self._is_synced

    @is_synced.setter
    def is_synced(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_synced' field must be of type 'bool'"
        self._is_synced = value

    @builtins.property
    def sequense_started(self):
        """Message field 'sequense_started'."""
        return self._sequense_started

    @sequense_started.setter
    def sequense_started(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sequense_started' field must be of type 'bool'"
        self._sequense_started = value

    @builtins.property
    def machine_moving(self):
        """Message field 'machine_moving'."""
        return self._machine_moving

    @machine_moving.setter
    def machine_moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'machine_moving' field must be of type 'bool'"
        self._machine_moving = value

    @builtins.property
    def sequense_nr(self):
        """Message field 'sequense_nr'."""
        return self._sequense_nr

    @sequense_nr.setter
    def sequense_nr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequense_nr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sequense_nr' field must be an unsigned integer in [0, 255]"
        self._sequense_nr = value

    @builtins.property
    def error_nr(self):
        """Message field 'error_nr'."""
        return self._error_nr

    @error_nr.setter
    def error_nr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_nr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_nr' field must be an unsigned integer in [0, 255]"
        self._error_nr = value

    @builtins.property
    def interval(self):
        """Message field 'interval'."""
        return self._interval

    @interval.setter
    def interval(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interval' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'interval' field must be an unsigned integer in [0, 65535]"
        self._interval = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @builtins.property
    def finished_time(self):
        """Message field 'finished_time'."""
        return self._finished_time

    @finished_time.setter
    def finished_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'finished_time' field must be a sub message of type 'Time'"
        self._finished_time = value
