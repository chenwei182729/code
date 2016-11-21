#if 0
搞清楚字符串变量、常量 
#enfif
//#include <stdio.h>
#define NULL 0
#define NUL '\0' 
#define TRUE 1
#define FALSE 0 
//比较字符串，不成功返回NULL 
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
