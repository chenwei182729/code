#define LOCAL
#include<stdio.h>
#include<stdlib.h> 
const int size=100; 
struct mystring
{
	char s[size];
	int len;
}mystring;
void init(struct mystring *mystr)
{
	mystr->len = 100 ;
	int i = 0 ;
	for(i=0 ; i < mystr->len ; i ++ )
	{
		mystr->s[i]='a'; 
	} 
}
void show(struct mystring *mystr)
{
	int i = 0 ;
	printf("mystr->s:%d\n",mystr->s);
	for(i = 0 ; i < mystr->len ; i ++)
	{
		printf("%c,",mystr->s[i]);
		if( (i%10)==0 )
			printf("\n");
	}
	printf("\n");
}
int
main()
{
#ifdef LOCAL
    freopen("01demo.in","r",stdin);
    freopen("01demo.out","w",stdout);
#endif 
	struct mystring str1;
	init(&str1);
	show(&str1);
	struct mystring str2;
	str2 = str1;
	str1.s[0]='B';
	show(&str1);
	show(&str2);
	return 0;
} 
