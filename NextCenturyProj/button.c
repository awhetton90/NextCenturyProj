/*
 * button.c
 *
 * Created: 10/6/2018 12:20:33 AM
 *  Author: awh
 */ 

 #include "button.h"

 extern U32 ledInterval;

 /* Initialize the Button */
 void BTN_Init(void)
 {
	 /* Set button as input */

	 /* Register interrupt for when button is pressed */
 }

/* Handle the interrupt when triggered by a button press.
 * May need to debounce the button. When a button is pressed
 * we reset the interrupt for the LED to fire with a different
 * interval.
 */
void btnInterruptHandler(void)
{
	if(ledInterval == LED_MS_500){
		ledInterval = LED_MS_2000;
	} else{
		ledInterval = LED_MS_500;
	}

	/* Reset the interrupts for LED */
}