#include<iostream>
using namespace std;
int main(void)
{
	int sum=10;
	auto f = [sum](int a){return sum+a;};  
    cout << f(5) << endl;//Êä³ö10 
	return 0;	
} 
