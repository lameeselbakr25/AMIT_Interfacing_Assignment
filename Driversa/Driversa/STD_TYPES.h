/*
 * STD_TYPES.h
 *
 * Created: 5/29/2020 2:31:39 PM
 *  Author: Lamees
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

// unsigned
typedef unsigned char uint8;
typedef unsigned int  uint16;
typedef unsigned long int uint32;
typedef  float float16;
typedef  double float32;


// signed 

typedef signed char sint8;
typedef signed int  sint16;
typedef signed long int sint32;

typedef enum {
	STD_LOW,
	STD_HIGH
	}STD_LevelType;


#endif /* STD_TYPES_H_ */