#include<stdio.h>
#include<stdlib.h> 
#include<iostream>
using namespace std;

struct CandyBar
{
	char name[20];
	double weight;
	int hot;
}CandyBar;

void fun(CandyBar & candyBar,char * name="Millennium Munch",double weight = 2.85,int hot = 350);
void show(CandayBar & candybar);
int
main()
{
	CandyBar candyBar;
	fun(candyBar);
	show(candyBar); 

	return 0;
} 

void fun(CandyBar &candyBar,char * name,double weight,int hot)
{
	strcpy(candyBar.name,name);
	candyBar.weight = weight;
	candyBar.hot = hot;
}
void show(CandayBar & candybar)
{
	printf("Name:%s\n",candybar.name);
	cout<<"Weight:"<<candybar.weight<<"\n";
	cout<<"Hot:"<<candybar.hot<<"\n";
}
