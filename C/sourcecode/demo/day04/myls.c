#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>
#include<pwd.h>
#include<grp.h>
#include<string.h>
#include<time.h>
void
printtype (int mode)
{
  if (S_ISREG (mode))
    putchar ('-');
  else if (S_ISDIR (mode))
    putchar ('d');
  else if (S_ISLNK (mode))
    putchar ('l');
  else if (S_ISFIFO (mode))
    putchar ('p');
  else if (S_ISSOCK (mode))
    putchar ('s');
  else if (S_ISCHR (mode))
    putchar ('c');
  else if (S_ISBLK (mode))
    putchar ('b');
  else
    putchar ('@');
}

void
printaccess (int mode)
{				//rwxrwxrwx
  const char *acc = "rwx";
  int i;
  for (i = 0; i < 9; i++, mode <<= 1)
    putchar (mode & 0400 ? acc[i % 3] : '-');
}

void
showdetail (const char *name)
{
  struct stat s;
  lstat (name, &s);		//取得详细信息，存在结构变量s中
  printtype (s.st_mode);
  printaccess (s.st_mode);
  printf ("%2d", s.st_nlink);
  printf ("%7s", getpwuid (s.st_uid)->pw_name);
  printf ("%7s", getgrgid (s.st_gid)->gr_name);
  printf ("%10lu", s.st_size);
  char buf[20];
  strftime (buf, sizeof (buf), "%F %T", localtime (&s.st_mtime));
  printf ("%20s %s\n", buf, name);
}

// a a/b a/c a/b/d
// cur:a
// ls a: b,c
// ls b:XXX
// ls a/b : d
// cd a,ls b:d
void
listdetail (void)
{
  DIR *p = opendir (".");
  if (p == NULL)
    {
      perror ("opendir");
      return;
    }
  struct dirent *q = NULL;
  while ((q = readdir (p)) != NULL)
    {
      if (q->d_name[0] == '.')
	continue;
      //列出详细信息
      showdetail (q->d_name);
    }
}

int
main (int argc, char *argv[])
{
  if (argc > 2)
    {
      printf ("%s [目录路径]\n", argv[0]);
      return 0;
    }
  if (argc == 2)
    {				//命令行带了目录路径
      if (chdir (argv[1]) < 0)	//设为当前目录
	{
	  perror ("错误");
	  return -1;
	}

    }
  listdetail ();
}
