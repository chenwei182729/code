#include<stdio.h>
#define BIT 31
unsigned int reverse_bits(unsigned int value)
{
	unsigned sum=0,tmp=0;
	int bit=BIT;
	while( bit ) 
	{
		if(value&1)
		{
			tmp=1<<bit;
			printf("%u ",tmp);
			sum+=tmp; 
		}	
		bit--;
		value>>=1;
	}
	return sum;	
} 
int
main ()
{
	unsigned value=25;
	printf("%u\n",reverse_bits(value));
	return 0;
} 
