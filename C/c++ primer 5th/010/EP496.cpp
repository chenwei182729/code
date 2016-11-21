#include <iostream>
using namespace std;
int main()
{
	//A variable captured by reference acts like any other reference .
	//When we use the variable inside the lambda body ,we are using the 
	//object to which that reference is bound.In this case , when the lambda 
	//return v1,it returns the value of the object to which v1 refers
	//When the lambda returns v1, 
	size_t v1=42;
	auto f=[&v1]{return v1;};
	cout<<f()<<endl;//42
	v1=0;
	auto j=f(); 
	cout<<j<<endl;//0
	
	return 0;
}

