#include <avr/io.h>

int main(void){
	DDRB = 0xFF; // Configure port B's 8 pins as outputs
	PORTB = 0x00; // Initialize PORTB output to 0’s
	while(1){
		PORTB = 0x0F; // Writes port B's 8 pins with 00001111
	}
	return 1;
}
