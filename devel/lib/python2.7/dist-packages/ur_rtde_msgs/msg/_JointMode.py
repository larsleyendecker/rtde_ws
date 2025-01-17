# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ur_rtde_msgs/JointMode.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class JointMode(genpy.Message):
  _md5sum = "8653e4e4fe900c35280b6d6ffb9860ef"
  _type = "ur_rtde_msgs/JointMode"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#This message holds data describing the modes of the robot's joints

uint8 JOINT_MODE_RESET=235
uint8 JOINT_MODE_SHUTTING_DOWN=236
uint8 JOINT_PART_D_CALIBRATION_MODE=237
uint8 JOINT_MODE_BACKDRIVE=238
uint8 JOINT_MODE_POWER_OFF=239
uint8 JOINT_MODE_READY_FOR_POWER_OFF=240
uint8 JOINT_MODE_NOT_RESPONDING=245
uint8 JOINT_MODE_MOTOR_INITIALISATION=246
uint8 JOINT_MODE_BOOTING=247
uint8 JOINT_PART_D_CALIBRATION_ERROR_MODE=248
uint8 JOINT_MODE_BOOTLOADER=249
uint8 JOINT_CALIBRATION_MODE=250
uint8 JOINT_MODE_VIOLATION=251
uint8 JOINT_MODE_FAULT=252
uint8 JOINT_MODE_RUNNING=253
uint8 JOINT_MODE_IDLE=255

uint8[] mode

"""
  # Pseudo-constants
  JOINT_MODE_RESET = 235
  JOINT_MODE_SHUTTING_DOWN = 236
  JOINT_PART_D_CALIBRATION_MODE = 237
  JOINT_MODE_BACKDRIVE = 238
  JOINT_MODE_POWER_OFF = 239
  JOINT_MODE_READY_FOR_POWER_OFF = 240
  JOINT_MODE_NOT_RESPONDING = 245
  JOINT_MODE_MOTOR_INITIALISATION = 246
  JOINT_MODE_BOOTING = 247
  JOINT_PART_D_CALIBRATION_ERROR_MODE = 248
  JOINT_MODE_BOOTLOADER = 249
  JOINT_CALIBRATION_MODE = 250
  JOINT_MODE_VIOLATION = 251
  JOINT_MODE_FAULT = 252
  JOINT_MODE_RUNNING = 253
  JOINT_MODE_IDLE = 255

  __slots__ = ['mode']
  _slot_types = ['uint8[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointMode, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.mode is None:
        self.mode = b''
    else:
      self.mode = b''

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
      _x = self.mode
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.mode = str[start:end]
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
      _x = self.mode
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.mode = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
