#include <REGX52.H>
#include "delay.h"
#include "LCD1602.h"
#include "timer0.h"

unsigned char sec,min,hour;

void main()

{
	LCD_Init();
	timer0init();
	LCD_ShowString(1,1,"CLOCK:");
	LCD_ShowString(2,1,"  :  :");
	while(1)
	{
		LCD_ShowNum(2,1,hour,2);
		LCD_ShowNum(2,4,min,2);
		LCD_ShowNum(2,7,sec,2);
	}
}
	
void timer0routine() interrupt 1
{
	static unsigned int T0count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0count++;
	if(T0count>=1000)
	{
		T0count=0;	
		sec++;
		if(sec>=60)
		{
		sec=0;
			min++;
			if(min>=60)
			{
					min=0;
					hour++;
				  if(hour>=24)
						hour=0;
			}
		}
	}
}
		