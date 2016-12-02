//#include<iostream>
//using namespaces std;
#include<stdio.h>
struct Bird
{
	void fly()
	{ 
		printf("bird fly");
	}
};
struct Rock
{
};
int main()
{
	struct	Rock rock;
	void* v=&rock;
	struct	Bird* bv=v;
	bv.fly();
	return 0;
}
