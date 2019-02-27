/*
 * UART_cfg.h
 *
 * Created: 2/27/2019 1:56:35 PM
 *  Author: AVE-LAP-039
 */ 


#ifndef UART_CFG_H_
#define UART_CFG_H_

/*Set frequency of MC*/
#define F_CPU 16000000UL

/*Struct Initialization*/
#define BAUDRATE   9600
#define NO_STOPBITS 1
#define PARITYMODE 1
#define DATASIZE   8
#define SPEEDMODE  1



/*Register addresses*/
#define UBRRH1   (*(volatile ptr8)(0x40))
#define UCSRC1   (*(volatile ptr8)(0x40))
#define UDR1     (*(volatile ptr8)(0x2C))
#define UCSRA1   (*(volatile ptr8)(0x2B))
#define UCSRB1   (*(volatile ptr8)(0x2A))
#define UBRRL1   (*(volatile ptr8)(0x29))

/*Register PINs*/
/* UCSRA */
#define RXC     7
#define TXC     6
#define UDRE    5
#define FE      4
#define DOR     3
#define PE      2
#define U2X     1
#define MPCM    0

/* UCSRB */
#define RXCIE   7
#define TXCIE   6
#define UDRIE   5
#define RXEN1    4
#define TXEN1    3
#define UCSZ2   2
#define RXB8    1
#define TXB8    0

/* UCSRC */
#define URSEL1   7
#define UMSEL   6
#define UPM1    5
#define UPM0    4
#define USBS1    3
#define UCSZ11  2
#define UCSZ01   1
#define UCPOL   0

/*Numbers*/
#define ONE     1
#define EIGHT	8
#define SIXTEEN 16

/*States*/
#define TRUE  1
#define FALSE 0


#endif /* UART_CFG_H_ */