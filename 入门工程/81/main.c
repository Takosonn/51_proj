#include <REGX52.H>
#include "delay.h"
#include "UART.h"
	
unsigned char sec;


	
void main()

{
	
	UART_Init();
	while(1)
	{
		
		UART_SendByte(sec);
		sec++;
		delay(1000);
		
	}
}
	