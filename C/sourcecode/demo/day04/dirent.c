#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
int
main()
{
	DIR* p=opendir(".");//打开当前目录，逐项读取显示
	//if(p==NULL){...}
	struct dirent* q;
	while((q=readdir(p))!=NULL)
	{
		if(q->d_name[0]=='.') continue;//隐藏文件
		printf("%s\n",q->d_name);
	}
	closedir(p);//关闭目录
}
