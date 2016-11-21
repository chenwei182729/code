#include<stdio.h>
#include<stddef.h>
char *find_char(char const *source,char const *chars)
{
	//
	char *pchar,*tmp;
	pchar=NULL;	
	while(*source!='\0')
	{
		pchar=source;
		tmp=chars;
		while(*tmp!='\0')
		{
			if(*pchar==*tmp)
			{
				return pchar;
			}
			tmp++;
		}		
		source++;	
	}
	return NULL;	 
} 
int 
main ()
{
	char const *source="ABCDEF";
	char const *chars ="XYC";
	char *pchar;
	pchar=NULL;
	pchar=find_char(source,chars);
	if(pchar!=NULL)
	{
		printf("%c",*pchar);
	}
	return 0;
} 
