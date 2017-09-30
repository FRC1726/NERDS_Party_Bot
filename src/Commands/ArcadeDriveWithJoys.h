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

private:
	double applySensitivity(double);
};

#endif  // ArcadeDriveWithJoys_H
