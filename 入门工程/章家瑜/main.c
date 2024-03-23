#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Buzzer.h"
#include "key.h"


unsigned char keynum;
unsigned int i;


void main()
	{
	{LCD_Init();
	LCD_ShowString(1,1,"MODE1");
	LCD_ShowString(2,1,"MODE2");
	}
	
	
	
	
while(1)
{
	
	keynum=key();
	if(keynum==1)
	{
		LCD_ShowString(1,11,"SELECT");
		LCD_ShowString(2,11,"      ");
		LCD_ShowString(1,7,"    ");
		LCD_ShowString(2,7,"    ");
		i=1;
		P2_0=1;
	}
	else if(keynum==2)
	{
		LCD_ShowString(1,7,"    ");
		LCD_ShowString(2,7,"    ");
		LCD_ShowString(2,11,"SELECT");
		LCD_ShowString(1,11,"      ");
		i=2;
		P2_0=1;
	}
	else if(keynum==3)
	{
		  if(i==1)
		{
			P2_0=0;
			LCD_ShowString(2,11,"      ");
		  LCD_ShowString(1,11,"      ");
			LCD_ShowString(1,7,"LED1");
			LCD_ShowString(2,7,"    ");
		}
			else if(i==2)
		{
			P2_0=1;
			LCD_ShowString(2,11,"      ");
		  LCD_ShowString(1,11,"      ");
			LCD_ShowString(2,7,"BEEP");
			LCD_ShowString(1,7,"    ");
			Delay(300);
			Buzzer_Time(300);
		}
	}
}
}