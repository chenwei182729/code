#include<stdlib.h>
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
int
main ()
{
  int i;
  char *s = "abcdefg";
  for (i = 0; i < 3; i++)
    {
      if (fork () == 0)
	{
//子进程进入大括号执行
	  //...
	  int j;
	  for (j = 0; j < 15; j++)
	    {
	      write (STDERR_FILENO, s + i, 1);
	      sleep (1);
	    }
	  exit (10 + i);
	}			//父进程直接进入下一轮循环
    }
  //父进程会继续执行到这里
  int info;
  for (;;)
    {
      //没有子进程为止
      //pid_t child = wait (&info);
      pid_t child = waitpid (-1, &info, WNOHANG);

      if (child == -1)
	break;
      if (child != 0)
	printf ("%d结束\n", child);
      write (STDERR_FILENO, ".", 1);
      sleep (1);
    }
  puts ("全部子进程都结束了");
  pause ();			//暂停以便查看子进程状态
}
