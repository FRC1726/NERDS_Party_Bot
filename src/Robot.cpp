#include "Robot.h"
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>

std::shared_ptr<DriveTrain> Robot::drivetrain;
std::shared_ptr<Catapult> Robot::catapult;
std::shared_ptr<OI> Robot::oi;


void Robot::RobotInit(){
	Robot::drivetrain.reset(new DriveTrain);
	Robot::catapult.reset(new Catapult);
	Robot::oi.reset(new OI);
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit(){

}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	frc::LiveWindow::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot)
