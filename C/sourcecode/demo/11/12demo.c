#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fcntl.h>
int
main ()
{
  int i;
  pid_t cid;			//保存子进程id
  for (i = 0; i < 3; i++)
    {
      if ((cid = fork ()) == 0)	//子进程
	{
	  //子进程
	  char c = 'A' + i;
	  for (;;)
	    {
	      write (STDOUT_FILENO, &c, 1);
	      sleep (1);
	    }
	}
      else
	{
	  int fd = open ("children", O_WRONLY | O_CREAT, 0644);	//umask
	  if (fd == -1)
	    {
	      perror ("open");
	      return -1;
	    }
	  write (fd, &cid, sizeof (cid));
	  close (fd);
	}
    }
}
