#ifndef LaunchCatapult_H
#define LaunchCatapult_H

#include <Commands/Command.h>

class LaunchCatapult : public frc::Command {
public:
	LaunchCatapult();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LaunchCatapult_H
