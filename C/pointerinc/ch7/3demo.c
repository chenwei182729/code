//7.11 3 字符转换为整数 
#include<stdio.h>
int ascii_to_integer(char *str);
int main( void )
{
	char c_arr[]={"120"};
	printf("%d\n",ascii_to_integer(c_arr));
} 
int ascii_to_integer(char *str)
{
	int sum=0;
	for(;*str!=0;str++)
	{
		sum*=10;
		sum+=*str-'0'; 
	}
	return sum;
}
