#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void
main (void)
{
  char buffer[1024];

  int ok = 0;
  //
  printf ("Welcome ! This is hello Service !\n");

  fflush (stdout);
  do
    {
      while (fgets (buffer, 1023, stdin) == NULL);
      if (strncasecmp (buffer, "exit", 4) == 0)
	{
	  ok = 1;
	}
      printf (buffer);
      fflush (stdout);
    }
  while (!ok);
}
