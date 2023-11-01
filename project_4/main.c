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
u8 seg_cath[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
CLR_BIT(DDRA,DIO_u8PIN0);  // sw1 i/p
CLR_BIT(DDRA,DIO_u8PIN1);  // sw2 i/p
PORTA=0;                   //sw1,sw2 off
DDRB=0xff;                 // 7segment o/p
PORTB=0;                   // 7segment off
u8 count=0;
while(1){
	if(GET_BIT(PINA,DIO_u8PIN0)==1&&GET_BIT(PINA,DIO_u8PIN1)!=1){
	   while(GET_BIT(PINA,DIO_u8PIN0)==1);
		if(count<9&&count>=0)
		{
		   count++;
		   PORTB=seg_cath[count];
		}
	}
	else if(GET_BIT(PINA,DIO_u8PIN1)==1&&GET_BIT(PINA,DIO_u8PIN0)!=1){
		while(GET_BIT(PINA,DIO_u8PIN1)==1);
		 if(count>0&&count<=9)
		 {
		count--;
		PORTB=seg_cath[count];
		 }
	}
}
	return(0);
}

