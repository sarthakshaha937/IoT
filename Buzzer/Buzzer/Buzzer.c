/*
 * Buzzer.c
 *
 * Created: 02-10-2018 10:25:16
 *  Author: Kumar
 */ 


#include <avr/io.h>		//Header file for basic Input/Output functions
#include <util/delay.h>	//Header file for time delay in miliSeconds

int main(void)			// Main Function
{
	DDRD = 0b00000100;  //Set PORT D Pin D2 as OUTPUT
    while(1)			//Infinite Loop
	{
     PORTD = 0b00000100;//Set Buzzer on PORT D Pin D2 HIGH    
	 _delay_ms(1000);   //1000 miliSeconds or 1 Second delay
	 PORTD = 0b00000000;//Set Buzzer on PORT D pin D2 LOW
	 _delay_ms(1000);	//1000 miliSeconds or 1 Second delay
    }
}