//7.11 2 最大公约数 
#include<stdio.h>
int gcd(int m,int n);
int main( void )
{
	int x=12,y=18;
	printf("%d\n",gcd(x,y));
} 
int gcd(int m,int n)
{
	if(m%n==0) return n;
	else
	{
		int r=m%n;
		if(r>0) return gcd(n,r);
		else return 0;
	}
}
