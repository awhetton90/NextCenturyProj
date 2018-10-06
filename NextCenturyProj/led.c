/*
 * led.c
 *
 * Created: 10/6/2018 12:15:11 AM
 *  Author: awh
 */ 


 #include "led.h"

 U32 ledInterval = LED_MS_500;

 /* Initialize LED0 */
 void LED_Init(void)
{
	/* Set as output */

	/* Define interrupt and timer */

	/* Startup interrupt and timer */

	/* Turn on LED */
}

/* Handle the interrupt when triggered. The interrupt will either trigger every
 * 500 ms, or 2000 ms. In this function we will alternate the LED between on
 * and off.
 */
void ledInterruptHandler(void)
{

}
