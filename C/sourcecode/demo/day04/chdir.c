#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
int
main()
{
	mkdir("mydir",0755);
	chdir("mydir");
	char buf[100];
	getcwd(buf,sizeof(buf));
	puts(buf);

	chdir("..");
	sleep(10);
	rmdir("mydir");

}
