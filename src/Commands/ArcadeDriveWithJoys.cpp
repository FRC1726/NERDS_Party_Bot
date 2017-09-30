#include "ArcadeDriveWithJoys.h"
#include "../Robot.h"
#include "../OI.h"
#include "../RobotMap.h"

ArcadeDriveWithJoys::ArcadeDriveWithJoys() {
	Requires(Robot::drivetrain.get());
}

// Called just before this Command runs the first time
void ArcadeDriveWithJoys::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ArcadeDriveWithJoys::Execute() {
	Robot::drivetrain->Arcade(applySensitivity(-Robot::oi->GetAxis(LEFT_Y)), applySensitivity(Robot::oi->GetAxis(RIGHT_X)));
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDriveWithJoys::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArcadeDriveWithJoys::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDriveWithJoys::Interrupted() {
	Robot::drivetrain->Stop();
}

double ArcadeDriveWithJoys::applySensitivity(double joy){
	int max_speed = 0.8;
	int min_speed = 0.2;

	if(abs(joy) <= DEADZONE){
		return 0;
	}else{
		int out = abs(joy) * (max_speed - min_speed) + min_speed;
		if(joy < 0){
			return -out;
		}else{
			return out;
		}
	}
}
