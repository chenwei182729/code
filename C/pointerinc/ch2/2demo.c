#define LOCAL
#include<stdio.h>
#define MAX_SIZE 100
int main( void )
{
#ifdef LOCAL
    freopen("2demo.c","r",stdin);
    freopen("result","w",stdout);
#endif 
	char ch,c_arr[MAX_SIZE];
	int tag=-1;	
	while( (ch=getchar())!=EOF )
	{
		if(ch=='{')
		{
			c_arr[++tag]='{'; 
		}
		else if(ch=='}')
		{
			if(tag<0)
			{
				printf("²»Æ¥Åä\n");
				break;
			}
			else
			{
				--tag;
			}
		}
	}
	if(tag==0) printf("Æ¥Åä\n");
	return 0;
} 
