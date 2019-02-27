#include "../Includes/Timer.h"
#include "avr/interrupt.h"

volatile uint16 INT_FLAG;
volatile uint8 BUTTON_INT_FLAG = RESET ;

callback_Type callback_ptr;


/************************************************************************/
/* SetCallBack */
/* Parameters : pointer to function */
/* I/p : void (*callback)(void) */
/* O/p : void */
/* Return : void */
/* Set the call back pointer to the function */
/************************************************************************/

void SetCallBack(void(*callback)(void))
{
	callback_ptr=callback;
}

ISR(TIMER0_COMP_vect)
{
	(*callback_ptr)();
}


/************************************************************************/
/* OS_Timer_init */
/* Parameters : Null */
/* I/p : uint8 Compare_Time */
/* O/p : void */
/* Return : void */
/* Initialize Timer Zero with CTC mode */
/************************************************************************/

void OS_Timer_init(uint8 Compare_Type)
{
	
	/* Compare Mode */
		TCNT0 = 0;
		Set_Bit(TCCR0,3);
		Clear_Bit(TCCR0,6);
		Set_Bit(TCCR0,4);
		Set_Bit(TCCR0,5);
		
	/* Enable Timer Interrupt */			
		Set_Bit(TIMSK,1);
		
		
		
		OCR0 = Compare_Type;
		
	/* Set Pre-Scaler to 64 */		
		Set_Bit(TCCR0,0);
		Set_Bit(TCCR0,1);
		Clear_Bit(TCCR0,2);
		
		
	/* Enable Global Interrupt & Interrupt 2*/			
		Set_Bit(SREG_H,GIE);
		Set_Bit(MCUCSR_H,ISC2);
		Set_Bit(GICR_H,INT2);
	
}
