#include "../Dio.h"
#include "../Includes/BitwiseOperation.h"
void DIO_WritePin(uint8 PinNum,uint8 PinValue)
{
	switch(PinNum){
		case 0: if(PinValue==0){Clear_Bit(PORTA,0);}else{Set_Bit(PORTA,0);};break;
		case 1: if(PinValue==0){Clear_Bit(PORTA,1);}else{Set_Bit(PORTA,1);} ;break;
		case 2: if(PinValue==0){Clear_Bit(PORTA,2);}else{Set_Bit(PORTA,2);} ;break;
		case 3: if(PinValue==0){Clear_Bit(PORTA,3);}else{Set_Bit(PORTA,3);} ;break;
		case 4: if(PinValue==0){Clear_Bit(PORTA,4);}else{Set_Bit(PORTA,4);} ;break;
		case 5: if(PinValue==0){Clear_Bit(PORTA,5);}else{Set_Bit(PORTA,5);} ;break;
		case 6: if(PinValue==0){Clear_Bit(PORTA,6);}else{Set_Bit(PORTA,6);} ;break;
		case 7: if(PinValue==0){Clear_Bit(PORTA,7);}else{Set_Bit(PORTA,7);} ;break;
		case 8: if(PinValue==0){Clear_Bit(PORTB,0);}else{Set_Bit(PORTB,0);} ;break;
		case 9: if(PinValue==0){Clear_Bit(PORTB,1);}else{Set_Bit(PORTB,1);} ;break;
		case 10: if(PinValue==0){Clear_Bit(PORTB,2);}else{Set_Bit(PORTB,2);} ;break;
		case 11: if(PinValue==0){Clear_Bit(PORTB,3);}else{Set_Bit(PORTB,3);} ;break;
		case 12: if(PinValue==0){Clear_Bit(PORTB,4);}else{Set_Bit(PORTB,4);} ;break;
		case 13: if(PinValue==0){Clear_Bit(PORTB,5);}else{Set_Bit(PORTB,5);} ;break;
		case 14: if(PinValue==0){Clear_Bit(PORTB,6);}else{Set_Bit(PORTB,6);} ;break;
		case 15: if(PinValue==0){Clear_Bit(PORTB,7);}else{Set_Bit(PORTB,7);} ;break;
		case 16: if(PinValue==0){Clear_Bit(PORTC,0);}else{Set_Bit(PORTC,0);} ;break;
		case 17: if(PinValue==0){Clear_Bit(PORTC,1);}else{Set_Bit(PORTC,1);} ;break;
		case 18: if(PinValue==0){Clear_Bit(PORTC,2);}else{Set_Bit(PORTC,2);} ;break;
		case 19: if(PinValue==0){Clear_Bit(PORTC,3);}else{Set_Bit(PORTC,3);} ;break;
		case 20: if(PinValue==0){Clear_Bit(PORTC,4);}else{Set_Bit(PORTC,4);} ;break;
		case 21: if(PinValue==0){Clear_Bit(PORTC,5);}else{Set_Bit(PORTC,5);} ;break;
		case 22: if(PinValue==0){Clear_Bit(PORTC,6);}else{Set_Bit(PORTC,6);} ;break;
		case 23: if(PinValue==0){Clear_Bit(PORTC,7);}else{Set_Bit(PORTC,7);} ;break;
		case 24: if(PinValue==0){Clear_Bit(PORTD,0);}else{Set_Bit(PORTD,0);} ;break;
		case 25: if(PinValue==0){Clear_Bit(PORTD,1);}else{Set_Bit(PORTD,1);} ;break;
		case 26: if(PinValue==0){Clear_Bit(PORTD,2);}else{Set_Bit(PORTD,2);} ;break;
		case 27: if(PinValue==0){Clear_Bit(PORTD,3);}else{Set_Bit(PORTD,3);} ;break;
		case 28: if(PinValue==0){Clear_Bit(PORTD,4);}else{Set_Bit(PORTD,4);} ;break;
		case 29: if(PinValue==0){Clear_Bit(PORTD,5);}else{Set_Bit(PORTD,5);} ;break;
		case 30: if(PinValue==0){Clear_Bit(PORTD,6);}else{Set_Bit(PORTD,6);} ;break;
		case 31: if(PinValue==0){Clear_Bit(PORTD,7);}else{Set_Bit(PORTD,7);} ;break;
		
		default: break;
		
	}
	
	
	
}
uint8 DIO_ReadPin(uint8 PinNum)
{
	uint8 Result;
	switch(PinNum){
		case 0: Result= Get_Bit(PINA,0);break;
		case 1: Result=Get_Bit(PINA,1);break;
		case 2: Result=Get_Bit(PINA,2);break;
		case 3: Result=Get_Bit(PINA,3);break;
		case 4: Result=Get_Bit(PINA,4);break;
		case 5: Result=Get_Bit(PINA,5);break;
		case 6: Result=Get_Bit(PINA,6);break;
		case 7: Result=Get_Bit(PINA,7);break;
		case 8: Result=Get_Bit(PINB,0);break;
		case 9: Result=Get_Bit(PINB,1);break;
		case 10: Result=Get_Bit(PINB,2);break;
		case 11: Result=Get_Bit(PINB,3);break;
		case 12: Result=Get_Bit(PINB,4);break;
		case 13: Result=Get_Bit(PINB,5);break;
		case 14: Result=Get_Bit(PINB,6);break;
		case 15: Result=Get_Bit(PINB,7);break;
		case 16: Result=Get_Bit(PINC,0);break;
		case 17: Result=Get_Bit(PINC,1);break;
		case 18: Result=Get_Bit(PINC,2);break;
		case 19: Result=Get_Bit(PINC,3);break;
		case 20: Result=Get_Bit(PINC,4);break;
		case 21: Result=Get_Bit(PINC,5);break;
		case 22: Result=Get_Bit(PINC,6);break;
		case 23: Result=Get_Bit(PINC,7);break;
		case 24: Result=Get_Bit(PIND,0);break;
		case 25: Result=Get_Bit(PIND,1);break;
		case 26: Result=Get_Bit(PIND,2);break;
		case 27: Result=Get_Bit(PIND,3);break;
		case 28: Result=Get_Bit(PIND,4);break;
		case 29: Result=Get_Bit(PIND,5);break;
		case 30: Result=Get_Bit(PIND,6);break;
		case 31: Result=Get_Bit(PIND,7);break;
		
		default: break;
	}
	return Result;
}


void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection)
{
	switch(PinNum){
		case 0: if(PinDirection==0){Clear_Bit(DDRA,0);}else{Set_Bit(DDRA,0);};break;
		case 1: if(PinDirection==0){Clear_Bit(DDRA,1);}else{Set_Bit(DDRA,1);} ;break;
		case 2: if(PinDirection==0){Clear_Bit(DDRA,2);}else{Set_Bit(DDRA,2);} ;break;
		case 3: if(PinDirection==0){Clear_Bit(DDRA,3);}else{Set_Bit(DDRA,3);} ;break;
		case 4: if(PinDirection==0){Clear_Bit(DDRA,4);}else{Set_Bit(DDRA,4);} ;break;
		case 5: if(PinDirection==0){Clear_Bit(DDRA,5);}else{Set_Bit(DDRA,5);} ;break;
		case 6: if(PinDirection==0){Clear_Bit(DDRA,6);}else{Set_Bit(DDRA,6);} ;break;
		case 7: if(PinDirection==0){Clear_Bit(DDRA,7);}else{Set_Bit(DDRA,7);} ;break;
		case 8: if(PinDirection==0){Clear_Bit(DDRB,0);}else{Set_Bit(DDRB,0);} ;break;
		case 9: if(PinDirection==0){Clear_Bit(DDRB,1);}else{Set_Bit(DDRB,1);} ;break;
		case 10: if(PinDirection==0){Clear_Bit(DDRB,2);}else{Set_Bit(DDRB,2);} ;break;
		case 11:  if(PinDirection==0){Clear_Bit(DDRB,3);}else{Set_Bit(DDRB,3);} ;break;
		case 12: if(PinDirection==0){Clear_Bit(DDRB,4);}else{Set_Bit(DDRB,4);} ;break;
		case 13: if(PinDirection==0){Clear_Bit(DDRB,5);}else{Set_Bit(DDRB,5);} ;break;
		case 14: if(PinDirection==0){Clear_Bit(DDRB,6);}else{Set_Bit(DDRB,6);} ;break;
		case 15: if(PinDirection==0){Clear_Bit(DDRB,7);}else{Set_Bit(DDRB,7);} ;break;
		case 16: if(PinDirection==0){Clear_Bit(DDRC,0);}else{Set_Bit(DDRC,0);} ;break;
		case 17: if(PinDirection==0){Clear_Bit(DDRC,1);}else{Set_Bit(DDRC,1);} ;break;
		case 18: if(PinDirection==0){Clear_Bit(DDRC,2);}else{Set_Bit(DDRC,2);} ;break;
		case 19: if(PinDirection==0){Clear_Bit(DDRC,3);}else{Set_Bit(DDRC,3);} ;break;
		case 20: if(PinDirection==0){Clear_Bit(DDRC,4);}else{Set_Bit(DDRC,4);} ;break;
		case 21: if(PinDirection==0){Clear_Bit(DDRC,5);}else{Set_Bit(DDRC,5);} ;break;
		case 22: if(PinDirection==0){Clear_Bit(DDRC,6);}else{Set_Bit(DDRC,6);} ;break;
		case 23: if(PinDirection==0){Clear_Bit(DDRC,7);}else{Set_Bit(DDRC,7);} ;break;
		case 24: if(PinDirection==0){Clear_Bit(DDRD,0);}else{Set_Bit(DDRD,0);} ;break;
		case 25: if(PinDirection==0){Clear_Bit(DDRD,1);}else{Set_Bit(DDRD,1);} ;break;
		case 26: if(PinDirection==0){Clear_Bit(DDRD,2);}else{Set_Bit(DDRD,2);} ;break;
		case 27: if(PinDirection==0){Clear_Bit(DDRD,3);}else{Set_Bit(DDRD,3);} ;break;
		case 28: if(PinDirection==0){Clear_Bit(DDRD,4);}else{Set_Bit(DDRD,4);} ;break;
		case 29: if(PinDirection==0){Clear_Bit(DDRD,5);}else{Set_Bit(DDRD,5);} ;break;
		case 30: if(PinDirection==0){Clear_Bit(DDRD,6);}else{Set_Bit(DDRD,6);} ;break;
		case 31: if(PinDirection==0){Clear_Bit(DDRD,7);}else{Set_Bit(DDRD,7);} ;break;
		
		default: break;
		
	}
}
