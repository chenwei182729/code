#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void* func(void* p)
{
	puts("threads");
	*(int*)p=200;
	int i;
	for(i=0;i<20;i++)
	{
		write(1,".",1);
		sleep(1);
	}
	return p;
}

int
main()
{
	pthread_t id;
	int x = 100;
	pthread_create(&id,NULL,func,&id);//创建一个线程，运行funcc(&x)
	int i ;
	for(i=0;i<10;i++)
	{
		write(1,"*",1);
		sleep(1);
	}
	printf("x=%d\n",x);
	
}
