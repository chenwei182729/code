#include<stdio.h>
int main(void)
{
	int x=0;
	x=increment(x);
	printf("increment x=%d\n",x);
	x=negate(x);
	printf("negate x=%d\n",x);
	return 0;
}
