/*
 * UART.h
 *
 * Created: 2/27/2019 2:07:06 PM
 *  Author: AVE-LAP-071
 */ 


#include "../Includes/Types.h"



#ifndef UART_H_
#define UART_H_


/*Struct defenition*/

typedef struct  {
	uint32	BaudRate ;
	uint8	No_StopBits ;
	uint8	ParityMode ;
	uint8	DataSize ;
	uint8	SpeedMode ;
}	UART_Config_S ;


void UART_Init(void);
void UART_Transmit(uint8 Data);
uint8 UART_Reseive(void);
void UART_TransmitString(uint8* String ,uint8 Size);




#endif /* UART_H_ */