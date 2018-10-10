/*
 * led.h
 *
 * Created: 10/6/2018 12:14:58 AM
 *  Author: awh
 */ 


#ifndef LED_H_
#define LED_H_

#include "types.h"

void LED_Init(void);

void ledInterruptHandler(void);

void LED_UpdateInterrupt(void);




#endif /* LED_H_ */