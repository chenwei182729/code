#include<stdio.h>
int main(void)
{
	int a1,an,d,n;
	scanf("%d%d%d",&a1,&an,&d);
	n=(an-a1)/d+1;
	printf("%d\n",a1*n+n*(n-1)*d/2);
	return 0;	
} 
