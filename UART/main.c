/*
 * UART.c
 *
 * Created: 2/27/2019 1:50:43 PM
 * Author : AVE-LAP-071
 */ 


#include "UART.h"
int main(void)
{
    UART_Init();

	
    while (1) 
    {
		UART_Transmit(1);
    }
}

