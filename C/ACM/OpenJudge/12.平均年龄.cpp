#include<stdio.h>
int main(void)
{
	int sum = 0,N,i,x;
	scanf("%d",&N);
	for(i = 0;i < N;i++)
	{
		scanf("%d",&x);
		sum += x;
	}
	printf("%.2f\n",sum*1.0/N);
	
	return 0;
}
