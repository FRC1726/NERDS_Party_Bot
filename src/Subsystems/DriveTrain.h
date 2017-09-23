#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <TalonSRX.h>
#include <Encoder.h>
#include <RobotDrive.h>

class DriveTrain : public Subsystem {
private:
	frc::TalonSRX left_motor;
	frc::TalonSRX right_motor;
	frc::Encoder left_encoder;
	frc::Encoder right_encoder;
	frc::RobotDrive drive;
public:
	enum DriveSide{kLeft, kRight};

	DriveTrain();
	void InitDefaultCommand();
	void Arcade(double, double);
	void Stop();
	int getEncoder(DriveTrain::DriveSide);
};

#endif  // DriveTrain_H
