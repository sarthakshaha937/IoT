/*
 * UART.c
 *
 * Created: 03-10-2018 09:48:39
 *  Author: Kumar
 */ 


#include <avr/io.h>		//Header file for basic Input/Output functions
#include <util/delay.h>	//Header file for time delay in miliSeconds
int main(void)			// Main Function
{	
void UART_init(){		//UART initialization function
	UBRRL = 103;		// baud rate when dividing with 9600
	UCSRB = (1<<RXEN)|(1<<TXEN); //Enable Receiver and Transmitter
	UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);   // 011 is for 8bit
}

unsigned int UART_READ_RECIEVE(){ //UART Read/Receive Function
	while(!(UCSRA & (1<<RXC)));	  //Wait till receiving 
	return UDR;					  //After receiving return UDR 
}

void UART_WRITE_TRANSMIT(char data){ //UART Write/Transmit Function
	UDR = data;
	while(!(UCSRA & (1<<UDRE)));	 //Wait till transmission
}
void main(){						 //Main Function
	char data;
	UART_init();					 //Initialization of UART function
	while(1){						 //Infinite Loop
		data = UART_READ_RECIEVE();  //Transmit data from PC to MicroController
		_delay_ms(10000);
		UART_WRITE_TRANSMIT('a');	 //Transmit a single character
		_delay_ms(10000);			 //Time delay for Proper conversion of data while Rx/Tx
		UART_WRITE_TRANSMIT('b');
		_delay_ms(10000);
		UART_WRITE_TRANSMIT('e');
		_delay_ms(10000);
		UART_WRITE_TRANSMIT('r');
		_delay_ms(10000);
		UART_WRITE_TRANSMIT('t');
		_delay_ms(10000);
		UART_WRITE_TRANSMIT('e');
		_delay_ms(10000);
	}
}
}