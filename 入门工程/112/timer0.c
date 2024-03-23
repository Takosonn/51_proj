#include <REGX52.H>
// timer 1ms

void 	timer0_init(void)		//1毫秒@12.000MHz
{
	
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;		//设置定时器模式
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	ET0=1;
	EA=1;
	PT0=0;
}	

//void timer0routine() interrupt 1
//{
//	static unsigned int T0count;
//	TL0 = 0x18;		//设置定时初值
//	TH0 = 0xFC;		//设置定时初值
//	T0count++;
//	if(T0count>=1000)
//	{
//		T0count=0;	
//	}
//}

///*void timer0_init()
//{
//	TMOD=0X01;    //0000 0001
//	TMOD=TMOD&0XF0;  //refresh the low 4 type of TMOD and keep the high 4
//	TMOD=TMOD|0X01;  //make the lowest type of TMOD 1 and keep the high 4
//	TF0=0;
//	TR0=1;
//	TH0=64535/256;
//	TL0=64535%256;
//	ET0=1;
//	EA=1;
//	PT0=0;
//}*/
