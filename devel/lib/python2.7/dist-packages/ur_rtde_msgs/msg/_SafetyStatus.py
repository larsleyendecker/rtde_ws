# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ur_rtde_msgs/SafetyStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SafetyStatus(genpy.Message):
  _md5sum = "a3a60ff6f24f07c1fae24613fa44ca20"
  _type = "ur_rtde_msgs/SafetyStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#This message holds data describing the safety status value

uint8 SAFETY_STATUS_SYSTEM_THREE_POSITION_ENABLING_STOP=13
uint8 SAFETY_STATUS_AUTOMATIC_MODE_SAFEGUARD_STOP=12
uint8 SAFETY_STATUS_UNDEFINED_SAFETY_MODE=11
uint8 SAFETY_STATUS_VALIDATE_JOINT_ID=10
uint8 SAFETY_STATUS_FAULT=9
uint8 SAFETY_STATUS_VIOLATION=8
uint8 SAFETY_STATUS_ROBOT_EMERGENCY_STOP=7
uint8 SAFETY_STATUS_SYSTEM_EMERGENCY_STOP=6
uint8 SAFETY_STATUS_SAFEGUARD_STOP=5
uint8 SAFETY_STATUS_RECOVERY=4
uint8 SAFETY_STATUS_PROTECTIVE_STOP=3
uint8 SAFETY_STATUS_REDUCED=2
uint8 SAFETY_STATUS_NORMAL=1

uint8 status
"""
  # Pseudo-constants
  SAFETY_STATUS_SYSTEM_THREE_POSITION_ENABLING_STOP = 13
  SAFETY_STATUS_AUTOMATIC_MODE_SAFEGUARD_STOP = 12
  SAFETY_STATUS_UNDEFINED_SAFETY_MODE = 11
  SAFETY_STATUS_VALIDATE_JOINT_ID = 10
  SAFETY_STATUS_FAULT = 9
  SAFETY_STATUS_VIOLATION = 8
  SAFETY_STATUS_ROBOT_EMERGENCY_STOP = 7
  SAFETY_STATUS_SYSTEM_EMERGENCY_STOP = 6
  SAFETY_STATUS_SAFEGUARD_STOP = 5
  SAFETY_STATUS_RECOVERY = 4
  SAFETY_STATUS_PROTECTIVE_STOP = 3
  SAFETY_STATUS_REDUCED = 2
  SAFETY_STATUS_NORMAL = 1

  __slots__ = ['status']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SafetyStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
    else:
      self.status = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
