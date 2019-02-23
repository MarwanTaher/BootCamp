/*
 * Motor.h
 *
 * Created: 2/21/2019 4:14:45 PM
 *  Author: AVE-LAP-071
 */ 


#ifndef MOTOR_H_
#define MOTOR_H_

#include "../Includes/Timer.h"

#define  ClockWise 1
#define  AntiClockWise 0
#define Hundered  100

void Motor_Init (void);
void Motor_Start(uint16 Speed, uint8 MotorDir);
void Motor_Stop(void);



#endif /* MOTOR_H_ */