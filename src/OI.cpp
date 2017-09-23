#include "OI.h"
#include "RobotMap.h"
#include "Commands/LaunchCatapult.h"

#include <WPILib.h>

OI::OI() :
	driver_joy(DRIVER_JOY),
	driver_RB(&driver_joy, BTN_RB)
{
	driver_RB.WhenPressed(new LaunchCatapult);
}

double OI::GetAxis(int axis){
	return driver_joy.GetRawAxis(axis);
}
