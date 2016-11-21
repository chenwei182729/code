/*skip2.c跳过输入的头两个数*/ 
#include<stdio.h>
int main(void)
{
	int n;
	printf("Please enter three integers\n");
	scanf("%*d %*d %d",&n);
	printf("The last integer is %d\n",n);
	return 0;
} 
