#ifndef _TIMER_H_

#define _TIMER_H_
#include "Types.h"
#include "BitwiseOperation.h"
#include "Dio.h"
#include "MEM_MAP_REG.h"


#ifndef F_CPU
#define F_CPU 8000000UL
#endif


#define Start 0
#define Stop 1
#define Ready 2

#define RESET 0x00
#define TIMER_TICK_COUNTS 124
#define ONE_SEC   1000


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

void timer_init(void);
 

#endif
