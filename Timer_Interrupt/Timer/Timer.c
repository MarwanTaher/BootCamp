#include "../Includes/Timer.h"
#include "avr/interrupt.h"

volatile uint16 INT_FLAG;
volatile uint8 BUTTON_INT_FLAG = RESET ;

/************************************************************************/
/* timer_init */
/* Parameters : Null */
/* I/p : Null */
/* O/p : Null */
/* Return : void */
/* Initialize Timer Zero */                                                                    
/************************************************************************/


void timer_init(void)
{	
	/* Compare Mode */
	Set_Bit(TCCR0_H,WGM01);
	Clear_Bit(TCCR0_H,WGM00);
	
	/* Enable Timer Interrupt */	
	Set_Bit(TIMSK_H,OCIE0);
	
    /* Reset TCNT0 & SET The Compare Reg to a value */	
	TCNT0_H=RESET;
	OCR0_H=TIMER_TICK_COUNTS;
	
	/* Set Pre-Scaler to 64 */	
	Set_Bit(TCCR0_H,CS00);
	Set_Bit(TCCR0_H,CS01);
	Clear_Bit(TCCR0_H,CS02);
	
	/* Enable Global Interrupt & Interrupt 2*/	
	Set_Bit(SREG,GIE);
	Set_Bit(MCUCSR_H,ISC2);
	Set_Bit(GICR_H,INT2); 
}


ISR(INT2_vect)
{
	BUTTON_INT_FLAG = 1 ;
}

ISR(TIMER0_COMP_vect)
{
	INT_FLAG++;
}

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
 