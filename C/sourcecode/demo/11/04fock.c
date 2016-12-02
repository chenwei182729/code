#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int
main ()
{
  puts ("hello");		//输出hello\n
  fork ();
  puts ("world!");		//两份都输出world
  //printf输出到缓冲区
  printf ("good");		//两份都输出good到缓冲区
  fork ();			//两份进程都会再克隆进程（缓存区也克隆）
  printf (" luck\n");		//四分都输出luck\n
}
