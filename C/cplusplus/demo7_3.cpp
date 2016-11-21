#include<iostream>
#include<cstdarg>
using namespace std;
void say_hello(char* name)
{
	cout<<"Hello,"<<name<<endl;
} 
void say_hello_args(char* name ...)
{
	va_list ap;
	va_start(ap,name);
	cout<<"hello,"<<name<<endl; 
	for(;;)
	{
		char* p=va_arg(ap,char*);
		if(p==0) break;
		cout<<"hello,"<<p<<endl;	
	} 
	va_end(ap);
	cerr<<'\n';
	if(name) exit(-1);
} 
int
main()
{
	char name[]="chen";
	char name2[]="chen2";
	char name3[]="chen3";
	
	//say_hello(name);
	say_hello_args(name,name2,name3,NULL) ;
} 
