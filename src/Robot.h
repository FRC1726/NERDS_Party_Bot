#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <IterativeRobot.h>
#include <SmartDashboard/SendableChooser.h>
#include <Commands/Command.h>

#include <memory>

#include "Subsystems/DriveTrain.h"
#include "OI.h"

class Robot: public frc::IterativeRobot {
public:
	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

	static std::shared_ptr<DriveTrain> drivetrain;
	static std::shared_ptr<OI> oi;

private:
	frc::SendableChooser<frc::Command*> chooser;
};

#endif /* SRC_ROBOT_H_ */
