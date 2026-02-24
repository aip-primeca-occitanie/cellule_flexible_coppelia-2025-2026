# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robots:msg/FaireTacheMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaireTacheMsg(type):
    """Metaclass of message 'FaireTacheMsg'."""

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
            module = import_type_support('robots')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robots.msg.FaireTacheMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__faire_tache_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__faire_tache_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__faire_tache_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__faire_tache_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__faire_tache_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaireTacheMsg(metaclass=Metaclass_FaireTacheMsg):
    """Message class 'FaireTacheMsg'."""

    __slots__ = [
        '_num_robot',
        '_position',
        '_duree',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num_robot': 'int32',
        'position': 'int32',
        'duree': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_robot = kwargs.get('num_robot', int())
        self.position = kwargs.get('position', int())
        self.duree = kwargs.get('duree', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num_robot != other.num_robot:
            return False
        if self.position != other.position:
            return False
        if self.duree != other.duree:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_robot(self):
        """Message field 'num_robot'."""
        return self._num_robot

    @num_robot.setter
    def num_robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_robot' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_robot' field must be an integer in [-2147483648, 2147483647]"
        self._num_robot = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position' field must be an integer in [-2147483648, 2147483647]"
        self._position = value

    @builtins.property
    def duree(self):
        """Message field 'duree'."""
        return self._duree

    @duree.setter
    def duree(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'duree' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'duree' field must be an integer in [-2147483648, 2147483647]"
        self._duree = value
