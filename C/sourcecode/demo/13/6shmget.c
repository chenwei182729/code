#include<string.h>
#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int
main()
{
	int id=shmget(0x8888,0,0);//取得共享内存 不关心大小和权限
	if(id==-1){perror("shmget");return -1;}
	char* p=shmat(id,NULL,SHM_RDONLY);
	if(p==(char*)-1){perror("shmat");return -1;}
	puts(p);
}

