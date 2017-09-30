#ifndef DriveStraight_H
#define DriveStraight_H

#include <Commands/Command.h>

class DriveStraight : public frc::Command {
public:
	DriveStraight(int);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	int initial_r, initial_l;
	int target;
	double kp, ki, kd;
};

#endif  // DriveStraight_H
