#define LOCAL
#include<iostream>
using namespace std;

int
main()
{
#ifdef LOCAL
    freopen("4demo.in","r",stdin);
    freopen("4demo.out","w",stdout);
#endif 
    int age = 0 , total_month = 0 ;
	cout<<"Enter your age :"<<endl;
	cin>>age;
	total_month = 12 * age;
	cout<<"total_month:"<<total_month<<endl; 
	return 0;
} 
