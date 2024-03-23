#include <REGX52.H>
#include "delay.h"

	


void UART_Init()//4800bps@12.000MHz
{
   SCON=0x40;
   PCON |= 0x80;	
	 TMOD &= 0x0F;		//设置定时器模式
	 TMOD |= 0x20;		//设置定时器模式
   TL1 = 0xF3;		//设定定时初值
	 TH1 = 0xF3;		//设定定时器重装值
	 ET1 = 0;		//禁止定时器1中断
	 TR1 = 1;		//启动定时器1
	
}


void UART_SendByte(unsigned char Byte)
{
	SBUF=Byte;
	while(TI==0);
	TI=0;
}