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
	for(u8 i=0;i<8;i++){
	SET_BIT(DDRA,i);
	}
while(1){
	for(u8 i=0;i<8;i++){
	SET_BIT(PORTA,i);
	_delay_ms(500);
	}
	for(u8 i=0;i<8;i++){
	CLR_BIT(PORTA,i);
	_delay_ms(500);
	}
       }
	return(0);
}

