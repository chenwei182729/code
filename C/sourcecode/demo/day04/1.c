#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int
main()
{
	while(1)
	{
		int fd=open("abc",O_WRONLY|O_EXCL|O_CREAT,0777);
		if(fd>=0)//成功
		{
			printf("我成功了!\n");
			sleep(5);//usleep
			close(fd);
			unlink("abc");
		}
		else
		{
			printf("失败!\n");
		}
	}
}

