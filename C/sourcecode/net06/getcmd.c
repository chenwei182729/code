#include<stdlib.h>
static char *cmds[] = { "help","say","hello","bye","exit",NULL };
int getcmd(char* cmd)
{
	int n=0;
	while(cmds[n] != NULL)
	{
		if(strncasecmp(cmd,cmds[n],strlen(cmds[n])) == 0)
		{
			return n;
		}
		n++;
	}
	return -1;
}
