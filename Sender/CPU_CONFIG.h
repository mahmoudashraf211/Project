/*
 * CPU_CONFIG.h
 *
 * Created: 4/6/2021 4:10:29 PM
 *  Author: 20111
 */ 


#ifndef CPU_CONFIG_H_
#define CPU_CONFIG_H_
#undef F_CPU                 /*Neglect internal oscillator*/
#define F_CPU 16000000       /*Define external oscillator*/
#include <avr/io.h>          /*Predefined Library - Define input and output*/
#include <util/delay.h>      /*Predefined Library - Define delay function*/
#include <avr/interrupt.h>   /*Predefined Library - Define interrupts vectors*/
#include "BIT_MATH.h"        /*User Defined Library - Bit functions*/
#include "STD.h"       /*User Defined Library - Standard Types*/
#include "Dio_Header.h"




#endif /* CPU_CONFIG_H_ */