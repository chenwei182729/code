#include<iostream>
#include<cstdlib>
#include<cstring>
#include<new>
using namespace std;
struct chaff
{
	char droos[20];
	int slag;
};
char buffer1[50];
char buffer2[500];
int
main(int argc,char *argv[])
{
	chaff *p1,*p2;
	int *p3,*p4;
	p1=new chaff;
	p3=new int[20];
	
	p2=new (buffer1)chaff;
	p4=new (buffer2)int[20];	
	
	cout<<"&buffer1="<<&buffer1<<endl;
	cout<<"&p2     ="<<p2<<endl;
	
	char c_array[]="HELLOWORLDHELLOWOR";
	strcpy(p2->droos,c_array);
	p2->slag=1025;
	cout<<"&buffer1="<<(int)buffer1[20]<<endl;
	cout<<"p2->slag="<<p2->slag<<endl;
	
	cout<<"&buffer1="<<buffer1<<endl;
	cout<<"p2->droos="<<p2->droos<<endl;
	
}
