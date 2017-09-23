#ifndef OI_H
#define OI_H

#include <Joystick.h>
#include <Buttons/JoystickButton.h>

class OI {
private:
	frc::Joystick driver_joy;
	frc::JoystickButton driver_RB;
public:
	OI();
	double GetAxis(int);
};

#endif  // OI_H
