/*
 * main.c
 *
 *  Created on: Apr 13, 2023
 *      Author: Abdelrhman Mohamed
 */


#include <util/delay.h>
#include "DIO.h"
#include "BIT_MATH.h"

int main(void){
SET_BIT(DDRA,DIO_u8PIN0);  // led1 o/p
SET_BIT(DDRA,DIO_u8PIN1);  // led2 o/p
CLR_BIT(DDRB,DIO_u8PIN0);  // sw1 i/p
CLR_BIT(DDRB,DIO_u8PIN1);  // sw2 i/p
CLR_BIT(DDRB,DIO_u8PIN2);  // sw3 i/p
PORTB=0b00000111;          //sw1,sw2,sw3 pull up
PORTA=0;                   // led1,led2 off
while(1){
	if(GET_BIT(PINB,DIO_u8PIN0)==0&&GET_BIT(PINB,DIO_u8PIN1)!=0&&GET_BIT(PINB,DIO_u8PIN2)!=0){
		PORTA=0b00000001;
	}
	else if(GET_BIT(PINB,DIO_u8PIN1)==0&&GET_BIT(PINB,DIO_u8PIN0)!=0&&GET_BIT(PINB,DIO_u8PIN2)!=0){
		PORTA=0b00000010;
	}
	else if(GET_BIT(PINB,DIO_u8PIN2)==0&&GET_BIT(PINB,DIO_u8PIN0)!=0&&GET_BIT(PINB,DIO_u8PIN1)!=0){
		PORTA=0b00000011;
	}
	else{
		PORTA=0;
	}
}
	return(0);
}

