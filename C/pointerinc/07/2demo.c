#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NULL 0
#define NUL '\0' 
//比较字符串是否相等 
int compare(char const *ch1,char const *ch2)
{
	int flag=1;
	while ((*ch1!='\0') && (*ch2!='\0'))
	{
		if (*ch1!=*ch2)
		{
			return 0;
		}
		ch1++;
		ch2++;
	}
	if ((*ch1!='\0') || (*ch2!='\0'))
		flag=0;	
		
	return flag;
}
//比较字符串是否相等 (第一个比第二个长)
int compare2(char const *ch1,char const *ch2)
{
	while (*ch2!='\0')
	{
		if (*ch1!=*ch2)
		{
			return 0;
		}
		ch1++;
		ch2++;
	}
	return 1;
}
//比较字符串是否相等 (第一个比第二个长)
char *match(char const *str,char const *want)
{
	while (*want++ != '\0')
	{
		if(*str++ != *want++)
			return NULL;
	}
	return str;
}
int del_substr(char *str,char const *substr)
{
	char *pstr,temp,*ppstr=str;
	int flag=0;
	while(*str!='\0')
	{
		pstr=str;	
		ppstr=match(pstr,substr);
		if(ppstr != NULL)
		{
			
		}
		str++;		
	} 
	pstr=str;
	if(flag==1)
	{
		while(*substr!='\0')
		{
			substr++;
			pstr++;
		}
		while(*pstr!='\0')
		{
			*str++=*pstr++;
		}
		*str='\0';
		return 1;
	}
	else
	{
		return 0;
	}
}
int 
main(void)
{
	char *ch1="ABCDEFG",*ch2="CDE";
	int flag=del_substr(ch1,ch2);
	
	printf("flag=%d\n",flag);
	while(*ch1!='\0')
	{
		printf("%c",*ch1);
		ch1++;
	}
	printf("\n");
	return 0;
}
