#include<stdio.h>
#include<dlfcn.h>

int
main ()
{
  printf ("1--中文 2--english:");
  int sel;
  scanf ("%d", &sel);
  void *handle;
  if (sel == 1)
    handle = dlopen ("./libch.so", RTLD_NOW);
  else
    handle = dlopen ("./liben.so", RTLD_NOW);
  if (handle == NULL)
    {
      puts (dlerror ());
      return -1;
    }
  void (*fp) (void);
  fp = dlsym (handle, "welcome");
  if (fp == NULL)
    {
      puts (dlerror ());
      return -1;
    }
  fp ();
  dlclose (handle);
  return 0;
}
