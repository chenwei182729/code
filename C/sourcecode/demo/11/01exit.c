#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void
f1 (void)
{
  puts ("f1()");
}

void
f2 (void)
{
  puts ("f2()");
}

void
f3 (int n, void *p)
{
  free (p);			//释放动态内存
  printf (("n=0x%x,p=%p\n", n, p));
}

int
onefunc ()
{
  return 0;			//从所在的函数返回，如果是main函数，当然就是返回系统
}

int
main ()
{
  atexit (f1);			//登记f1，不要写成atexit(f1());
  atexit (f2);			//登记f2
  void *q = malloc (10);	//申请动态内存
  on_exit (f3, q);		//登记f3
  onefunc ();
  //以上只是等级f1/f2/f3函数，但没有调用他们
  printf ("groupid=%d\n", getpgid (getpid ()));
  printf ("q=%p\n", q);

  return 0;
  printf ("you cannot see me!");
}
