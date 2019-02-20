#ifndef _DIO_H_
#define _DIO_H_
#include "Types.h"
#include "MEM_MAP_REG.h"




/************************************************************************/
/* Name: DIO WritePin */
/* Parameters : Pin number,pin value */
/* I/p : uint8 PinNum,uint8 PinValue */
/* O/p : Null */
/* Return : void */
/* Write on the Pins */
/************************************************************************/


 extern void DIO_WritePin(uint8 PinNum,uint8 PinValue);
 
 /************************************************************************/
 /* Name: DIO_ReadPin */
 /* Parameters : Pin number,pin value */
 /* I/p : uint8 PinNum */
 /* O/p : uint8 Result */
 /* Return : uint8 Result */
 /* Reads from the Pins */
 /************************************************************************/

 
 extern uint8 DIO_ReadPin(uint8 PinNum);
 
 
 
 /************************************************************************/
 /* Name: DIO_SetPinDirection */
 /* Parameters : Pin number,pin direction */
 /* I/p : uint8 PinNum, uint8 PinDirection */
 /* O/p : Null */
 /* Return : Void */
 /* Set the direction of the Pins */
 /************************************************************************/


 extern void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection);




#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0

#define  ZERO 0
#define  ONE 1


#endif