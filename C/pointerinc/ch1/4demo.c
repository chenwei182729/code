#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1000
int main(void)
{
	int pre_len=-1,now_len=-1;
	char input[MAX_SIZE],storage[MAX_SIZE];
	while(gets(input)!=NULL)
	{
		now_len=strlen(input);
		if(pre_len<now_len)
		{
			pre_len=now_len;
			strcpy(storage,input);
		}
	}
	printf("%s",storage);
	return 0;
} 
