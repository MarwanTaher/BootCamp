/*
 * Timer_1_PWM_Motor.c
 *
 * Created: 2/21/2019 11:32:53 AM
 * Author : AVE-LAP-071
 */ 

#include "Includes/Timer.h"
#include "Motor/Motor.h"

int main(void)
{
	
timer_init();

DIO_SetPinDirection(PIN30,OUTPUT);
DIO_SetPinDirection(PIN31,OUTPUT);
				

Motor_Init();

	

    while (1) 
    {
		Motor_Start(80,ClockWise);
		_delay_ms(2000);
		Motor_Stop();
		_delay_ms(2000);
		Motor_Start(20,AntiClockWise);
		_delay_ms(2000);
		Motor_Stop();
		_delay_ms(2000);		
		
    }


}
		
		
	

