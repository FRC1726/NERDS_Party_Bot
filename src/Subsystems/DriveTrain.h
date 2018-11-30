#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <VictorSP.h>
#include <Encoder.h>
#include <Drive/DifferentialDrive.h>

class DriveTrain : public Subsystem {
private:
	VictorSP left_motor;
	VictorSP right_motor;
	frc::Encoder left_encoder;
	frc::Encoder right_encoder;
	DifferentialDrive drive;
public:
	enum DriveSide{kLeft, kRight};

	DriveTrain();
	void InitDefaultCommand();
	void Arcade(double, double);
	void Stop();
	int getEncoder(DriveTrain::DriveSide);
};

#endif  // DriveTrain_H
