/*
 * DIO.h
 *
 *  Created on: Apr 12, 2023
 *      Author: Abdelrhman Mohamed
 */

#ifndef DIO_H_
#define DIO_H_

typedef unsigned char u8 ;

		#define DDRA        *((u8*)0x3B)
		#define PORTA       *((u8*)0x3A)
		#define PINA        *((volatile u8*)0x39)

        #define DDRB        *((u8*)0x37)
		#define PORTB       *((u8*)0x38)
		#define PINB        *((volatile u8*)0x36)

        #define DDRC        *((u8*)0x34)
		#define PORTC       *((u8*)0x35)
		#define PINC        *((volatile u8*)0x33)

        #define DDRD        *((u8*)0x31)
		#define PORTD       *((u8*)0x32)
		#define PIND        *((volatile u8*)0x30)


        #define DIO_u8PIN0  0
		#define DIO_u8PIN1  1
		#define DIO_u8PIN2  2
		#define DIO_u8PIN3  3
		#define DIO_u8PIN4  4
		#define DIO_u8PIN5  5
		#define DIO_u8PIN6  6
		#define DIO_u8PIN7  7

		#define DIO_u8PIN_OUTPUT 1
		#define DIO_u8PIN_INPUT 0

		#define DIO_u8PIN_HIGH 1
		#define DIO_u8PIN_LOW 0


#endif /* DIO_H_ */
