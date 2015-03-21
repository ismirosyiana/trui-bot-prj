/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/lintang-sutawika/krai/trui-bot-prj/controller/src/mavros/srv/CommandLong.srv
 *
 */


#ifndef MAVROS_MESSAGE_COMMANDLONGREQUEST_H
#define MAVROS_MESSAGE_COMMANDLONGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros
{
template <class ContainerAllocator>
struct CommandLongRequest_
{
  typedef CommandLongRequest_<ContainerAllocator> Type;

  CommandLongRequest_()
    : command(0)
    , confirmation(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , param5(0.0)
    , param6(0.0)
    , param7(0.0)  {
    }
  CommandLongRequest_(const ContainerAllocator& _alloc)
    : command(0)
    , confirmation(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , param5(0.0)
    , param6(0.0)
    , param7(0.0)  {
    }



   typedef uint16_t _command_type;
  _command_type command;

   typedef uint8_t _confirmation_type;
  _confirmation_type confirmation;

   typedef float _param1_type;
  _param1_type param1;

   typedef float _param2_type;
  _param2_type param2;

   typedef float _param3_type;
  _param3_type param3;

   typedef float _param4_type;
  _param4_type param4;

   typedef float _param5_type;
  _param5_type param5;

   typedef float _param6_type;
  _param6_type param6;

   typedef float _param7_type;
  _param7_type param7;


    enum { CMD_DO_SET_MODE = 176u };
     enum { CMD_DO_JUMP = 177u };
     enum { CMD_DO_CHANGE_SPEED = 178u };
     enum { CMD_DO_SET_HOME = 179u };
     enum { CMD_DO_SET_RELAY = 181u };
     enum { CMD_DO_REPEAT_RELAY = 182u };
     enum { CMD_DO_SET_SERVO = 183u };
     enum { CMD_DO_REPEAT_SERVO = 184u };
     enum { CMD_DO_CONTROL_VIDEO = 200u };
     enum { CMD_DO_SET_ROI = 201u };
     enum { CMD_DO_MOUNT_CONTROL = 205u };
     enum { CMD_DO_SET_CAM_TRIGG_DIST = 206u };
     enum { CMD_DO_FENCE_ENABLE = 207u };
     enum { CMD_DO_PARACHUTE = 208u };
     enum { CMD_DO_INVERTED_FLOGHT = 210u };
     enum { CMD_DO_MOUNT_CONTROL_QUAT = 220u };
     enum { CMD_PREFLIGHT_CALIBRATION = 241u };
     enum { CMD_MISSION_START = 300u };
     enum { CMD_COMPONENT_ARM_DISARM = 400u };
     enum { CMD_START_RX_PAIR = 500u };
 

  typedef boost::shared_ptr< ::mavros::CommandLongRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::CommandLongRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandLongRequest_

typedef ::mavros::CommandLongRequest_<std::allocator<void> > CommandLongRequest;

typedef boost::shared_ptr< ::mavros::CommandLongRequest > CommandLongRequestPtr;
typedef boost::shared_ptr< ::mavros::CommandLongRequest const> CommandLongRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::CommandLongRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::CommandLongRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mavros': ['/home/lintang-sutawika/krai/trui-bot-prj/controller/src/mavros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandLongRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandLongRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandLongRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandLongRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandLongRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandLongRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::CommandLongRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5972d4d8225f9d160bb683f0834762b4";
  }

  static const char* value(const ::mavros::CommandLongRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5972d4d8225f9d16ULL;
  static const uint64_t static_value2 = 0x0bb683f0834762b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::CommandLongRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/CommandLongRequest";
  }

  static const char* value(const ::mavros::CommandLongRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::CommandLongRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
uint16 CMD_DO_SET_MODE = 176\n\
uint16 CMD_DO_JUMP = 177\n\
uint16 CMD_DO_CHANGE_SPEED = 178\n\
uint16 CMD_DO_SET_HOME = 179\n\
uint16 CMD_DO_SET_RELAY = 181\n\
uint16 CMD_DO_REPEAT_RELAY = 182\n\
uint16 CMD_DO_SET_SERVO = 183\n\
uint16 CMD_DO_REPEAT_SERVO = 184\n\
uint16 CMD_DO_CONTROL_VIDEO = 200\n\
uint16 CMD_DO_SET_ROI = 201\n\
uint16 CMD_DO_MOUNT_CONTROL = 205\n\
uint16 CMD_DO_SET_CAM_TRIGG_DIST = 206\n\
uint16 CMD_DO_FENCE_ENABLE = 207\n\
uint16 CMD_DO_PARACHUTE = 208\n\
uint16 CMD_DO_INVERTED_FLOGHT = 210\n\
uint16 CMD_DO_MOUNT_CONTROL_QUAT = 220\n\
uint16 CMD_PREFLIGHT_CALIBRATION = 241\n\
uint16 CMD_MISSION_START = 300\n\
uint16 CMD_COMPONENT_ARM_DISARM = 400\n\
uint16 CMD_START_RX_PAIR = 500\n\
\n\
uint16 command\n\
uint8 confirmation\n\
float32 param1\n\
float32 param2\n\
float32 param3\n\
float32 param4\n\
float32 param5\n\
float32 param6\n\
float32 param7\n\
";
  }

  static const char* value(const ::mavros::CommandLongRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::CommandLongRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.confirmation);
      stream.next(m.param1);
      stream.next(m.param2);
      stream.next(m.param3);
      stream.next(m.param4);
      stream.next(m.param5);
      stream.next(m.param6);
      stream.next(m.param7);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CommandLongRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::CommandLongRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::CommandLongRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.command);
    s << indent << "confirmation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.confirmation);
    s << indent << "param1: ";
    Printer<float>::stream(s, indent + "  ", v.param1);
    s << indent << "param2: ";
    Printer<float>::stream(s, indent + "  ", v.param2);
    s << indent << "param3: ";
    Printer<float>::stream(s, indent + "  ", v.param3);
    s << indent << "param4: ";
    Printer<float>::stream(s, indent + "  ", v.param4);
    s << indent << "param5: ";
    Printer<float>::stream(s, indent + "  ", v.param5);
    s << indent << "param6: ";
    Printer<float>::stream(s, indent + "  ", v.param6);
    s << indent << "param7: ";
    Printer<float>::stream(s, indent + "  ", v.param7);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_COMMANDLONGREQUEST_H
