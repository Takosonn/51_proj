#include <REGX52.H>
#include "Delay.h"

unsigned char key()
{
		unsigned char keynumber=0;
		
		if(P3_1==0){Delay(30);while(P3_1==0);Delay(20);keynumber=1;}
    if(P3_0==0){Delay(30);while(P3_0==0);Delay(20);keynumber=2;}
    if(P3_2==0){Delay(30);while(P3_2==0);Delay(20);keynumber=3;}
    if(P3_3==0){Delay(30);while(P3_3==0);Delay(20);keynumber=4;}

	
		return keynumber;

}