/*
 * Driversa.c
 *
 * Created: 5/29/2020 2:29:22 PM
 * Author : Lamees
 */ 

#define F_CPU 16000000

#include <avr/io.h>

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_HW.h"
#include "DIO_Types.h"
#include "DIO.h"

#include "util/delay.h"
int main(void)
{
    /* Replace with your application code */
    DDRC|=(1<<2);
    while (1) 
    {
		writechannel(Dio_channel_C2,STD_HIGH);
		_delay_ms(1000);
		writechannel(Dio_channel_C2,STD_LOW);
		_delay_ms(1000);
				
		
    }
}

