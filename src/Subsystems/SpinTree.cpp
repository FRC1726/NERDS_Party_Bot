#include "SpinTree.h"
#include "../RobotMap.h"

SpinTree::SpinTree() : Subsystem("SpinTree"),
	motor(TREE_MOTOR)
{
}

void SpinTree::InitDefaultCommand(){

}

void SpinTree::Spin(double Speed){
	motor.Set(Speed);
}

