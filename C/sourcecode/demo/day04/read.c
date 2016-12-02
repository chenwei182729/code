#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int
main ()
{
  int fd = open ("id", O_RDWR | O_CREAT, 0777);
  if (fd < 0)
    {
      perror ("open");
      return -1;
    }
  unsigned int id = 0;
  read (fd, &id, sizeof (id));
  ++id;
  lseek(fd,0,SEEK_SET);
  write (fd, &id, sizeof (id));
  close (fd);
  printf ("id=%u\n", id);
  return 0;
}
