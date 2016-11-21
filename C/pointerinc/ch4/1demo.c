#include<stdio.h>
int main( void )
{
	double d_pre=1,d_now=0;
	int n;
	scanf("%d",&n);
	while(1)
	{
		d_now=(d_pre+n/d_pre)/2.0;	
		if(d_pre==d_now)
			break;
		d_pre=d_now;
	} 
	printf("sqrt(%d)=%lf\n",n,d_now);
	return 0;
}

