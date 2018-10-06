/*
 * uart.h
 *
 * Created: 10/6/2018 12:23:11 AM
 *  Author: awh
 */ 


#ifndef UART_H_
#define UART_H_

#include "types.h"

void UART_Init(void);

void UART_SendString(U8 *str);


#endif /* UART_H_ */