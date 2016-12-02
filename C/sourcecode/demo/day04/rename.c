#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//rename,symlink,chmod,access,remove
int
main (int argc, char *argv[])
{
  rename (argv[0], "furong");
  symlink ("furong", "lfr");
  chmod ("furong", 0555);
  if (access ("furong", F_OK)==0)
    {
      puts ("furong存在!");
    }

  if (access ("furong", R_OK)==0)
    {
      puts ("furong可读!");
    }
  if (access ("furong", W_OK)==0)
    {
      puts ("furong可写!");
    }
  if (access ("furong", X_OK)==0)
    {
      puts ("furong可执行!");
    }
}
