#include<iostream>
using namespace std;
float fun_c(char c)
{
	cout<<"char c:"<<c<<endl;
	return (float)c;	
} 
typedef float (*FP)(char c);
FP fun_i(int i)
{
	char c=(char)(i);
	FP fp=&fun_c;
	fp(c);
	return fp;	
}
int main()
{
	FP fp;
	fp=fun_i(65);
	char c='o';
	fp(c);
  	return 0;
}
