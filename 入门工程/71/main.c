#include <REGX52.H>
#include "timer0.h"
#include <INTRINS.h>
#include <key.h>
unsigned char LEDmode,keynumber;

void main()
{
	P2=0xFE;
	timer0init();
  while(1)
	{
		keynumber=key();
    if(keynumber)
		{
			if(keynumber==1)
			{
				LEDmode++;
			  if(LEDmode>=2)LEDmode=0;
			}
		}			
	}
}



void timer0_routine() interrupt 1
{
	static unsigned int T0count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0count++;
	if(T0count>=500)
	{
		T0count=0;
	  if(LEDmode==0)
			P2=_crol_(P2,1);
		if(LEDmode==1)
			P2=_cror_(P2,1);
	}
}