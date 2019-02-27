/*
 * UART.c
 *
 * Created: 2/27/2019 2:06:49 PM
 *  Author: AVE-LAP-071
 */ 

#include "Config_UART.h"
#include "UART.h"

void UART_Init(void)
{
	/*Define structure members*/
	UART_Config_S UART_Struct; //={BAUDRATE,NO_STOPBITS,PARITYMODE,DATASIZE,SPEEDMODE};
		UART_Struct.BaudRate=BAUDRATE;
		UART_Struct.No_StopBits=NO_STOPBITS;
		UART_Struct.ParityMode=PARITYMODE;
		UART_Struct.DataSize=DATASIZE;
		UART_Struct.SpeedMode=SPEEDMODE;
		
		
	uint32 UBRR;
	UBRR =103;//((F_CPU/(UART_Struct.BaudRate*SIXTEEN)) - ONE);
	/*Set Baud Rate*/
	UBRRH1 = (UBRR >> EIGHT);
	//UBRRL1 = UBRR;
	
	/*Enable UART Transmitter and Receiver*/
	UCSRB1	|= (TRUE<<RXEN1);
	UCSRB1	|= (TRUE<<TXEN1);
	
	/*Set URSEL by one to write in UCSRC*/
	UCSRC1 |= (ONE<<URSEL1);
	
	
	/*set 2 stop bits*/
	UCSRC1|= (ONE<<USBS1);
	/*Set 8 bit data*/
	UCSRC1 |= (ONE<<UCSZ01);
	UCSRC1 |= (ONE<<UCSZ11);
	
}

void UART_Transmit(uint8 data)
{
	
	while(!(UCSRA1 & (1<<UDRE)));
	UDR1=data;
	
	
}

uint8 UART_Recieve(void)
{
	
uint8 Recieve;

Recieve=UDR1;

return Recieve;
	
}
