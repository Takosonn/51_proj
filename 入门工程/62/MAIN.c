#include <REGX52.H>
#include "delay.h"
#include "LCD1602.h"
#include "matrixkey.h"

unsigned char keynumber;
unsigned int password,count;

void main()
{
  LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
		 {
		 keynumber=matrixkey();
		 if(keynumber){
			 if(keynumber<=10)				 //if press S1~S10,pu in the key
			 
			 {
				 if(count<5)       //terns<4
					 {
					 password*=10;     //left one type
					 password+=keynumber%10;    //get one type of password}
				 }
				 count++;      //terns+1
			 }
			 LCD_ShowNum(2,1,password,5);
		 }
		   if(keynumber==11)    //if press S11,then confirm
			 {
			     if(password==12345)
					 {
						 LCD_ShowString(1,9,":RIGHT");    // if the password is right
					   password=0;
						 count=0;
						 LCD_ShowNum(2,1,password,5);
					 }
					 else
						 {
						 LCD_ShowString(1,9,":WRONG");     //if the password is wrong					   
					   password=0;
						 count=0;
						 LCD_ShowNum(2,1,password,5);
						 }
			 }
				if(keynumber==12)
				{
				 password=0;
						 count=0;
						 LCD_ShowNum(2,1,password,5);
				}
		 }
		

}