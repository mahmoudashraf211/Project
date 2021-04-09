/*
 * Led.c
 *
 * Created: 4/6/2021 4:11:43 PM
 *  Author: 20111
 */ 

#include "Led_Header.h"
void LED0_Init(void)
{
	/*Define direction*/
	//SET_BIT(LED0_DDR, LED0_PIN);
	//SET_BIT(DDRC, 2);
	//DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(LED0_PORT, LED0_PIN, LED0_OUTPUT);
}
void LED0_ON(void)
{
	/*Enable LED0*/
	//SET_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_HIGH);
}
void LED0_OFF(void)
{
	/*Disable LED0*/
	//CLR_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED0_LOW);
}
//LED1
void LED1_Init(void)
{
	DIO_SetPin_Direction(LED1_PORT, LED1_PIN, LED1_OUTPUT);
}
void LED1_ON(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPin_Value(LED1_PORT, LED1_PIN, LED1_LOW);
}

