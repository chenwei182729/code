#if 0
������ַ������������� 
#enfif
//#include <stdio.h>
#define NULL 0
#define NUL '\0' 
#define TRUE 1
#define FALSE 0 
//�Ƚ��ַ��������ɹ�����NULL 
char 
*match ( char *str,char *want )
{
	while (*want != NUL)
	{
		if(*str++ != *want++)
			return NULL;
	}
	return str;
}
int 
del_substr ( char *str,char const *substr )
{
	char *next=NULL;
	while (*str != NUL)
	{
		next=match(str,substr);
		if(next != NULL)
		{
			break;
		}
		str++;		
	} 
	if(*str == NUL)
		return FALSE;
	while(*str++ = *next++);
	return TRUE;
}
int 
main(void)
{
	char ch1[]="ABCDEFG",*ch2="CDE";
	int flag=del_substr(ch1,ch2);
	
	int i=0;
	while(ch1[i]!=NUL)
	{
		printf("%c",ch1[i++]);
	}	
	return 0;
}
