/*
��д����reverse_string������ԭ�����£�
void reverse_string(char *string); 
�����Ѳ����ַ����е��ַ��������С�
��ʹ��ָ������������±꣬��Ҫʹ���κ�C�����������ڲ����ַ����ĺ�����
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
