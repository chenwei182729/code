#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(void)
{
	int ivar1,ivar2;
	while(~scanf("%d%d",&ivar1,&ivar2)) 
	{
		printf("%d\n",gcd(ivar1,ivar2));
	}
	return 0;
}
