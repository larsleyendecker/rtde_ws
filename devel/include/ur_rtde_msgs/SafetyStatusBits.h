// Generated by gencpp from file ur_rtde_msgs/SafetyStatusBits.msg
// DO NOT EDIT!


#ifndef UR_RTDE_MSGS_MESSAGE_SAFETYSTATUSBITS_H
#define UR_RTDE_MSGS_MESSAGE_SAFETYSTATUSBITS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_rtde_msgs
{
template <class ContainerAllocator>
struct SafetyStatusBits_
{
  typedef SafetyStatusBits_<ContainerAllocator> Type;

  SafetyStatusBits_()
    : is_normal_mode(false)
    , is_reduced_mode(false)
    , is_protective_stopped(false)
    , is_recovery_mode(false)
    , is_safeguard_stopped(false)
    , is_system_emergency_stopped(false)
    , is_robot_emergency_stopped(false)
    , is_emergency_stopped(false)
    , is_violation(false)
    , is_fault(false)
    , is_stopped_due_to_safety(false)  {
    }
  SafetyStatusBits_(const ContainerAllocator& _alloc)
    : is_normal_mode(false)
    , is_reduced_mode(false)
    , is_protective_stopped(false)
    , is_recovery_mode(false)
    , is_safeguard_stopped(false)
    , is_system_emergency_stopped(false)
    , is_robot_emergency_stopped(false)
    , is_emergency_stopped(false)
    , is_violation(false)
    , is_fault(false)
    , is_stopped_due_to_safety(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_normal_mode_type;
  _is_normal_mode_type is_normal_mode;

   typedef uint8_t _is_reduced_mode_type;
  _is_reduced_mode_type is_reduced_mode;

   typedef uint8_t _is_protective_stopped_type;
  _is_protective_stopped_type is_protective_stopped;

   typedef uint8_t _is_recovery_mode_type;
  _is_recovery_mode_type is_recovery_mode;

   typedef uint8_t _is_safeguard_stopped_type;
  _is_safeguard_stopped_type is_safeguard_stopped;

   typedef uint8_t _is_system_emergency_stopped_type;
  _is_system_emergency_stopped_type is_system_emergency_stopped;

   typedef uint8_t _is_robot_emergency_stopped_type;
  _is_robot_emergency_stopped_type is_robot_emergency_stopped;

   typedef uint8_t _is_emergency_stopped_type;
  _is_emergency_stopped_type is_emergency_stopped;

   typedef uint8_t _is_violation_type;
  _is_violation_type is_violation;

   typedef uint8_t _is_fault_type;
  _is_fault_type is_fault;

   typedef uint8_t _is_stopped_due_to_safety_type;
  _is_stopped_due_to_safety_type is_stopped_due_to_safety;





  typedef boost::shared_ptr< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyStatusBits_

typedef ::ur_rtde_msgs::SafetyStatusBits_<std::allocator<void> > SafetyStatusBits;

typedef boost::shared_ptr< ::ur_rtde_msgs::SafetyStatusBits > SafetyStatusBitsPtr;
typedef boost::shared_ptr< ::ur_rtde_msgs::SafetyStatusBits const> SafetyStatusBitsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator1> & lhs, const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator2> & rhs)
{
  return lhs.is_normal_mode == rhs.is_normal_mode &&
    lhs.is_reduced_mode == rhs.is_reduced_mode &&
    lhs.is_protective_stopped == rhs.is_protective_stopped &&
    lhs.is_recovery_mode == rhs.is_recovery_mode &&
    lhs.is_safeguard_stopped == rhs.is_safeguard_stopped &&
    lhs.is_system_emergency_stopped == rhs.is_system_emergency_stopped &&
    lhs.is_robot_emergency_stopped == rhs.is_robot_emergency_stopped &&
    lhs.is_emergency_stopped == rhs.is_emergency_stopped &&
    lhs.is_violation == rhs.is_violation &&
    lhs.is_fault == rhs.is_fault &&
    lhs.is_stopped_due_to_safety == rhs.is_stopped_due_to_safety;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator1> & lhs, const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur_rtde_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04a8faad703e6d59a0c564a37f5a5a2a";
  }

  static const char* value(const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04a8faad703e6d59ULL;
  static const uint64_t static_value2 = 0xa0c564a37f5a5a2aULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_rtde_msgs/SafetyStatusBits";
  }

  static const char* value(const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message holds information about the safety status of the robot as explicit booleans\n"
"\n"
"bool is_normal_mode\n"
"bool is_reduced_mode\n"
"bool is_protective_stopped\n"
"bool is_recovery_mode\n"
"bool is_safeguard_stopped\n"
"bool is_system_emergency_stopped\n"
"bool is_robot_emergency_stopped\n"
"bool is_emergency_stopped\n"
"bool is_violation\n"
"bool is_fault\n"
"bool is_stopped_due_to_safety\n"
;
  }

  static const char* value(const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_normal_mode);
      stream.next(m.is_reduced_mode);
      stream.next(m.is_protective_stopped);
      stream.next(m.is_recovery_mode);
      stream.next(m.is_safeguard_stopped);
      stream.next(m.is_system_emergency_stopped);
      stream.next(m.is_robot_emergency_stopped);
      stream.next(m.is_emergency_stopped);
      stream.next(m.is_violation);
      stream.next(m.is_fault);
      stream.next(m.is_stopped_due_to_safety);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyStatusBits_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_rtde_msgs::SafetyStatusBits_<ContainerAllocator>& v)
  {
    s << indent << "is_normal_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_normal_mode);
    s << indent << "is_reduced_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_reduced_mode);
    s << indent << "is_protective_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_protective_stopped);
    s << indent << "is_recovery_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_recovery_mode);
    s << indent << "is_safeguard_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_safeguard_stopped);
    s << indent << "is_system_emergency_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_system_emergency_stopped);
    s << indent << "is_robot_emergency_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_robot_emergency_stopped);
    s << indent << "is_emergency_stopped: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_emergency_stopped);
    s << indent << "is_violation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_violation);
    s << indent << "is_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_fault);
    s << indent << "is_stopped_due_to_safety: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_stopped_due_to_safety);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_RTDE_MSGS_MESSAGE_SAFETYSTATUSBITS_H