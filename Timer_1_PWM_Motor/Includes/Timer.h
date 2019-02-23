#ifndef _TIMER_H_

#define _TIMER_H_
#include "Types.h"
#include "BitwiseOperation.h"
#include "Dio.h"
#include "MEM_MAP_REG.h"


#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define ZEROBITS 0
#define EIGHTBITS 8
#define MASK 0xFF
#define TOP_VALUE 56000
#define Start 0
#define Stop 1
#define Ready 2
#define FAST_PWM 0

#define RESET 0x00
#define ONE_SEC   1000
#define OC1A PIN29
#define OC1B PIN28

/************************************************************************/
/* timer_delay */
/* Parameters : Time in Milli Seconds */
/* I/p : uint32 n */
/* O/p : Null */
/* Return : void */
/* Create Software Timer Delay */
/************************************************************************/

extern void timer_delay(uint32 n);

/************************************************************************/
/* timer_init */
/* Parameters : Null */
/* I/p : Null */
/* O/p : Null */
/* Return : void */
/* Initialize Timer Zero */
/************************************************************************/

void timer_init(uint8 Mode);
 
 
 
 /************************************************************************/
 /* Enable_Intrrupt  */
 /* Parameters : Null */
 /* I/p : Null */
 /* O/p : Null */
 /* Return : void */
 /* Enable Intrrupt */
 /************************************************************************/

 void Enable_Intrrupt(void);

#endif
