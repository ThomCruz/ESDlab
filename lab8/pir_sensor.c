#include <reg51.h>

sbit detect=P0^0;	/* Read PIR sensor's data on this pin */
sbit LED=P1^0;				/* Connect LED to the PORT1.0 pin */


void MSdelay(unsigned int val)
{
     unsigned int i,j;
        for(i=0;i<=val;i++)
            for(j=0;j<112;j++);	/* Delay of 1 ms for 11.0592MHz Frequency */
}

void main(void) 
{
	P1=0;			/* Initially LED turned OFF*/
	MSdelay(3000);	/* Power-on delay for PIR */
	while(1)
	{
		if(detect==1)  /* Check for human motion */
		LED = 0;	/* LED turn OFF for No motion */
		else
		LED = 1;	/* LED turn ON if motion is detected */
	}
}

