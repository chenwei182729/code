#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int
main ()
{
  if (fork () == 0)
    {				//子进程，加载child
      execl ("./child", "./child", "翡翠", NULL);
      puts ("加载./child失败");
      exit (-1);
    }
  else
    {				//父进程，做自己的事情
      for (;;)
	{
	  write (1, ".", 1);
	  sleep (1);
	}
    }

}
