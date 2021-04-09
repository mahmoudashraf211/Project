/*
 * GccApplication1.c
 *
 * Created: 4/6/2021 5:25:34 PM
 * Author : 20111
 */ 

#include "Uart_Header.h"
#include "Spi_Header.h"
#include "Led_Header.h"

int main(void)
{
	UART_Init();
	SPI_Init();
	LED0_Init();
	LED1_Init();
	
	uint8_t Data_Recieved=0; 
	
		while (1)
		{
			Data_Recieved = SPI_Receive();
			switch(Data_Recieved){
				case '1':
				 LED0_ON();
				 break;
				case '2':
				 LED1_ON();
				 break;
				case '3':
				 LED0_OFF();
				 break;
				case '4':
				 LED1_OFF();
				 break;
			} 
			Data_Recieved=0;
    }
}

