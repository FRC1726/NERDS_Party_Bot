#include "DriveStraight.h"

#include "../Subsystems/DriveTrain.h"
#include "../Robot.h"

DriveStraight::DriveStraight(int target_in) :
	target(target_in)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::drivetrain.get());
}

// Called just before this Command runs the first time
void DriveStraight::Initialize() {
	initial_r = Robot::drivetrain->getEncoder(DriveTrain::kRight);
	initial_l = Robot::drivetrain->getEncoder(DriveTrain::kLeft);
}

// Called repeatedly when this Command is scheduled to run
void DriveStraight::Execute() {
	 if(Robot::drivetrain->getEncoder(DriveTrain::kRight) < target) {
		 Robot::drivetrain->Arcade(.5, 0);
	 } else if(Robot::drivetrain->getEncoder(DriveTrain::kRight) > target) {
		 Robot::drivetrain->Arcade(-.5, 0);
	 } else {
		 Robot::drivetrain->Stop();
	 }
}

// Make this return true when this Command no longer needs to run execute()
bool DriveStraight::IsFinished() {
	return target == (Robot::drivetrain->getEncoder(DriveTrain::kRight) - initial_r);
}

// Called once after isFinished returns true
void DriveStraight::End() {
	Robot::drivetrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStraight::Interrupted() {
	Robot::drivetrain->Stop();
}
