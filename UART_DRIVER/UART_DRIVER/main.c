/*
 * UARTTEST.c
 *
 * Created: 3/2/2019 5:44:17 PM
 * Author : Marwan
 */ 


#include "Includes/UART.h"
#include "Includes/Config_UART.h"
int main(void)
{
	UART_Init();


	uint8 x=0;

	while (1)
	{
			x=UART_Recieve();
			UART_Transmit(x);
		

			
	}
}

