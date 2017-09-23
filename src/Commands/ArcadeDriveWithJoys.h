#ifndef ArcadeDriveWithJoys_H
#define ArcadeDriveWithJoys_H

#include <Commands/Command.h>

class ArcadeDriveWithJoys : public frc::Command {
public:
	ArcadeDriveWithJoys();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ArcadeDriveWithJoys_H
