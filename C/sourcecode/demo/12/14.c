#include<stdio.h>
#include<pwd.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
void
func (int sig)
{
  //...
  getpwnam ("root");
  //...
}

int
main ()
{
  signal (SIGINT, func);
  struct passwd *p = getpwnam ("hadoop");
  sleep (1);
  printf ("uid=%d\n", p->pw_uid);
}
