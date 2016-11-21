#include<stdio.h>
#define LIMIT 4096
char s[LIMIT];

main(void)
{
	int i ,c ;
	for(i = 0 ; i < LIMIT - 1 && (c = getchar()) != '\n' && c != EOF ; ++i)
		s[i] = c ;
	s[i] = '\0';
} 
