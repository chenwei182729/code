//#define LOCAL
#include<stdio.h>
#include<stdlib.h> 
static int count=0;
void show(char str[],int n=0);
int
main()
{
#ifdef LOCAL
    freopen("8_1demo.in","r",stdin);
    freopen("8_1demo.out","w",stdout);
#endif 
	char *str="hello";
	show(str);
	printf("=============\n");
	show(str,1);

	return 0;
} 
void show(char str[],int n)
{
	count++;
	for(int i = 0;i < count; i ++)
	{
		printf("%s\n",str);
	}
}
