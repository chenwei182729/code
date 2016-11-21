#include <iostream>
using namespace std;
int main()
{
	//Unlike parameters , the value of a captured variable is copied when the lambda 
	// is created ,not when it is called
	size_t v1=42;
	auto f=[v1]{return v1;};
	cout<<f()<<endl;//42
	v1=0;
	auto j=f(); 
	cout<<j<<endl;//42
	//Because the value is copied when the lambda is created , subsequent changes to 
	// a captured variable have no effect on the corresponding value inside the lambda
	
	return 0;
}

