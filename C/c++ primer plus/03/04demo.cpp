#define LOCAL
#include<iostream>
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("04demo.in","r",stdin);
    freopen("04demo.out","w",stdout);
#endif 
	long long seconds ; 
	long days,hours,minutes,second;
	cout<<"Eneter the number of seconds :"<<endl;
	cin>>seconds;
	long long tmp_seconds = seconds ;
	days = tmp_seconds / (24 * 60 * 60);
	tmp_seconds %= (24 * 60 * 60) ;
	hours = tmp_seconds / (60 * 60);
	tmp_seconds %= ( 60 * 60) ;
	minutes = tmp_seconds / 60 ;
	tmp_seconds %= 60 ;
	second = tmp_seconds ;
	
	cout<<seconds<<" seconds = "<<days <<" days ,"
	    <<hours<<" hours,"<<minutes<<" minutes ,"<<second<<" seconds."<<endl;
	return 0;
} 
