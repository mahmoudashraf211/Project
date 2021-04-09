/*
 * Spi_Header.h
 *
 * Created: 4/6/2021 5:11:00 PM
 *  Author: 20111
 */ 


#ifndef SPI_HEADER_H_
#define SPI_HEADER_H_

#include "Spi_Config.h"


void SPI_Init(void);
void SPI_Transmit(Uint8t data);
Uint8t SPI_Receive(void);



#endif /* SPI_HEADER_H_ */