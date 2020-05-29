/*
 * DIO_HW.h
 *
 * Created: 5/29/2020 2:32:02 PM
 *  Author: Lamees
 */ 

#include "STD_TYPES.h"

#ifndef DIO_HW_H_
#define DIO_HW_H_


#define PINA_REG       *((volatile const uint8*)0x39)
#define DDRA_REG       *((volatile uint8*)0x3A)
#define PORTA_REG      *((volatile uint8*)0x3B) 

#define PINB_REG       *((volatile const uint8*)0x36)
#define DDRB_REG       *((volatile uint8*)0x37)
#define PORTB_REG      *((volatile uint8*)0x38)


#define PINC_REG       *((volatile const uint8*)0x33)
#define DDRC_REG       *((volatile uint8*)0x34)
#define PORTC_REG      *((volatile uint8*)0x35)

#define PIND_REG       *((volatile const uint8*)0x30)
#define DDRD_REG       *((volatile uint8*)0x31)
#define PORTD_REG      *((volatile uint8*)0x32)



#endif /* DIO_HW_H_ */