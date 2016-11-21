#define LOCAL
#include<iostream>
using namespace std;

int
main()
{
#ifdef LOCAL
    freopen("5demo.in","r",stdin);
    freopen("5demo.out","w",stdout);
#endif 
    float temputer = 0.0 , fahrenheit = 0.0 ;
	cout<<"Please enter a Celsius value :"<<endl;
	cin>>temputer; 
	fahrenheit = 1.8 * temputer + 32.0 ;
	cout<<temputer<<" degress Celsius is "<<fahrenheit<<" degress Fahrenheit ."<<endl;
	
	return 0;
} 
