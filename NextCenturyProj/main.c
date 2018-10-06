/*
 * NextCenturyProj.c
 *
 * Created: 10/5/2018 8:31:20 PM
 * Author : awh
 */ 


#include "sam.h"
#include "led.h"
#include "button.h"
#include "uart.h"

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

	/* Initialize the Button */
	BTN_Init();

	/* Initialize the UART */
	UART_Init();

	/* Initialize the LED */
	LED_Init();

    /* Replace with your application code */
    while (1) 
    {

    }
}
