#include<stdio.h>
int
main()
{
	int i=0,count = 10 ;

again:
	i++;
	printf("Hello World!\n");
	
	while(i < count)
	{
goto again;
	}
	return 0;
}
