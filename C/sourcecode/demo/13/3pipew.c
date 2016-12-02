#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
typedef struct{
	char name[20];
	int age;
	double weight;
}Person;
int
main()
{
	int fd=open("pipe",O_RDONLY);
	if(fd==-1)
	{
		perror("open");
		return -1;
	}
	puts("打开成功");
	Person x;
	if(read(fd,&x,sizeof(x))!=sizeof(x))
	{
		perror("read");return -1;
	}
	printf("姓名：%s,年龄：%d,体重：%lf\n",x.name,x.age,x.weight);
	close(fd);
}
