#difine AAA

#ifdef AAA

bfoajifsjaoif

#endif





#include <REGX52.H>
void delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
  while(xms--){
	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);}
}

unsigned char nixietable[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

void nixie(unsigned char location,number)
{
	switch(location)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=nixietable[number];
}

void main()
{
	
	while(1)
		{
			nixie(1,1);
			delay(1);
			nixie(2,2);
			delay(1);
			nixie(3,3);
			delay(1);
		}

}