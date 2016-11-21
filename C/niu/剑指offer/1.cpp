#include<iostream>
#include<cstdio> 
int main(void)
{
	char *str="hello world";
	int length = 11;
	for(int i=0;i < length; i++)
	{
		if(str[i] ==  ' ')
			printf("%%20");
		else 
			printf("%c",str[i]);
	}
	return 0;	
} 
