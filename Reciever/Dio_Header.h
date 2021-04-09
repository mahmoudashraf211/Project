/*
 * Dio_Header.h
 *
 * Created: 4/6/2021 4:12:34 PM
 *  Author: 20111
 */ 


#ifndef DIO_HEADER_H_
#define DIO_HEADER_H_
#include "DIO_CONFIG.h"
void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);
void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t status);
void DIO_TogglPin(Uint8t port, Uint8t pin);
Uint8t DIO_ReadPin_Value(Uint8t port, Uint8t pin);
/*Port state*/
void DIO_SetPort_Direction(Uint8t port, Uint8t direction);
void DIO_SetPort_Value(Uint8t port, Uint8t status);
void DIO_TogglPort(Uint8t port);
Uint8t DIO_ReadPort_Value(Uint8t port);
/*Activate internal pull up*/
void DIO_SetPullUp(Uint8t port, Uint8t pin);



#endif /* DIO_HEADER_H_ */