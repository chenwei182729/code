#include<signal.h>
#include<unistd.h>
#include<stdio.h>

void child()
{
	printf("pid=%d\n",getpid());
	pause();
}
int 
main()
{
	pid_t cid;
	cid=fork();
	if(cid==0){child();}
	int i;
	for(i=0;i<5;i++)
	{
		if(fork()==0){child();}
	}
	//父进程才会执行下面的内容
	signal(SIGTERM,SIG_IGN);//父进程忽略SIG_IGN
	sleep(5);
	printf("kill第一个子进程\n");
	kill(cid,SIGTERM);
	sleep(5);
	puts("向本组所有的进程发信号");
	kill(0,SIGTERM);
	sleep(5);
	puts("end");
}

