/*
 * Relay.c
 *
 * Created: 02-10-2018 10:55:47
 *  Author: Kumar
 */ 


#include <avr/io.h>		//Header file for basic Input/Output functions
#include <util/delay.h> //Header file for time delay in miliSeconds

int main(void)			// Main Function
{
	DDRC = 0b00000011;  // Set PORT C pin C1 and C0 as OUTPUT
    while(1)			// Infinite Loop
    {
     PORTC = 0b00000011;// Set Relay HIGH on Pin C1 and C0.
	 _delay_ms(1000);   // 1000 miliSeconds or 1 Second delay.
	 PORTC = 0b00000000;// Set Relay LOW on Pin C1 and C0.
	 _delay_ms(1000);   // 1000 miliSeconds or 1 Second delay.
    }
}