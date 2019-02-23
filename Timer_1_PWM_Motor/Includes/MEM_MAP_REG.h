/*
 * MEM_MAP_REG.h
 *
 * Created: 2/20/2019 9:50:10 PM
 *  Author: AVE-LAP-071
 */ 


#ifndef MEM_MAP_REG_H_
#define MEM_MAP_REG_H_



#define GICR_H	  (*(volatile uint8*) (0x5B))
#define TCNT0_H   (*(volatile uint8*) (0x52))
#define OCR0_H    (*(volatile uint8*) (0x5C))
#define TIMSK_H	  (*(volatile uint8*) (0x59))
#define TIFR_H    (*(volatile uint8*) (0x58))
#define SREG_H   (*(volatile uint8*) (0x5F))
#define SFIOR_H  (*(volatile uint8*) (0x50))
#define TCCR0_H  (*(volatile uint8*) (0x53))
#define MCUCSR_H  (*(volatile uint8*) (0x54))
#define TCCR1A_H  (*(volatile uint8*) (0x4F))
#define TCCR1B_H  (*(volatile uint8*) (0x4E))
#define TCNT1H_H  (*(volatile uint8*) (0x4D))
#define TCNT1L_H  (*(volatile uint8*) (0x4C))

#define OCR1AH_H  (*(volatile uint8*) (0x4B))
#define OCR1AL_H  (*(volatile uint8*) (0x4A))
#define OCR1BH_H  (*(volatile uint8*) (0x49))
#define OCR1BL_H  (*(volatile uint8*) (0x48))
#define ICR1H_H  (*(volatile uint8*) (0x47))
#define ICR1L_H  (*(volatile uint8*) (0x46))

#define ISC2 6
#define INT2  5
#define OCIE0 1
#define OCIE1A 4
#define OCIE1B 3
#define TOIE0 0
#define GIE 7
#define CS00 0
#define CS01 1
#define CS02 2
#define CS10 0
#define CS11 1
#define CS12 2
#define WGM01 3
#define WGM00 6
#define WGM10 0
#define WGM11 1
#define WGM12 3
#define WGM13 4
#define FOC1A 3
#define FOC1B 2
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4




#define DDRA  (*(volatile uint8*) (0x3A))
#define DDRB  (*(volatile uint8*) (0x37))
#define DDRC  (*(volatile uint8*) (0x34))
#define DDRD  (*(volatile uint8*)  (0x31))


#define PORTA (*(volatile uint8*) (0x3B))

#define PORT0  0
#define PORT1  1
#define PORT2  2
#define PORT3  3
#define PORT4  4
#define PORT5  5
#define PORT6  6
#define PORT7  7

#define PORTB (*(volatile uint8*) (0x38))
#define PORT8  0
#define PORT9  1
#define PORT10  2
#define PORT11  3
#define PORT12  4
#define PORT13  5
#define PORT14  6
#define PORT15  7

#define PORTC (*(volatile uint8*) (0x35))
#define PORTC0  0
#define PORTC1  1
#define PORTC2  2
#define PORTC3  3
#define PORTC4  4
#define PORTC5  5
#define PORTC6  6
#define PORTC7  7

#define PORTD (*(volatile uint8*) (0x32))
#define PORTD0  0
#define PORTD1  1
#define PORTD2  2
#define PORTD3  3
#define PORTD4  4
#define PORTD5  5
#define PORTD6  6
#define PORTD7  7


#define PINA  (*(volatile uint8*) (0x39))
#define PINB  (*(volatile uint8*) (0x36))
#define PINC  (*(volatile uint8*) (0x33))
#define PIND  (*(volatile uint8*) (0x30))

#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7

#define PIN8   8
#define PIN9   9
#define PIN10  10
#define PIN11  11
#define PIN12  12
#define PIN13  13
#define PIN14  14
#define PIN15  15

#define PIN16  16
#define PIN17  17
#define PIN18  18
#define PIN19  19
#define PIN20  20
#define PIN21  21
#define PIN22  22
#define PIN23  23

#define PIN24  24
#define PIN25  25
#define PIN26  26
#define PIN27  27
#define PIN28  28
#define PIN29  29
#define PIN30  30
#define PIN31  31






#endif /* MEM_MAP_REG_H_ */