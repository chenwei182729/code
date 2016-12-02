#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void
func (int sig, siginfo_t * info, void *p)
{
  printf ("收到信号，来自用户%d的进程%d,附带参数为%d\n",
	  info->si_uid, info->si_pid, info->si_value.sival_int);
}

int
main ()
{
  struct sigaction act, oldact;
  act.sa_sigaction = func;	//设置带参信号处理函数
  sigemptyset (&act.sa_mask);	//不用屏蔽什么信号
  act.sa_flags = SA_SIGINFO;
  sigaction (SIGUSR2, &act, NULL /*oldset */ );	//登记信号处理
  if (fork () == 0)
    {
      //子进程
      union sigval v;
      v.sival_int = 2013;	//设置要传递的参数
      sigqueue (getppid (), SIGUSR2, v);	//发送信号
      sleep (1);
    }
  else
    {
      //父进程该干什么干什么
      pause ();
    }
}
