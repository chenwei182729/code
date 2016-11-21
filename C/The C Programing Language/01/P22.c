#include <stdio.h>

#define IN 1
#define OUT 0
main()
{
	int c,nc,nl,nw,state;

	nc = nl = nw = 0;
	state = OUT ;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN ; 
			++nw ;
		}
	}
	printf ("nc = %d , nl = %d , nw = %d \n", nc, nl, nw );
}
