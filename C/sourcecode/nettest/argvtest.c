#include<stdio.h>
int
main(int argc,char **argv)
{
	printf("argc=%d\n",argc);
	while( *argv != NULL )
	{
		printf(" argv = %s\n",*argv++);
	}
}
