#include<stdio.h>
#include<unistd.h>
int
main ()
{
  if (fork () == 0)
    {
      printf ("子进程:%d,它的父进程：%d\n", getpid (), getppid ());
    }
  else
    {
      printf ("父进程:%d,它的父进程：%d\n", getpid (), getppid ());
    }
  puts ("hello");
}
