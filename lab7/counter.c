/***************Seven Segments***************/
/***************Connections******************/
/**********		SS data --- PORT 0	    ******/
/**********		SS control --- PORT 1/2	******/
#include<reg51.h>
char arr[10]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};
void delay(void);
void main(void)
{
	int i,j,k,l,m;	
	for(l=0;l<10;l++)
	{
		for(k=0;k<10;k++)
		{
			for(j=0;j<10;j++)
			{
				for(i=0;i<10;i++)
				{
					for(m=0;m<50;m++)
					{
					P2=0x01;
					P0=arr[i];
					
					delay();
					P2=0x02;
					P0=arr[j];
					delay();
					P2=0x04;
					P0=arr[k];
					
					delay();
					P2=0x08;
					P0=arr[l];
					delay();		   
					}
				}
			

			}
		
		}
	}
}
void delay(void)
{
	int f;
	for(f=0;f<50;f++);
}
