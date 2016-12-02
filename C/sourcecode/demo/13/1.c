#include<stdio.h>
#include<sys/ioctl.h>
#include<unistd.h>
#include<fcntl.h>
int
main ()
{
  int fd[2];
  pipe (fd);
  int n;
  char buf[100];
  if (fork () == 0)
    {
      //子进程
      close (fd[1]);
      while ((n = read (fd[0], buf, sizeof (buf))) > 0)
	{
	  //从管道读取数据
	  int i;
	  for (i = 0; i < n; i++)
	    {
	      if (islower (buf[i]))
		{
		  putchar (toupper (buf[i]));
		}
	      else if (isupper (buf[i]))
		{
		  putchar (tolower (buf[i]));
		}
	      else
		{
		  putchar (buf[i]);
		}
	    }
	}
    }
  else
    {
      //父进程
      close (fd[0]);		//关闭读端保留写端
      for (;;)
	{
	  n = read (STDIN_FILENO, buf, sizeof (buf));
	  if (buf[0] == 'q')
	    break;
	  write (fd[1], buf, n);
	}
      close (fd[1]);
    }
}
