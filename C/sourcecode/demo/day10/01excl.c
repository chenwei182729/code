#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int
main ()
{
  int fd = open ("01excl.c", O_RDONLY);
  if (fd == -1)
    {
      perror ("open");
      return -1;
    }
  struct flock pos;
  pos.l_type = F_RDLCK;		//加读锁
  pos.l_whence = SEEK_SET;
  pos.l_start = 19;		//从离头文件19的地方开始
  pos.l_len = 17;		//加锁长度17字节
//pos.l_pid = -1
  if (fcntl (fd, F_SETLK, &pos) == -1)
    {
      perror ("加读锁失败");
      return -1;
    }
  puts ("加读锁成功");
  sleep (10);			//访问文件中加锁的数据
  pos.l_type = F_UNLCK;
  fcntl (fd, F_SETLK, &pos);
  puts ("解读锁完毕!");
  close (fd);

}
