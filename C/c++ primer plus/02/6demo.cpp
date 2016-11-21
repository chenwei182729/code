#define LOCAL
#include<iostream>
using namespace std;
void fun()
{
	double years = 0.0 ,distance = 0.0 ;
	cout<<"Enter the number of light years :"<<endl;
	cin>>years;
	distance = years * 63240 ;
	cout<<years <<" light years = "<< distance <<" astronomical units"<<endl;
} 
int
main()
{
#ifdef LOCAL
    freopen("6demo.in","r",stdin);
    freopen("6demo.out","w",stdout);
#endif 
    fun();
	return 0;
} 
