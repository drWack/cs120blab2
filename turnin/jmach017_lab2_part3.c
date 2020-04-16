#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char cntavail = 0;
while(1) {
	cntavail = (PINA&0x01) + ((PINA>>1)&0x01) +((PINA>>2)&0x01) + ((PINA>>3)&0x01);
	PORTB = 4-cntavail;
	PORTC = cntavail;
	if(cntavail==4)
	{	
	PORTC = PORTC | 0X80;	
	}
	else{
	PORTC = PORTC& 0x0F;
	}
}
	return 0;

}
