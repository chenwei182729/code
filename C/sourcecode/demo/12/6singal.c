#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void
func (int sig)			//sig为当前处理信号
{
  switch (sig)
    {
    case SIGINT:
      puts ("我不拍Ctrl+C");
      break;
    case SIGTERM:
      puts ("想杀我，没门");
      break;
    case SIGTSTP:
      puts ("我是不会停的");
      break;
    }
}

int
main ()
{
  signal (SIGINT, func);
  signal (SIGTERM, func);
  signal (SIGTSTP, func);
  for (;;)
    {
      write (STDERR_FILENO, ".", 1);
      sleep (10);
    }
}
