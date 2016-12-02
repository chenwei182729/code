#include<sys/time.h>
#include<signal.h>
#include<stdio.h>
void
timeout (int sig)
{
  puts ("时间到");
}

int
main ()
{
  signal (SIGALRM, timeout);
  struct itimerval iv;
  iv.it_value.tv_sec = 5;	//第一次定时5秒
  iv.it_value.tv_usec = 0;
  iv.it_interval.tv_sec = 10;	//以后每10秒打印一次
  iv.it_interval.tv_usec = 0;
  setitimer (ITIMER_REAL, &iv, NULL);
  for (;;)
    {
      write (1, ".", 1);
      sleep (1);
    }
}
