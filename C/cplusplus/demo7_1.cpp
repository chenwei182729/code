#include<iostream>
#include<cstring>
using namespace std;
int fun(char *c_str,int &len); 
typedef int (*REF)(char *,int &);
REF ref_fun,ref_fun2;
REF return_fun(REF);
void usefun(REF);
int
main()
{
	char *str="helloworld";
	int len=strlen(str);
	cout<<len<<endl;
	ref_fun=fun;
	ref_fun(str,len); 
	usefun(ref_fun);
	ref_fun2=return_fun(ref_fun);
	ref_fun2(str,len); 
}
int fun(char *c_str,int &len)
{
	for(int i=0;i<len;i++)
		cout<<*(c_str+i);
	cout<<endl;
}
void usefun(REF ref_fun)
{
	cout<<"使用函数指针作为参数\n";
}
REF return_fun(REF ref_fun)
{
	return  ref_fun;
} 
