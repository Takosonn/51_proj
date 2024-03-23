#include <REGX52.H>

unsigned int count;      
unsigned int angle=20;   

sbit pwm =P1^0 ;     

void Timer0_Init(void)		//100΢��@11.0592MHz
{
	TMOD |= 0x11;		//���ö�ʱ��ģʽ
	TL0 = 0xA4;		  //���ö�ʱ��ֵ
	TH0 = 0xFF;		  //���ö�ʱ��ֵ
	TF0  = 0;		    //clear TF0
	TR0  = 1;		    //timer start
	ET0  = 1;       //allow to interrupt
	EA   = 1;       //open all timers
	PT0  = 1;
}


void Timer0_continue() interrupt 1
{
	TL0 = 0xA4;		
	TH0 = 0xFF;		
	if(count < angle)              
      pwm=1;                 
    else
      pwm=0;                 
    count=(count+1);         
    count=count%160;    
}

void control2()
{	
	angle=12;
}
void control1()
{	
	angle=11;
}
void control3()
{	
	angle=13;
}