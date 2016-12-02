#include<stdio.h>
#include<unistd.h>

int
main()
{//ls -l -d /bin
	char* argv[]={
		"/bin/ls",
		"-l",
		"-d",
		"/bin",
		NULL//必须用一个以NULL为结束元素的字符数组
	};
	puts("........execute ls -l -d /bin ....");
	execv("/bin/ls",argv);
	puts("--------ERROR-----");;//看不到这个，除非出错
}

