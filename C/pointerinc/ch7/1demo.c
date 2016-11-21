//7.11 ¶òÃÜ¶àÏîÊ½ 
#include<stdio.h>
int hermite(int n,int x);
int main( void )
{
	int x;
	x=hermit(3,2);
	printf("x=%d\n",x);
	return 0;
} 
int hermite(int n,int x)
{
	if(n<0) return 1;
	else if(1==n) return 2*x;
	else if(n>=2) 
	{
		return 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);
	}
}
