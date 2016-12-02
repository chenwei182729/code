//#include<iostream>
//using namespaces std;
#include<stdio.h>
struct Bird
{
};
struct Rock
{
};
int main()
{
	struct	Rock rock;
	void* v=&rock;
	struct	Bird* bv=v;
	return 0;
}
