#include "OI.h"
#include "RobotMap.h"

#include <WPILib.h>

OI::OI() :
	driver_joy(DRIVER_JOY)
{
	// Process operator interface input here.
}

double OI::GetAxis(int axis){
	return driver_joy.GetRawAxis(axis);
}
