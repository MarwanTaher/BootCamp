#include "../Includes/Dio.h"
#include "../Includes/BitwiseOperation.h"


/************************************************************************/
/* Name: DIO WritePin */
/* Parameters : Pin number,pin value */
/* I/p : uint8 PinNum,uint8 PinValue */
/* O/p : Null */
/* Return : void */
/* Write on the Pins */
/************************************************************************/



void DIO_WritePin(uint8 PinNum,uint8 PinValue)
{
	switch(PinNum){
	case PIN0: if(PinValue==LOW){Clear_Bit(PORTA,PIN0);}else{Set_Bit(PORTA,PIN0);};break;
	case PIN1: if(PinValue==LOW){Clear_Bit(PORTA,PIN1);}else{Set_Bit(PORTA,PIN1);} ;break;
	case PIN2: if(PinValue==LOW){Clear_Bit(PORTA,PIN2);}else{Set_Bit(PORTA,PIN2);} ;break;
	case PIN3: if(PinValue==LOW){Clear_Bit(PORTA,PIN3);}else{Set_Bit(PORTA,PIN3);} ;break;
	case PIN4: if(PinValue==LOW){Clear_Bit(PORTA,PIN4);}else{Set_Bit(PORTA,PIN4);} ;break;
	case PIN5: if(PinValue==LOW){Clear_Bit(PORTA,PIN5);}else{Set_Bit(PORTA,PIN5);} ;break;
	case PIN6: if(PinValue==LOW){Clear_Bit(PORTA,PIN6);}else{Set_Bit(PORTA,PIN6);} ;break;
	case PIN7: if(PinValue==LOW){Clear_Bit(PORTA,PIN7);}else{Set_Bit(PORTA,PIN7);} ;break;
	case PIN8: if(PinValue==PIN0){Clear_Bit(PORTB,PIN0);}else{Set_Bit(PORTB,PIN0);} ;break;
	case PIN9: if(PinValue==LOW){Clear_Bit(PORTB,PIN1);}else{Set_Bit(PORTB,PIN1);} ;break;
	case PIN10: if(PinValue==LOW){Clear_Bit(PORTB,PIN2);}else{Set_Bit(PORTB,PIN2);} ;break;
	case PIN11: if(PinValue==LOW){Clear_Bit(PORTB,PIN3);}else{Set_Bit(PORTB,PIN3);} ;break;
	case PIN12: if(PinValue==LOW){Clear_Bit(PORTB,PIN4);}else{Set_Bit(PORTB,PIN4);} ;break;
	case PIN13: if(PinValue==LOW){Clear_Bit(PORTB,PIN5);}else{Set_Bit(PORTB,PIN5);} ;break;
	case PIN14: if(PinValue==LOW){Clear_Bit(PORTB,PIN6);}else{Set_Bit(PORTB,PIN6);} ;break;
	case PIN15: if(PinValue==LOW){Clear_Bit(PORTB,PIN7);}else{Set_Bit(PORTB,PIN7);} ;break;
	case PIN16: if(PinValue==LOW){Clear_Bit(PORTC,PIN0);}else{Set_Bit(PORTC,PIN0);} ;break;
	case PIN17: if(PinValue==LOW){Clear_Bit(PORTC,PIN1);}else{Set_Bit(PORTC,PIN1);} ;break;
	case PIN18: if(PinValue==LOW){Clear_Bit(PORTC,PIN2);}else{Set_Bit(PORTC,PIN2);} ;break;
	case PIN19: if(PinValue==LOW){Clear_Bit(PORTC,PIN3);}else{Set_Bit(PORTC,PIN3);} ;break;
	case PIN20: if(PinValue==LOW){Clear_Bit(PORTC,PIN4);}else{Set_Bit(PORTC,PIN4);} ;break;
	case PIN21: if(PinValue==LOW){Clear_Bit(PORTC,PIN5);}else{Set_Bit(PORTC,PIN5);} ;break;
	case PIN22: if(PinValue==LOW){Clear_Bit(PORTC,PIN6);}else{Set_Bit(PORTC,PIN6);} ;break;
	case PIN23: if(PinValue==LOW){Clear_Bit(PORTC,PIN7);}else{Set_Bit(PORTC,PIN7);} ;break;
	case PIN24: if(PinValue==LOW){Clear_Bit(PORTD,PIN0);}else{Set_Bit(PORTD,PIN0);} ;break;
	case PIN25: if(PinValue==LOW){Clear_Bit(PORTD,PIN1);}else{Set_Bit(PORTD,PIN1);} ;break;
	case PIN26: if(PinValue==LOW){Clear_Bit(PORTD,PIN2);}else{Set_Bit(PORTD,PIN2);} ;break;
	case PIN27: if(PinValue==LOW){Clear_Bit(PORTD,PIN3);}else{Set_Bit(PORTD,PIN3);} ;break;
	case PIN28: if(PinValue==LOW){Clear_Bit(PORTD,PIN4);}else{Set_Bit(PORTD,PIN4);} ;break;
	case PIN29: if(PinValue==LOW){Clear_Bit(PORTD,PIN5);}else{Set_Bit(PORTD,PIN5);} ;break;
	case PIN30: if(PinValue==LOW){Clear_Bit(PORTD,PIN6);}else{Set_Bit(PORTD,PIN6);} ;break;
	case PIN31: if(PinValue==LOW){Clear_Bit(PORTD,PIN7);}else{Set_Bit(PORTD,PIN7);} ;break;
	
	default: break;
	
	}
	
	
	
}

/************************************************************************/
/* Name: DIO_ReadPin */
/* Parameters : Pin number,pin value */
/* I/p : uint8 PinNum */
/* O/p : uint8 Result */
/* Return : uint8 Result */
/* Reads from the Pins */
/************************************************************************/



uint8 DIO_ReadPin(uint8 PinNum)
{
	uint8 Result;
	switch(PinNum){
	case PIN0: Result= Get_Bit(PINA,PIN0);break;
	case PIN1: Result=Get_Bit(PINA,PIN1);break;
	case PIN2: Result=Get_Bit(PINA,PIN2);break;
	case PIN3: Result=Get_Bit(PINA,PIN3);break;
	case PIN4: Result=Get_Bit(PINA,PIN4);break;
	case PIN5: Result=Get_Bit(PINA,PIN5);break;
	case PIN6: Result=Get_Bit(PINA,PIN6);break;
	case PIN7: Result=Get_Bit(PINA,PIN7);break;
	case PIN8: Result=Get_Bit(PINB,PIN0);break;
	case PIN9: Result=Get_Bit(PINB,PIN1);break;
	case PIN10: Result=Get_Bit(PINB,PIN2);break;
	case PIN11: Result=Get_Bit(PINB,PIN3);break;
	case PIN12: Result=Get_Bit(PINB,PIN4);break;
	case PIN13: Result=Get_Bit(PINB,PIN5);break;
	case PIN14: Result=Get_Bit(PINB,PIN6);break;
	case PIN15: Result=Get_Bit(PINB,PIN7);break;
	case PIN16: Result=Get_Bit(PINC,PIN0);break;
	case PIN17: Result=Get_Bit(PINC,PIN1);break;
	case PIN18: Result=Get_Bit(PINC,PIN2);break;
	case PIN19: Result=Get_Bit(PINC,PIN3);break;
	case PIN20: Result=Get_Bit(PINC,PIN4);break;
	case PIN21: Result=Get_Bit(PINC,PIN5);break;
	case PIN22: Result=Get_Bit(PINC,PIN6);break;
	case PIN23: Result=Get_Bit(PINC,PIN7);break;
	case PIN24: Result=Get_Bit(PIND,PIN0);break;
	case PIN25: Result=Get_Bit(PIND,PIN1);break;
	case PIN26: Result=Get_Bit(PIND,PIN2);break;
	case PIN27: Result=Get_Bit(PIND,PIN3);break;
	case PIN28: Result=Get_Bit(PIND,PIN4);break;
	case PIN29: Result=Get_Bit(PIND,PIN5);break;
	case PIN30: Result=Get_Bit(PIND,PIN6);break;
	case PIN31: Result=Get_Bit(PIND,PIN7);break;
	
	default: break;
	}
	return Result;
}

/************************************************************************/
/* Name: DIO_SetPinDirection */
/* Parameters : Pin number,pin direction */
/* I/p : uint8 PinNum, uint8 PinDirection */
/* O/p : Null */
/* Return : Void */
/* Set the direction of the Pins */
/************************************************************************/


void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection)
{
	switch(PinNum){
	case PIN0: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN0);}else{Set_Bit(DDRA,PIN0);};break;
	case PIN1: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN1);}else{Set_Bit(DDRA,PIN1);} ;break;
	case PIN2: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN2);}else{Set_Bit(DDRA,PIN2);} ;break;
	case PIN3: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN3);}else{Set_Bit(DDRA,PIN3);} ;break;
	case PIN4: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN4);}else{Set_Bit(DDRA,PIN4);} ;break;
	case PIN5: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN5);}else{Set_Bit(DDRA,PIN5);} ;break;
	case PIN6: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN6);}else{Set_Bit(DDRA,PIN6);} ;break;
	case PIN7: if(PinDirection==OUTPUT){Clear_Bit(DDRA,PIN7);}else{Set_Bit(DDRA,PIN7);} ;break;
	case PIN8: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN0);}else{Set_Bit(DDRB,PIN0);} ;break;
	case PIN9: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN1);}else{Set_Bit(DDRB,PIN1);} ;break;
	case PIN10: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN2);}else{Set_Bit(DDRB,PIN2);} ;break;
	case PIN11:  if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN3);}else{Set_Bit(DDRB,PIN3);} ;break;
	case PIN12: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN4);}else{Set_Bit(DDRB,PIN4);} ;break;
	case PIN13: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN5);}else{Set_Bit(DDRB,PIN5);} ;break;
	case PIN14: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN6);}else{Set_Bit(DDRB,PIN6);} ;break;
	case PIN15: if(PinDirection==OUTPUT){Clear_Bit(DDRB,PIN7);}else{Set_Bit(DDRB,PIN7);} ;break;
	case PIN16: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN0);}else{Set_Bit(DDRC,PIN0);} ;break;
	case PIN17: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN1);}else{Set_Bit(DDRC,PIN1);} ;break;
	case PIN18: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN2);}else{Set_Bit(DDRC,PIN2);} ;break;
	case PIN19: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN3);}else{Set_Bit(DDRC,PIN3);} ;break;
	case PIN20: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN4);}else{Set_Bit(DDRC,PIN4);} ;break;
	case PIN21: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN5);}else{Set_Bit(DDRC,PIN5);} ;break;
	case PIN22: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN6);}else{Set_Bit(DDRC,PIN6);} ;break;
	case PIN23: if(PinDirection==OUTPUT){Clear_Bit(DDRC,PIN7);}else{Set_Bit(DDRC,PIN7);} ;break;
	case PIN24: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN0);}else{Set_Bit(DDRD,PIN0);} ;break;
	case PIN25: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN1);}else{Set_Bit(DDRD,PIN1);} ;break;
	case PIN26: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN2);}else{Set_Bit(DDRD,PIN2);} ;break;
	case PIN27: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN3);}else{Set_Bit(DDRD,PIN3);} ;break;
	case PIN28: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN4);}else{Set_Bit(DDRD,PIN4);} ;break;
	case PIN29: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN5);}else{Set_Bit(DDRD,PIN5);} ;break;
	case PIN30: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN6);}else{Set_Bit(DDRD,PIN6);} ;break;
	case PIN31: if(PinDirection==OUTPUT){Clear_Bit(DDRD,PIN7);}else{Set_Bit(DDRD,PIN7);} ;break;
    
	default: break; 
	
	}
}
