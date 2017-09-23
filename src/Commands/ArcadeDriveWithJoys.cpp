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
	Robot::drivetrain->Arcade(Robot::oi->GetAxis(LEFT_Y), Robot::oi->GetAxis(RIGHT_X));
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
