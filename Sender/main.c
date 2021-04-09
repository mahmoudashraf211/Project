/*
 * GccApplication1.c
 *
 * Created: 4/6/2021 4:09:20 PM
 * Author : 20111
 */ 


#include "Uart_Header.h"
#include "Spi_Header.h"

int main(void)
{
	
    UART_Init();
    SPI_Init();

    uint8_t Data_Sent=0;
    while (1) 
    {
		Data_Sent = UART_Receive();
		switch(Data_Sent){
			case'1':
			SPI_Transmit('1');
			break;
			case'2':
			SPI_Transmit('2');
			break;
			case'3':
			SPI_Transmit('3');
			break;
			case'4':
			SPI_Transmit('4');
			break;
		}
		Data_Sent=0;
    }
}

