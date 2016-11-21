#include<stdio.h>
int main(void)
{
	int x=100;
	printf("*dec = %d ; octal = %o ;hex = %x\n",x,x,x);
	printf("*dec = %d ; octal = %#o ;hex = %#x\n",x,x,x);
	
	printf("Only %d%% of Sally's gribles.\n",x);
	return 0;
} 
