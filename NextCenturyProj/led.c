/*
 * led.c
 *
 * Created: 10/6/2018 12:15:11 AM
 *  Author: awh
 */ 


 #include "led.h"
 #include "board_SAML22.h"
 #include "uart.h"
 #include <stdio.h>


 static U8 uartStr[30];
 static U32 ledInterval = LED_MS_500;
 static BOOL ledOn = FALSE;

 /* Initialize LED0 */
 void LED_Init(void)
{
	/* Set as output */

	/* Define interrupt using TC0 (Timer Counter) perhaps */

	/* Enable TC0 */

	/* Specify LED port as output so we can write values to it */

	/* Turn on LED by writing value to port */
}

/* Handle the interrupt when triggered. The interrupt will either trigger every
 * 500 ms, or 2000 ms. In this function we will alternate the LED between on
 * and off.
 */
void ledInterruptHandler(void)
{
	/* Write to the port corresponding to the LED to turn on/off by writing
	 * value of ledOn
	 */

	 /* Update ledOn */
	 ledOn = !ledOn;
}


/* Stop the interrupt, set the new value for the timer, start the interrupt */
void LED_UpdateInterrupt(void)
{
	/* Stop TC0 */

	/* Set new led interval */
	if(ledInterval == LED_MS_500){
		ledInterval = LED_MS_2000;
	} else{
		ledInterval = LED_MS_500;
	}

	/* Send update over uart */
	sprintf((char*)uartStr, UART_STRING, (int)ledInterval);
	UART_SendString(uartStr);

	/* Start TC0 with the new interval */
}