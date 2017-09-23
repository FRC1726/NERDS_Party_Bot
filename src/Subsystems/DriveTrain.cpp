#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/ArcadeDriveWithJoys.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	left_motor(DRIVE_LEFT),
	right_motor(DRIVE_RIGHT),
	left_encoder(ENCODER_LEFT_A, ENCODER_LEFT_B),
	right_encoder(ENCODER_RIGHT_A, ENCODER_RIGHT_B),
	drive(left_motor, right_motor)
{

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ArcadeDriveWithJoys);

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::Arcade(double speed, double turn){
	drive.ArcadeDrive(speed,turn);
}

void DriveTrain::Stop(){
	drive.ArcadeDrive(0,0, false);
}

int DriveTrain::getEncoder(DriveTrain::DriveSide side){
	if(side == kLeft){
		return left_encoder.Get();
	} else {
		return right_encoder.Get();
	}
}
