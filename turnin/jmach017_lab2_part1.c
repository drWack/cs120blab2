#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
while(1) {
	if((PINA&0x01) ==0x01)
	{PORTB=0x01; }
	else
	{PORTB=0x00;}

	}
	return 0;

}
