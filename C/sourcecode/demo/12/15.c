#include<signal.h>
#include<stdio.h>
int
main()
{
	sigset_t ss;
	sigemptyset(&ss);//sigfillset(&ss)
	puts(sigismember(&ss,SIGINT)?"sigint":"noint");
	puts(sigismember(&ss,SIGTERM)?"sigint":"noint");
	sleep(5);
	sigaddset(&ss,SIGINT);
	sigaddset(&ss,SIGTERM);
	puts(sigismember(&ss,SIGINT)?"sigint":"noint");
	puts(sigismember(&ss,SIGTERM)?"sigint":"noint");
	sleep(5);
	sigdelset(&ss,SIGINT);
	puts(sigismember(&ss,SIGINT)?"sigint":"noint");
	puts(sigismember(&ss,SIGTERM)?"sigint":"noint");
	sleep(5);
	sigfillset(&ss);
	puts(sigismember(&ss,SIGINT)?"sigint":"noint");
	puts(sigismember(&ss,SIGTERM)?"sigint":"noint");

}
