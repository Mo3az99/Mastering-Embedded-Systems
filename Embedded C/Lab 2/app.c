#include "uart.h"

unsigned char buffer [100] = "learn-in-depth: Moaaz";
unsigned char const buffer2 [100] = "learn-in-depth: Moaaz";
unsigned char const buffer3 [100] = "learn-in-depth: Moaaz";


void main(void){
	
	uart_send_String(buffer);
	
}