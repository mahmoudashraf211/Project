/*
 * Spi_Config.h
 *
 * Created: 4/6/2021 5:10:49 PM
 *  Author: 20111
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIG.h"

#define MASTER 1
#define SLAVE  0

#define MOSI 5
#define MISO 6
#define CLK  7
#define SS   4

#define SPI_PORT DDRB

#define SPI_MODE MASTER

typedef enum
{
	SPI_NOK= 0 ,
	SPI_OK= 1
}SPI_Status;

#endif /* SPI_CONFIG_H_ */