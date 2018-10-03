/*
 * LED_Blink.c
 *
 * Created: 02-10-2018 10:01:20
 *  Author: Kumar
 */ 


#include <avr/io.h>		//Header file for basic Input/Output functions
#include <util/delay.h>		//Header file for time delay in miliSeconds
int main(void)			// Main Function
{
	DDRB = 0b00001111;	// Set PORT B pin B3, B2, B1 and B0 as OUTPUT
    while(1)			// Infinite Loop
    {
     PORTB = 0b00001111;// Set LED on B3, B2, B1, B0 as HIGH.
	 _delay_ms(1000);	// 1000 miliSeconds or 1 Second delay.
     PORTB = 0b00000000;// Set LED on B3, B2, B1, B0 as LOW.
	 _delay_ms(1000);	// 1000 miliSeconds or 1 Second delay.
	}
}