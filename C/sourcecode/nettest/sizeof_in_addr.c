#include<netinet/in.h>
#include<stdio.h>
int
main()
{
	struct in_addr my_in_addr;
	struct sockaddr_in my_sockaddr_in;

	printf("sizeof (in_addr)=%d\n",sizeof(my_in_addr));
	printf("sizeof (sockaddr_in)=%d\n",sizeof(my_sockaddr_in));
//	printf("sin_len = %d\n",my_sockaddr_in.sin_len);
	return 0;
}
