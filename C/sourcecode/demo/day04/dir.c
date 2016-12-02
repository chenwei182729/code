#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
int
main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("%s 文件或者目录的路径\n",argv[0]);
		return 0;
	}
	struct stat s;
	if(lstat(argv[1],&s)!=0)
	{
		puts("不存在");
		return 1;
	}
	
	if(S_ISREG(s.st_mode)) puts("普通文件");
	else if(S_ISDIR(s.st_mode)) puts("目录");
	else if(S_ISLNK(s.st_mode)) puts("符号链接");
	else puts("其它");
	printf("权限 %o\n",s.st_mode&0777);
}
