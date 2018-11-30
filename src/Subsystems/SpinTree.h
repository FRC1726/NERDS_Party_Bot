#ifndef SpinTree_H
#define SpinTree_H

#include <Commands/Subsystem.h>
#include <VictorSP.h>

class SpinTree : public Subsystem {
private:
	VictorSP motor;
public:
	SpinTree();
	void InitDefaultCommand();
	void Spin(double);

};



#endif
