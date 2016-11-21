/*
编写函数reverse_string，它的原型如下：
void reverse_string(char *string); 
函数把参数字符串中的字符反向排列。
请使用指针而不是数组下标，不要使用任何C函数库中用于操纵字符串的函数。
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void reverse_string(char *string);
void reverse_string(char *str)
{
	char temp;
	char *last = NULL;
	char *in = str;
	for(last = str; *last != '\0'; last++);
	last--;
	
	while(str < last)
	{
		temp = *str;
		*(str++) = *last;
		*(last--) = temp;
	}
}
int 
main(void)
{
	char input[] = "ABCDEFG";
	reverse_string(input);
	printf("%s\n", input);
	return 0;
}
