#include<string.h>
#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int
main()
{
	int id=shmget(0x8888,100,IPC_CREAT|0644);
	printf("id=%d\n",id);
	char* p=shmat(id,NULL,0);
	if(p==(char*)-1){perror("shmat");return -1;}
	strcpy(p,"csd2012欢迎你!");
	shmdt(p);
}
