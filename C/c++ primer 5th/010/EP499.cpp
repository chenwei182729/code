#include <iostream>
using namespace std;
void fcn3()
{
	size_t v1=42;
	auto f=[v1]() mutable {return ++v1;};
	cout<<f()<<endl;//42
	v1=0;
	auto j=f(); 
	cout<<j<<endl;//44
}
void fcn4()
{
	size_t v1=42;
	auto f=[&v1]() mutable {return ++v1;};
	cout<<f()<<endl;//42
	v1=0;
	auto j=f(); 
	cout<<j<<endl;//1
}
int main()
{
	fcn3();
	fcn4(); 
	
	return 0;
}

