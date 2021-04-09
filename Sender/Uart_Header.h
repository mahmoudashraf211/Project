/*
 * Uart_Header.h
 *
 * Created: 4/6/2021 5:09:24 PM
 *  Author: 20111
 */ 


#ifndef UART_HEADER_H_
#define UART_HEADER_H_

#include "Uart_Config.h"


void UART_Init(void);
void UART_Transmit(Uint8t data);
Uint8t UART_Receive(void);


#endif /* UART_HEADER_H_ */