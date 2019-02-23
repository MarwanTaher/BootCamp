/*
 * Motor.c
 *
 * Created: 2/21/2019 4:02:12 PM
 *  Author: AVE-LAP-071
 */ 
#include "Motor.h"
volatile uint16 COMPARE_Value_H=0;
volatile uint16 COMPARE_Value_L=0;
volatile uint16 Speed_Value;

	
	void Motor_Init (void)
	
	{
			/* Set Enable pins Output */
			DIO_SetPinDirection(OC1A,OUTPUT);
			DIO_SetPinDirection(OC1B,OUTPUT);
			
			ICR1H_H=((TOP_VALUE>>EIGHTBITS) & MASK);
			ICR1L_H=((TOP_VALUE>>ZEROBITS) & MASK);
			OCR1AH_H=COMPARE_Value_H;
			OCR1AL_H=COMPARE_Value_L;

	}
	

	void Motor_Start(uint16 Speed, uint8 MotorDir)
	{
	if (MotorDir==ClockWise)
	{
		
		Speed_Value=((Speed*TOP_VALUE)/Hundered);
		COMPARE_Value_H=((Speed_Value>>EIGHTBITS) & MASK);
		COMPARE_Value_L=((Speed_Value>>ZEROBITS) & MASK);
		DIO_WritePin(PIN30,HIGH);
		DIO_WritePin(PIN31,LOW);				

	}
	else if (MotorDir==AntiClockWise)
	{
		Speed_Value=((Speed*TOP_VALUE)/Hundered);
		COMPARE_Value_H=((Speed_Value>>EIGHTBITS) & MASK);
		COMPARE_Value_L=((Speed_Value>>ZEROBITS) & MASK);
		DIO_WritePin(PIN30,LOW);
		DIO_WritePin(PIN31,HIGH);				
	}
	
	}
	
	void Motor_Stop(void)
	{

				DIO_WritePin(PIN30,LOW);
				DIO_WritePin(PIN31,LOW);
				

	}
	