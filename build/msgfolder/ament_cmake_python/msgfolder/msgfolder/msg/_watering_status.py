# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msgfolder:msg/WateringStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WateringStatus(type):
    """Metaclass of message 'WateringStatus'."""

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
                'msgfolder.msg.WateringStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__watering_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__watering_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__watering_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__watering_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__watering_status

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


class WateringStatus(metaclass=Metaclass_WateringStatus):
    """Message class 'WateringStatus'."""

    __slots__ = [
        '_watering',
        '_interval',
        '_duration',
        '_zones',
        '_error_nr',
        '_start_time',
        '_finished_time',
    ]

    _fields_and_field_types = {
        'watering': 'boolean',
        'interval': 'uint8',
        'duration': 'uint8',
        'zones': 'uint8',
        'error_nr': 'uint8',
        'start_time': 'builtin_interfaces/Time',
        'finished_time': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.watering = kwargs.get('watering', bool())
        self.interval = kwargs.get('interval', int())
        self.duration = kwargs.get('duration', int())
        self.zones = kwargs.get('zones', int())
        self.error_nr = kwargs.get('error_nr', int())
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
        if self.watering != other.watering:
            return False
        if self.interval != other.interval:
            return False
        if self.duration != other.duration:
            return False
        if self.zones != other.zones:
            return False
        if self.error_nr != other.error_nr:
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
    def watering(self):
        """Message field 'watering'."""
        return self._watering

    @watering.setter
    def watering(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'watering' field must be of type 'bool'"
        self._watering = value

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
            assert value >= 0 and value < 256, \
                "The 'interval' field must be an unsigned integer in [0, 255]"
        self._interval = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'duration' field must be an unsigned integer in [0, 255]"
        self._duration = value

    @builtins.property
    def zones(self):
        """Message field 'zones'."""
        return self._zones

    @zones.setter
    def zones(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zones' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'zones' field must be an unsigned integer in [0, 255]"
        self._zones = value

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
