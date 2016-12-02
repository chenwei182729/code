#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
static char *cmds[] = { "help", "say", "hello", "bye", "exit", NULL };

int
getcmd (char *cmd)
{
  int n = 0;
  while (cmds[n] != NULL)
    {
      if (strncasecmp (cmd, cmds[n], strlen (cmds[n])) == 0)
	{
	  return n;
	}
      n++;
    }
  return -1;
}
#endif
void
main (void)
{
  char *replay[] = { "How may I help you ,sir?\n",
    "I waill say ",
    "How're you doing today?",
    "Si ya , mate!\n",
    "Go ahead !\n"
  };
  char buffer[1024];
  printf ("Welcome ! This is Server!\n");
  fflush (stdout);
  int pos = -1, ok = 0;
  do
    {
      while (fgets (buffer, 1023, stdin) == NULL);
      pos = getcmd (buffer);
      if (pos != -1)
	printf (replay[pos]);
      else
	{
	  printf ("Unknow Command !\n");
	  ok = 1;
	}
      fflush (stdout);
    }
  while (!ok);
}
