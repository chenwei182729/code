#include<stdio.h>
struct B ;
struct A
{
	struct B *pre;
	int a;	
};
struct B
{
	struct A *pre;
	int b;
};
int
main()
{
	struct P *p;
	return 0 ;
} 
