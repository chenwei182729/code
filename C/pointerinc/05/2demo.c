#include<stdio.h>
#define RANGE 13
//
int islum(int ch)
{
	int flag=0;
	if(ch>='a'&&ch<='z')
	{
		flag=1;
	}
	else if(ch>='A'&&ch<='Z')
	{
		flag=2;
	}
	return flag;
}
int
main ()
{
	int ch,Z='Z',z='z';
	while(ch=getchar())
	{
		if (islum(ch)==2)
		{
			if(ch+RANGE>Z)
			{
				ch='A'+(ch+RANGE)%Z;
			}
			else
			{
				ch+=RANGE;
			}
		}
		else if(islum(ch)==1)
		{
			if(ch+RANGE>z)
			{
				ch='a'+(ch+RANGE)%z;
			}
			else
			{
				ch+=RANGE;
			}
		}	
		printf("%c",ch);
	} 
	return 0;
} 
