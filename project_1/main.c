/*
 * lab1.c
 *
 * Created: 4/12/2023 10:56:21 PM
 * Author : Abdelrhman Mohamed
 */

#include <util/delay.h>
#include "DIO.h"
#include "BIT_MATH.h"

int main(void){

	SET_BIT(DDRA,DIO_u8PIN0);
while(1){
	SET_BIT(PORTA,DIO_u8PIN0);
	_delay_ms(1000);
	CLR_BIT(PORTA,DIO_u8PIN0);
	_delay_ms(1000);
       }
	return(0);
}

