/*
 * DIO.c
 *
 * Created: 5/29/2020 2:50:38 PM
 *  Author: Lamees
 */ 
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_HW.h"
#include "DIO_Types.h"
#include "DIO.h"

void writechannel(Dio_channelType channelId, STD_LevelType level) {
	
    // port ? 
	uint8 portx=channelId/8;
	
	Dio_channelType pos=channelId % 8;
	switch(portx) {
		case 0: 
		if(level==STD_HIGH)
		SET_BIT(PORTA_REG,pos);
		else 
		CLEAR_BIT(PORTA_REG,pos);
		break;
		
		case 1:
		if(level==STD_HIGH)
		SET_BIT(PORTB_REG,pos);
		else
		CLEAR_BIT(PORTB_REG,pos);
		break;
		
		case 2:
		if(level==STD_HIGH)
		SET_BIT(PORTC_REG,pos);
		else
		CLEAR_BIT(PORTC_REG,pos);
		break;
		
		case 3:
		if(level==STD_HIGH)
		SET_BIT(PORTD_REG,pos);
		else
		CLEAR_BIT(PORTD_REG,pos);
		break;		
	
	  default:
	  break;
	
	}
	
	
	
	
}
