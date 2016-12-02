#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ret;
	
	printf("系统分配的进程号是：%d\n",getpid());
//	ret = system("ping www.hisense.com -c 2");
	ret = system("ping 127.0.0.1 -c 2");
	printf("返回值为：%d\n",ret);
	return 0;
}
