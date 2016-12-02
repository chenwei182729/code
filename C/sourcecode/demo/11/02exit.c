#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  printf ("hello------\n");
  system ("echo 芙蓉");
  char cmd[] = "ls -l | wc -l > file1";
  system (cmd);
  if (access ("a.out", F_OK) == 0)
    {
      system ("a.out");
    }
  printf ("world------ \n");
}
