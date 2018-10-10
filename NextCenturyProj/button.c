/*
 * button.c
 *
 * Created: 10/6/2018 12:20:33 AM
 *  Author: awh
 */ 

 #include "button.h"
 #include "led.h"


 /* Initialize the Button */
 void BTN_Init(void)
 {
	 /* Set button as input */

	 /* Register interrupt for when button is pressed */
 }

/* Handle the interrupt when triggered by a button press.
 * May need to debounce the button by implementing a counter.
 * When a button is pressed we reset the interrupt for the
 * LED to fire with a different interval.
 */
void btnInterruptHandler(void)
{
	LED_UpdateInterrupt();
}