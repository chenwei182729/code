#include<stdio.h>
int
main(int argc,char* argv[],char* env[])
{
	int i;
	for(i=0;env[i]!=NULL;i++)
		puts(env[i]); //显示环境变量

}
