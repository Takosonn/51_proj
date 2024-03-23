#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1)
	{
	P2=0XFE;//1111 1110
	Delay500ms();	
	P2=0XFD;//1111 1101
	Delay500ms();	
	P2=0XFB;//1111 1011
	Delay500ms();	
	P2=0XF7;//1111 0111
	Delay500ms();	
	P2=0XEF;//1110 1111
	Delay500ms();	
	P2=0XDF;//1101 1111
	Delay500ms();	
	P2=0XBF;//1011 1111
	Delay500ms();	
	P2=0X7F;//0111 1111
	Delay500ms();	

	}
}	