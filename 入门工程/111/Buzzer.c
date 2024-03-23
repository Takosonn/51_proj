#include <REGX52.H>
#include "delay.h"
#include <INTRINS.H>

sbit Buzzer=P2^5;
void Buzzer_Delay500us()		//@12.000MHz
{
	unsigned char i;

	_nop_();
	i = 247;
	while (--i);
}


void Buzzer_Time(unsigned int ms)
{
	unsigned int i;
	for(i=0;i<ms*2;i++)
							{
								Buzzer=!Buzzer;
							  Buzzer_Delay500us();
							}
						}