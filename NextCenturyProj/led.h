/*
 * led.h
 *
 * Created: 10/6/2018 12:14:58 AM
 *  Author: awh
 */ 


#ifndef LED_H_
#define LED_H_

#include "types.h"

#define LED_PIN			91
#define LED_PORT_MASK	(1UL << 27)

void LED_Init(void);

void ledInterruptHandler(void);




#endif /* LED_H_ */