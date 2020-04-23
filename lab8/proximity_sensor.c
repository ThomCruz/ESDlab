#include<reg51.h>
//using Relay Buzzer
 ////relay buzzer------Port P0//////
sbit a = P2^0;  //for proximity sensor    a will be 1 when it sense metal
sbit a1 = P0^0;//for relay buzzer
void delay()
{
	int j;
	for(j=0;j<20000;j++);
}
void main()
{
	char k;
	P2=0X0;
	 P0=0X0;
	while(1)
	{
		
		while(a==1)
		{

			P0=0x01;
			delay();
			for(k=0;k<3;k++)
			{
				P0=P0<<1;
				delay();
			}
		}
	}
}


//Using Led 
/*
#include<regx51.h>
sbit a = P2^0;
sbit a1 = P0^0;  // led
void main()
{
	P2=0X0;
	 P0=0X0;
	while(1)
	{
		if(a==1)
			a1=1;
		if(a==0)
			a1=0;
	}
}
*/


