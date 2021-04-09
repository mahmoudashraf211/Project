/*
 * Uart_Config.h
 *
 * Created: 4/6/2021 5:09:09 PM
 *  Author: 20111
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

#include "CPU_CONFIG.h"

#define FRQ  		160000
#define BAUDRATE 	96

typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_Status;





#endif /* UART_CONFIG_H_ */