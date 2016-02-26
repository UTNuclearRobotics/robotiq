#include "gripper_interface.h"


GripperInterface::GripperInterface()
{
  block=true;
  connected=false;
  activated=false;
}


void GripperInterface::setBlocking(bool blocking)
{
  block = blocking;
}
