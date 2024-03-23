#include <REGX52.H>
#include "delay.h"
#include "LCD1602.h"
#include "matrixkey.h"

unsigned char keynumber;


void main()
{
  LCD_Init();
	LCD_ShowString(1,1,"matrixkey:");
	while(1)
		 {
		 keynumber=matrixkey();
		 if(keynumber){
			 LCD_ShowNum(2,1,keynumber,2);
		 }
		 }
		

}