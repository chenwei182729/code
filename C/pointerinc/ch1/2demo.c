#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main(void)
{
	int count=0;
	char input[MAX_SIZE];
	while(gets(input)!=NULL)
	{
		printf("%d:",count++);
		puts(input);
	}
	return 0;
} 
