#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	if(x==1) return 0; 
	int n=sqrt(x),i;
	for(i=2;i<=n;i++)
	{
		if(x%i==0)
			return 0;//不是质数 
	}
	return 1;//是质数 
}
int main( void )
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(is_prime(i))
			printf("%d ",i);
	}
	return 0;
}

