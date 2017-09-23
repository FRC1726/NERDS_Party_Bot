#ifndef OI_H
#define OI_H

#include <Joystick.h>

class OI {
private:
	frc::Joystick driver_joy;
public:
	OI();
	double GetAxis(int);
};

#endif  // OI_H
