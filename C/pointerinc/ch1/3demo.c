#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
int main(void)
{
	signed char s_ch=-1;
	
	char c;
	while((c=getchar())!='\n')
	{
		putchar(c); 
		s_ch+=c;
	}
	printf("%d",s_ch);
	return 0;
} 
