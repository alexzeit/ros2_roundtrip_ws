# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roundtrip_msg:msg/Roundtrip.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Roundtrip(type):
    """Metaclass of message 'Roundtrip'."""

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
            module = import_type_support('roundtrip_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roundtrip_msg.msg.Roundtrip')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roundtrip
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roundtrip
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roundtrip
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roundtrip
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roundtrip

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Roundtrip(metaclass=Metaclass_Roundtrip):
    """Message class 'Roundtrip'."""

    __slots__ = [
        '_tpoint',
        '_msgcnt',
    ]

    _fields_and_field_types = {
        'tpoint': 'uint64',
        'msgcnt': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tpoint = kwargs.get('tpoint', int())
        self.msgcnt = kwargs.get('msgcnt', int())

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
        if self.tpoint != other.tpoint:
            return False
        if self.msgcnt != other.msgcnt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tpoint(self):
        """Message field 'tpoint'."""
        return self._tpoint

    @tpoint.setter
    def tpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tpoint' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'tpoint' field must be an unsigned integer in [0, 18446744073709551615]"
        self._tpoint = value

    @builtins.property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'msgcnt' field must be an integer in [-2147483648, 2147483647]"
        self._msgcnt = value
