/*
 * GccApplication5.c
 *
 * Created: 2/13/2019 10:54:36 AM
 * Author : AVE-LAP-071
 */ 


#include "Includes/Types.h"
#include "Includes/Dio.h"
#include "Includes/Timer.h"
#include "Includes/MEM_MAP_REG.h"
#ifndef F_CPU
#define F_CPU 8000000UL
#endif

extern uint16 INT_FLAG;
extern uint8 BUTTON_INT_FLAG;

#define LED_1 PIN13
#define LED_2 PIN14 
#define LED_3 PIN15

#define BUTTON_0 PIN10
#define BUTTON_1 PIN20

int main(void)
{
	/*Timer Initializing*/
	 timer_init(); 
	uint8 State = Start;
	
	/*Setting Pin Direction*/
    DIO_SetPinDirection(LED_1,OUTPUT);
    DIO_SetPinDirection(LED_2,OUTPUT);
    DIO_SetPinDirection(LED_3,OUTPUT);
	DIO_SetPinDirection(BUTTON_0,INPUT);
	DIO_SetPinDirection(BUTTON_1,INPUT);
	
	/*LED Off*/	
	DIO_WritePin(LED_1,LOW); 
	DIO_WritePin(LED_2,LOW);
	DIO_WritePin(LED_3,LOW);		 	

while(1)
{

	switch (State)
	{
		case Start :  	/*Start State*/
		DIO_WritePin(LED_1,HIGH); 
		DIO_WritePin(LED_2,LOW);
		DIO_WritePin(LED_3,LOW);

		if(BUTTON_INT_FLAG==HIGH)
		{
			State = Stop ;
			BUTTON_INT_FLAG=LOW;
			INT_FLAG= LOW ;
			break ;
		}
		if(INT_FLAG >= ONE_SEC)
		{
			INT_FLAG=LOW ;
			State=Stop;	
		}
		
		break;
		case Stop :   /*Stop State*/
		DIO_WritePin(LED_1,LOW); 
		DIO_WritePin(LED_2,LOW);
		DIO_WritePin(LED_3,HIGH);


		if(BUTTON_INT_FLAG==HIGH)
		{
			State = Stop ;
			BUTTON_INT_FLAG=LOW;
			INT_FLAG= LOW ;
			break ;
		}		
	
		if(INT_FLAG >= ONE_SEC)
		{
			INT_FLAG = LOW ;
			State = Ready ;
		}
		break;
		
		case Ready :   /*Ready State*/
		DIO_WritePin(LED_1,LOW);
		DIO_WritePin(LED_2,HIGH);
		DIO_WritePin(LED_3,LOW);


if(BUTTON_INT_FLAG==HIGH)
{
	State = Stop ;
	BUTTON_INT_FLAG=LOW;
	INT_FLAG= LOW ;
	break ;
}

		if(INT_FLAG >=ONE_SEC)
		{
			INT_FLAG = LOW ;
			State = Start ;
		}
		
		break;
		default :
		State = Start;
		break;
	}
}
}
