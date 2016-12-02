#include<stdio.h>
#include<unistd.h>

int
main()
{//ls -l -d /bin
#if 0
	char* argv[]={
		"/bin/ls",
		"-l",
		"-d",
		"/bin",
		NULL//必须用一个以NULL为结束元素的字符数组
	};
#endif
	puts("........execute ls -l -d /bin ....");
	execl("/bin/ls","/bin/ls","-l","-d","/bin",NULL);
	puts("--------ERROR-----");;//看不到这个，除非出错
}

