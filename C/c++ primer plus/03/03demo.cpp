#define LOCAL
#include<iostream>
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("03demo.in","r",stdin);
    freopen("03demo.out","w",stdout);
#endif 
	double degrees , minutes , seconds,d_m_s; 
	cout<<"Enter a latitude in degrees , minutes ,and secouds :"<<endl;
	cout<<"First , Enter the degrees :"<<endl;
	cin>>degrees;
	cout<<"Next , Enter the minutes of arc :"<<endl;
	cin>>minutes; 
	cout<<"Finally , Enter the seconds of arc :"<<endl;
	cin>>seconds;
	
	d_m_s = degrees+((seconds / 60) + minutes) / 60 ;
	
	cout<<degrees<<" degrees ,"<<minutes<<" minutes ,"<<seconds<<" secouds = "<<d_m_s<<endl;
	return 0;
} 
