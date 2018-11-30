#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//DriveTrain PWM IDs
constexpr int DRIVE_RIGHT = 0;
constexpr int DRIVE_LEFT = 1;
constexpr int TREE_MOTOR = 2;

//DriveTrain Encoders
constexpr int ENCODER_RIGHT_A = 0;
constexpr int ENCODER_RIGHT_B = 1;
constexpr int ENCODER_LEFT_A = 2;
constexpr int ENCODER_LEFT_B = 3;

//Joystick IDs
constexpr int DRIVER_JOY = 0;

//Driver Axis IDs
constexpr int LEFT_X = 0;
constexpr int LEFT_Y = 1;
constexpr int RIGHT_X = 4;
constexpr int RIGHT_Y = 5;
constexpr int RIGHT_TRIGGER = 3;
constexpr int LEFT_TRIGGER = 2;

//Driver Buttons
constexpr int BTN_A = 1;
constexpr int BTN_B = 2;
constexpr int BTN_X = 3;
constexpr int BTN_Y = 4;
constexpr int BTN_LB = 5;
constexpr int BTN_RB = 6;
constexpr int BTN_SELECT = 7;
constexpr int BTN_START = 8;
constexpr int BTN_LSTICK = 9;
constexpr int BTN_RSTICK = 10;

//Pneumatics
constexpr int CATAPULT_ARM = 0;

//deadzone
constexpr double DEADZONE = 0.1;

#endif  // ROBOTMAP_H
