//终止pri
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int
main ()
{
  int fd = open ("children", O_RDONLY);
  if (fd == -1)
    {
      puts ("没有捣乱的子进程");
      return 0;
    }
  char buf[100];
  pid_t cid;
  while (read (fd, &cid, sizeof (cid)) == sizeof (cid))
    {				//读取一个子进程
      sprintf (buf, "kill %d", cid);
      system (buf);
    }
  close (fd);
  unlink ("children");
}
