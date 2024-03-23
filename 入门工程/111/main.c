#include <REGX52.H>
#include "delay.h"
#include "key.h"
#include "nixie.h"
#include "Buzzer.h"


unsigned char KeyNum;
unsigned int i;

void main()
{
	nixie(1,0);			
	while(1)
				{
					KeyNum=key();
					if(KeyNum)
						{
							Buzzer_Time(100);
							nixie(1,KeyNum);
					  }
					
				}
}	