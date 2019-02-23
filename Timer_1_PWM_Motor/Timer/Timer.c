#include "../Includes/Timer.h"


volatile uint16 INT_FLAG;
volatile uint8 BUTTON_INT_FLAG = RESET ;

extern uint16 COMPARE_Value_H;
extern uint16 COMPARE_Value_L;

volatile uint16 TOP_Value_H;
volatile uint16 TOP_Value_L;


/************************************************************************/
/* timer_init */
/* Parameters : Null */
/* I/p : Null */
/* O/p : Null */
/* Return : void */
/* Initialize Timer Zero */                                                                    
/************************************************************************/


void timer_init(uint8 Mode)
{	
if(FAST_PWM==0)
{
	/* Mode 14: Fast PWM to Read top from ICR1 */
	Clear_Bit(TCCR1A_H,WGM10);
	Set_Bit(TCCR1A_H,WGM11);
	Set_Bit(TCCR1B_H,WGM12);
	Set_Bit(TCCR1B_H,WGM13);

	/* Output Compare Mode / Fast PWM / Inverted */
	Set_Bit(TCCR1A_H,COM1A1);
	Set_Bit(TCCR1A_H,COM1A0);
	Set_Bit(TCCR1A_H,COM1B1);
	Set_Bit(TCCR1A_H,COM1B0);
	
	
    /* Reset TCNT0 & SET The Compare Reg to a value */	
	TCNT1H_H=RESET;
	TCNT1L_H=RESET;

	/* Set Pre-Scaler to No Prescaler*/	
	Set_Bit(TCCR1B_H,CS10);
	Clear_Bit(TCCR1B_H,CS11);
	Clear_Bit(TCCR1B_H,CS12);
	Clear_Bit(SREG_H,GIE);
	
}
else
{
		/* Mode 14: Fast PWM to Read top from ICR1 */
		Clear_Bit(TCCR1A_H,WGM10);
		Set_Bit(TCCR1A_H,WGM11);
		Clear_Bit(TCCR1B_H,WGM12);
		Set_Bit(TCCR1B_H,WGM13);

		/* Output Compare Mode / PWM / Inverted */
		Set_Bit(TCCR1A_H,COM1A1);
		Set_Bit(TCCR1A_H,COM1A0);
		Set_Bit(TCCR1A_H,COM1B1);
		Set_Bit(TCCR1A_H,COM1B0);
		
		
		/* Reset TCNT0 & SET The Compare Reg to a value */
		TCNT1H_H=RESET;
		TCNT1L_H=RESET;

		/* Set Pre-Scaler to No Prescaler*/
		Set_Bit(TCCR1B_H,CS10);
		Clear_Bit(TCCR1B_H,CS11);
		Clear_Bit(TCCR1B_H,CS12);
		Clear_Bit(SREG_H,GIE);
}
}


void Enable_Intrrupt(void)
{
		/* Enable Timer Interrupt */
		Set_Bit(TIMSK_H,OCIE1A);
		Set_Bit(TIMSK_H,OCIE1B);
	
		/* Enable Global Interrupt & Interrupt 2*/
		Set_Bit(SREG_H,GIE);
		Set_Bit(MCUCSR_H,ISC2);
		Set_Bit(GICR_H,INT2);
}

#if 0
ISR(INT2_vect)
{
	BUTTON_INT_FLAG = 1 ;
}

ISR(TIMER0_COMP_vect)
{
	INT_FLAG++;
}
#endif
/************************************************************************/
/* timer_delay */
/* Parameters : Time in Milli Seconds */
/* I/p : uint32 n */
/* O/p : Null */
/* Return : void */
/* Create Software Timer Delay */
/************************************************************************/


#if 0
 void timer_delay(uint32 n)
 {
	 TCNT0_H=0;
	 uint32 counter=0;
	
	 for (counter=0;counter<n;counter++)
	 {
		 while((Get_Bit(TIFR_H,1)==0));
		 {if(DIO_ReadPin(10)==1){Flag=1;timer_delay(1);}}
		 

			  Set_Bit(TIFR_H,1);

	 }
			 
	
	 
 }
 
 #endif
 